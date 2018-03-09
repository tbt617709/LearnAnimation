//
//  AnimationView.h
//  005-一个复杂动画的实现_OC
//
//  Created by 马遥 on 2018/1/23.
//  Copyright © 2018年 马遥. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnimationView : UIView

@property (nonatomic, copy) void(^animationCompleted)(BOOL completed);

- (void)startAnimation;

@end
