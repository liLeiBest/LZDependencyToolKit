#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "LZDependencyToolkit.h"
#import "LZDependencyUnit.h"
#import "LZDeviceUnit.h"

FOUNDATION_EXPORT double LZDependencyToolkitVersionNumber;
FOUNDATION_EXPORT const unsigned char LZDependencyToolkitVersionString[];

