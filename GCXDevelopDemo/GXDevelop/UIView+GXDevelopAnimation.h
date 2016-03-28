//
//  UIView+GXDevelopAnimation.h
//  LOCO
//
//  Created by 高才新 on 15/12/24.
//  Copyright © 2015年 IU-Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@interface UIView (GXDevelopAnimation)
/**
 *给 view 添加一个永久旋转的动画 可通过 view.layer 移除动画
 */
- (CABasicAnimation *)gxAddNotStopRotateAnimationDuration:(CGFloat)duration key:(NSString *)key;
/**
 *给 view 添加一个左右震动动画
 */
- (CAAnimation *)gxShakeAnimationWithShakeValue:(CGFloat)value duration:(CGFloat)duration key:(NSString *)key;

@end