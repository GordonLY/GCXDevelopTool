//
//  GXDevelopKey.h
//  LOCO
//
//  Created by 高才新 on 16/1/28.
//  Copyright © 2016年 IU-Apps. All rights reserved.
//

#ifndef GXDevelopKey_h
#define GXDevelopKey_h

#import "GXDevelopExtern.h"
// 系统单例
#define GXUserDefaults         [NSUserDefaults standardUserDefaults]
#define GXNotificationCenter [NSNotificationCenter defaultCenter]
#define GXFileManager          [NSFileManager defaultManager]

// cgrect 获取
#define GXRectW(rect) rect.size.width
#define GXRectH(rect) rect.size.height
#define GXRectX(rect) rect.origin.x
#define GXRectY(rect) rect.origin.y

/**
 *屏幕宽度
 */
#define GXScreenWidth [UIScreen mainScreen].bounds.size.width
/**
 *屏幕高度
 */
#define GXScreenHeight  [UIScreen mainScreen].bounds.size.height

/**
 *如果需要适配 frame 将用到以下宏  需要将GXDesignSize的 key 值改成设计原稿机型的尺寸. CGSizeMake(375.f, 667.f) 是 iphone6的尺寸.
 */
#define GXDesignSize                  CGSizeMake(375.f,667.f)              //设计原稿机型的尺寸
/**
 *宽度比
 */
#define  GXScreenWidthRatio            ([GXDevelopExtern sharedExtern].gxScreenWidthRatio)   // 当前屏宽/设计原稿的比例
#define  GXWidthFitFloat(value)  ((value)*GXScreenWidthRatio)        // 宽度转化成适配后的float值
#define  GXWidthFitCeil(value)   (ceil((value)*GXScreenWidthRatio))  // 宽度转化成适配后的ceil值(不小于float的最小整数)
#define  GXWidthFitFloor(value)  (floor((value)*GXScreenWidthRatio)) // 宽度转化成适配后的floor值(不大于float的最大整数)

/**
 *高度比
 */
#define  GXScreenHeightRatio           ([GXDevelopExtern sharedExtern].gxScreenHeightRatio) // 当前屏高/设计原稿的比例
#define  GXHeightFitFloat(value) ((value)*GXScreenHeightRatio)       // 高度转化成适配后的float值
#define  GXHeightFitCeil(value)  (ceil((value)*GXScreenHeightRatio)) // 高度转化成适配后的ceil值(不小于float的最小整数)
#define  GXHeightFitFloor(value) (floor((value)*GXScreenHeightRatio))// 高度转化成适配后的floor值(不大于float的最大整数)

/**
 *宽高比最小值
 */
#define  GXScreenMinRatio ([GXDevelopExtern sharedExtern].gxScreenMinRatio)
#define  GXMinFitFloat(value) ((value)*GXScreenMinRatio)       // 转化成适配后的float值
#define  GXMinFitCeil(value) ((value)*GXScreenMinRatio)       // 转化成适配后的ceil值(不小于float的最小整数)
#define  GXMinFitFloor(value) ((value)*GXScreenMinRatio)       // 转化成适配后的floor值(不大于float的最大整数)

/**
 *宽高比最大值
 */
#define  GXScreenMaxRatio ([GXDevelopExtern sharedExtern].gxScreenMaxRatio)
#define  GXMaxFitFloat(value) ((value)*GXScreenMaxRatio)       // 转化成适配后的float值
#define  GXMaxFitCeil(value) ((value)*GXScreenMaxRatio)       // 转化成适配后的ceil值(不小于float的最小整数)
#define  GXMaxFitFloor(value) ((value)*GXScreenMaxRatio)       // 转化成适配后的floor值(不大于float的最大整数)
// 颜色
#define GXColorFromRGBA(R,G,B,A) [UIColor colorWithRed:R/256.f green:G/256.f blue:B/256.f alpha:A]
/**
 *    GXColorFromRGBhueA(0x000000(16进制颜色), 0);
 */
#define GXColorFromRGBhueA(RGBhue, A) [UIColor colorWithRed:((float)((RGBhue & 0xFF0000) >> 16))/255.0 green:((float)((RGBhue & 0x00FF00) >> 8))/255.0 blue:((float)(RGBhue & 0x0000FF))/255.0 alpha:A]

/**
 *自定义log (发布版本不打印任何信息)
 */
#ifdef DEBUG
#define GXLog(...) NSLog(__VA_ARGS__)
#else
#define GXLog(...)
#endif
/**
 *打印函数名及函数的调用者 (测试使用:如-[MyViewController dealloc])
 */
#define GXLogFunc         GXLog(@"%s",__func__);
#define GXLogFuncMsg(msg) GXLog(@"%s-%@",__func__,msg);

/**
 *快速生成 weakself 主要用于 block 前声明
 */
#define GXWeakSelf(weakSelf)  __weak __typeof(&*self)weakSelf = self;


#endif /* GXDevelopKey_h */
