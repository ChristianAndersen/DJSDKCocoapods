//
//  DJContentViewDelegate.h
//  test1
//
//  Created by yons on 14-4-22.
//  Copyright (c) 2014年 yons. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DJContentView;
@class DJTextAreaBlockHandle;
@class DJSeparateAreaBlockView;
@class DJSeparateAreaBlockViewParams;
@class DJTextBlockHandle;
@class TextBlock;
@class DJSeparateBlockView;
@class DJResult;
@class DJComboBoxHandle;

@protocol DJContentViewDelegate <NSObject>

@optional

- (UIView *)contentHeaderView;
//对DJcontentView对象执行的操作
- (void)contentViewDidScroll:(DJContentView *)view;
- (void)contentViewDidDraw:(DJContentView *)view;
- (void)contentViewDidErase:(DJContentView *)view;
- (void)contentViewDidSeal:(DJContentView *)view;
- (void)contentViewDidCover:(DJContentView *)view;

- (void)contentView:(DJContentView*)contentView handle:(DJTextBlockHandle*)handle point:(NSString*)point;

- (void)contentView:(DJContentView*)contentView clicked:(NSString*)point indexPath:(NSIndexPath*)indexPath;

//参数
/*
 *currentTextBlock :返回textBlock的id
 *id的编号从1开始，每次增加一个textblock编号加一
 */
//页面绘制完毕的代理
- (void)drawPageComplete;

- (void)contentView:(DJContentView*)contentView verifyInfo:(NSDictionary*)verifyInfo;

- (void)contentView:(DJContentView*)contentView currentPage:(int)page pageCount:(int)pageCount;

- (void)contentView:(DJContentView*)contentView handle:(DJTextBlockHandle*)handle;

- (void)contentView:(DJContentView*)contentView textAreaBlockNeedEdit:(NSString*)text handle:(DJTextAreaBlockHandle*)handle
;
- (void)contentView:(DJContentView*)contentView textAreaBlockNeedEdit:(NSString*)text handle:(DJTextAreaBlockHandle*)handle textAreaBlockNName:(NSString *)areaName;

- (void)contentView:(DJContentView *)contentView comboBoxBlockDidTap:(DJComboBoxHandle *)handle areaName:(NSString*)areaName;

- (DJSeparateAreaBlockViewParams*)contentView:(DJContentView*)contentView drawAreaBlockNeedEdit:(DJSeparateAreaBlockView*)view;

- (DJSeparateBlockView *)contentView:(DJContentView*)contentView drawBlockNeedEdit:(DJSeparateBlockView*)view;

//从授权平台获取授权回调
-(void)contentView:(DJContentView*)contentView getVerifylicResult:(DJResult*)verResult;


@end

