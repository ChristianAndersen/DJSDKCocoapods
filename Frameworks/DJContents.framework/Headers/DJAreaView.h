//
//  PopupZoomView.h
//  DJContent
//
//  Created by yons on 14-8-7.
//  Copyright (c) 2014年 dianju. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(int, DJAreaAction)
{
    DJAreaActionWrite,
    DJAreaActionErase
};

@interface DJAreaHandle : NSObject

- (void)remove;

@end

@interface DJAreaView : UIView
@property (nonatomic) DJAreaAction currentAction;

- (void)undo;
- (void)redo;
- (void)clear;

- (DJAreaHandle*)submit;
- (void)setMeassage:(NSString*)meassage timeStrig:(NSString*)timeStr;

@end


