//
//  UIPageControl+GCXDevelop.h
//  LOCO
//
//  Created by 高才新 on 15/12/18.
//  Copyright © 2015年 IU-Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@interface UIPageControl (GCXDevelop)
/**
 *快速设置属性
 */
- (void)gcxSetWithFrame:(CGRect)frame totalPages:(NSUInteger)totalPages curPage:(NSUInteger)curPage pageColor:(UIColor *)pageColor curPageColor:(UIColor *)curPageColor bgColor:(UIColor *)bgColor;

+ (UIPageControl *)gcxPagetWithFrame:(CGRect)frame totalPages:(NSUInteger)totalPages curPage:(NSUInteger)curPage pageColor:(UIColor *)pageColor curPageColor:(UIColor *)curPageColor bgColor:(UIColor *)bgColor ;

@end