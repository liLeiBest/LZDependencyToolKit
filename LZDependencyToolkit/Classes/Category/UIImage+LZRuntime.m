//
//  UIImage+LZRuntime.m
//  Pods
//
//  Created by Dear.Q on 16/8/10.
//
//

#import "UIImage+LZRuntime.h"
#import "UIImage+LZInstance.h"
#import "NSObject+LZRuntime.h"
#import "NSString+LZRegular.h"

@implementation UIImage (LZRuntime)

+ (void)load {
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        
        SEL originSelector = @selector(imageNamed:);
        SEL swizzleSelector = @selector(LZ_imageNamed:);
        LZ_exchangeClassMethod(self, originSelector, swizzleSelector);
    });
}

+ (UIImage *)LZ_imageNamed:(id)name {
    if ([name isKindOfClass:[UIImage class]]) {
        return (UIImage *)name;
    }
    
    UIImage *image = nil;
    if ([name isKindOfClass:[NSURL class]]) {
        
        NSData *imgData = [NSData dataWithContentsOfURL:(NSURL *)name];
        image = [UIImage imageWithData:imgData];
        return image;
    } else if ([name isKindOfClass:[NSData class]]) {
        
        image = [UIImage imageWithData:(NSData *)name];
        return image;
    } else if ([name isValidString]) {
        if (@available(iOS 8.0, *)) {
            image = [UIImage imageNamed:name inBundle:[NSBundle mainBundle] compatibleWithTraitCollection:nil];
        } else {
            image = [UIImage LZ_imageNamed:name];
        }
        if (nil == image) {
            image = [UIImage imageWithContentsOfFile:name];;
        }
        if (nil == image) {
            
            NSURL *imgURL = [NSURL URLWithString:name];
            NSData *imgData = [NSData dataWithContentsOfURL:imgURL];
            image = [UIImage imageWithData:imgData];
        }
        if (nil == image) {
            
            NSString *imgName = [NSString stringWithFormat:@"%@.png", name];
            NSString *path =[[NSBundle mainBundle] pathForResource:imgName ofType:nil];
            image = [UIImage imageWithContentsOfFile:path];
            if (nil == image) {
                
                imgName = [NSString stringWithFormat:@"%@.jpg", name];
                path = [[NSBundle mainBundle] pathForResource:imgName ofType:nil];
                image = [UIImage imageWithContentsOfFile:path];
            }
            if (nil == image) {
                
                imgName = [NSString stringWithFormat:@"%@@%.0fx.png", name, [[UIScreen mainScreen] scale]];
                path = [[NSBundle mainBundle] pathForResource:imgName ofType:nil];
                image = [UIImage imageWithContentsOfFile:path];
            }
        }
#if 0
        if (nil == image) {
            image = [UIImage imageWithString:name size:CGSizeMake(100, 100)];
        }
#endif
    }
    return image;
}

@end
