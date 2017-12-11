//
//  NSObject+LZRuntime.h
//  Pods
//
//  Created by Dear.Q on 2017/12/9.
//
//

#import <Foundation/Foundation.h>

@interface NSObject (LZRuntime)

/**
 *  类交换方法
 */
void LZ_exchangeClassMethod(Class class, SEL originSelector, SEL swizzleSelector);

/**
 *  对象交换方法
 */
void LZ_exchangeInstanceMethod(Class class, SEL originSelector, SEL swizzleSelector);

/**
 *  添加属性
 */
void LZ_setAssociatedObject(id object, const void *key, id value);

/**
 *  获取属性
 */
id LZ_getAssociatedObject(id object, const void *key);

@end
