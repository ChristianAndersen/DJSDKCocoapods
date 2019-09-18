//
//  DJBlockZoomView.h
//  DJContent
//
//  Created by yons on 14-8-28.
//  Copyright (c) 2014年 dianju. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DJBlockHandle;

@interface DJSeparateBlockView : UIView

@property (nonatomic,assign) int areaNum;
@property (nonatomic,assign) float handSize;
@property (nonatomic,assign) float handHeight;
//提交的等待时间，小于0.5无效，需要手动提交
@property (nonatomic,assign) double submitTimer;
//提交的选中状态
@property (nonatomic,assign) BOOL isHightLight;

- (DJBlockHandle*)submit;
// 手写笔迹回调，返回笔记图片
- (void)submitComplete:(void (^)(UIImage* image))complete;

- (void)deleteBackward;
- (void)nextLineBackward;
- (void)spaceBackward;
- (void)cleanBackward;
//设置手写view背景
- (void)setDrawViewBackground:(UIImage*)image;

@end

@interface DJBlockHandle : NSObject

- (void)remove;

@end
