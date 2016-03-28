//
//  CALayer+GXDevelop.m
//  LOCO
//
//  Created by 高才新 on 15/12/16.
//  Copyright © 2015年 IU-Apps. All rights reserved.
//

#import "CALayer+GXDevelop.h"

@implementation CALayer (GXDevelop)

- (CAGradientLayer *)gxSetGradientLayerWithColors:(NSArray *)colors layerFrame:(CGRect)frame direction:(GXGradientLayerDirectionOption)direction {
    
    CAGradientLayer * layer = [CAGradientLayer layer];
    layer.frame    = frame;
    layer.colors = colors;
    CGPoint  start = CGPointMake(0.5, 0);
    CGPoint end = CGPointMake(0.5, 1);
    
    switch (direction) {
        case GXGradientLayerDirectionTopToDown:
        {
//            start = CGPointMake(0.5, 0);
//            end = CGPointMake(0.5, 1);
        }
            break;
        case GXGradientLayerDirectionLeftToRight:
        {
            start = CGPointMake(0, 0.5);
            end = CGPointMake(1, 0.5);
        }
            break;
        case GXGradientLayerDirectionTopLeftToDownRight:
        {
            start = CGPointMake(0, 0);
            end = CGPointMake(1, 1);
        }
            break;
        case GXGradientLayerDirectionTopRightToDownLeft:
        {
            start = CGPointMake(1, 0);
            end = CGPointMake(0, 1);
        }
            break;
        case GXGradientLayerDirectionOther:
        {
//            start = CGPointMake(0.5, 0);
//            end = CGPointMake(0.5, 1);
        }
            break;
            
        default:
            break;
    }
    
    layer.startPoint = start;
    layer.endPoint   = end;
    [self addSublayer:layer];
    return layer;
}

- (UIColor *)gxGetColorFromPoint:(CGPoint)point
{
    unsigned char pixel[4] = {0};
    
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    
    CGContextRef context = CGBitmapContextCreate(pixel, 1, 1, 8, 4, colorSpace, kCGBitmapAlphaInfoMask & kCGImageAlphaPremultipliedLast);
    
    CGContextTranslateCTM(context, -point.x, -point.y);
    
    [self renderInContext:context];
    
    CGContextRelease(context);
    CGColorSpaceRelease(colorSpace);
    
    //NSLog(@"pixel: %d %d %d %d", pixel[0], pixel[1], pixel[2], pixel[3]);
    
    UIColor *color = [UIColor colorWithRed:pixel[0]/255.0 green:pixel[1]/255.0 blue:pixel[2]/255.0 alpha:pixel[3]/255.0];
    
    return color;
}

@end