//
//  DJZoomView.h
//  DJContent
//
//  Created by yons on 14-8-18.
//  Copyright (c) 2014年 dianju. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(int, DJZoomAction)
{
    DJZoomActionWrite,
    DJZoomActionErase
};

@interface DJZoomView : UIView

@property (nonatomic) DJZoomAction currentAction;

- (void)undo;

- (void)redo;

- (void)clear;

- (void)submit;

- (void)submitSeal:(CGRect)rect;

- (void)submitSeals:(NSMutableDictionary*)seals;

- (void)setDrawViewBackground:(UIImage*)image;

- (UIImage*)submitForGetDrawImage;

@end
