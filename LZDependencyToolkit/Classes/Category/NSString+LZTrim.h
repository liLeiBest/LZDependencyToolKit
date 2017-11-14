//
//  NSString+LZTrim.h
//  Pods
//
//  Created by Dear.Q on 2017/6/6.
//
//

#import <Foundation/Foundation.h>

@interface NSString (LZTrim)

/**
 @author Lilei
 
 @brief 截去左侧特殊字符
 
 @param characterSet 字符集 NSCharacterSet
 @return NSString
 */
- (NSString *)trimmingLeftCharactersInSet:(NSCharacterSet *)characterSet;

/**
 @author Lilei
 
 @brief 截去右侧特殊字符
 
 @param characterSet 字符集 NSCharacterSet
 @return NSString
 */
- (NSString *)trimmingRightCharactersInSet:(NSCharacterSet *)characterSet;

/**
 @author lilei
 
 @brief 截去两侧的控制字符集

 @return NSString
 */
- (NSString *)trimmingControlCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧的空白符
 
 @return NSString
 */
- (NSString *)trimmingWhitespaceCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧的空格、换行符
 
 @return NSString
 */
- (NSString *)trimmingWhitespaceAndNewlineCharacterSet;

/**
 @author lilei
 
 @brief 截去十进制数字，即阿拉伯数字
 
 @return NSString
 */
- (NSString *)trimmingDecimalDigitCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧的汉字、字母
 
 @return NSString
 */
- (NSString *)trimmingLetterCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧的小写字母
 
 @return NSString
 */
- (NSString *)trimmingLowercaseLetterCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧的大写字母
 
 @return NSString
 */
- (NSString *)trimmingUppercaseLetterCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧的非基本字符集
 
 @return NSString
 */
- (NSString *)trimmingNonBaseCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧的汉字、字母、数字
 
 @return NSString
 */
- (NSString *)trimmingAlphanumericCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧的可分解字符集
 
 @return NSString
 */
- (NSString *)trimmingDecomposableCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧的非法字符集
 
 @return NSString
 */
- (NSString *)trimmingIllegalCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧的标点符号
 
 @return NSString
 */
- (NSString *)trimmingPunctuationCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧首字母大写的字符集
 
 @return NSString
 */
- (NSString *)trimmingCapitalizedLetterCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧符号字符集
 
 @return NSString
 */
- (NSString *)trimmingSymbolCharacterSet;

/**
 @author lilei
 
 @brief 截去两侧换行符
 
 @return NSString
 */
- (NSString *)trimmingNewlineCharacterSet;

#pragma mark - Deprecated
- (NSString *)stringByTrimmingLeftCharactersInSet:(NSCharacterSet *)characterSet __attribute__((deprecated("trimmingLeftCharactersInSet:")));
- (NSString *)stringByTrimmingRightCharactersInSet:(NSCharacterSet *)characterSet __attribute__((deprecated("trimmingRightCharactersInSet")));
+ (NSString *)trimWhitespaceAndNewline:(NSString *)val __attribute__((deprecated("trimmingWhitespaceAndNewlineCharacterSet")));

@end
