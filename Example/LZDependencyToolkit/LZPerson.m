//
//  LZPerson.m
//  LZDependencyToolkit_Example
//
//  Created by Dear.Q on 2019/6/20.
//  Copyright © 2019 lilei_hapy@163.com. All rights reserved.
//

#import "LZPerson.h"
#import <objc/runtime.h>

@implementation LZPerson

- (NSString *)description {
    return [self lz_customDescription];
}

@end
