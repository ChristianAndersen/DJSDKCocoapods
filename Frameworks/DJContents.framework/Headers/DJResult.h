//
//  DJResult.h
//  DJContentsExample
//
//  Created by dianju on 16/7/13.
//  Copyright © 2016年 dianju. All rights reserved.
//

#import <Foundation/Foundation.h>

#define DJRESULT_TYPE_SEALPLATFORM                      1001 //印章平台

#define DJRESULT_TYPE_DJSEAL                            1002 //无纸化

//文件保存
#define DJRESULT_SEAL_SAVE @"DJRESULT_ULAN_DOCUMENTSAVE"

#define SAVE_SUCESSFUL                                  0x000050 //保存成功

#define SAVE_FAILED                                     0x000051 //保存失败

#define DJRESULT_SEAL_INIT @"DJRESULT_FILE_INIT"

#define FILE_OPENFILE_ERROR                             0x000041 //文件未打开

#define FILE_LOGIN_ERROR                                0x000042 //用户登入错误

#define FILE_VERIFYLIC_ERROR                            0x000043 //用户授权验证错误

#define FILE_CACHEVERIFYLIC_ERROR                       0x000044 //本地缓存授权文件失效



#define DJRESULT_SEAL_CONNECT @"DJRESULT_SEAL_CONNECT"//印章平台问题

#define FILE_GETVERIFYLIC_ERROR                         0x000045 //授权平台获取的授权码错误

#define FILE_GETSEALLIST                                0x000046 //授权平台获取印章列表失败

#define FILE_GETSEALDATA                                0x000047 //授权平台获取印章数据失败

#define FILE_GETSEALDATA_SUCESSFUL                      0x000048 //授权平台获取印章数据成功

#define FILE_SIGNBYSERVER_SUCESSFUL                     0x000049 //授权平台数据签名成功

#define FILE_GETVERIFYLIC_SUCESSFUL                     0x000050 //授权平台获取授权文件成功验证成功

#define FILE_CONNECT_ERROR                              0x000051 //授权平台获取的授权码错误

#define FILE_REQUESTVERIFYLIC_ERROR                     0x000052 //印章平台获取授权文件错误

#define OTHERERROR                                     -999999//其他错误

//userInfo键值对键字段
//信息描述
#define ResultMessage @"resultMessage"
//文件路径
#define ResultFilePath @"filePath"

@interface DJResult : NSObject
//返回结果码
@property (nonatomic,assign)    NSInteger resultCode;
//返回结果域
@property (nonatomic,copy)      NSString *domain;
//返回结果信息
@property (nonatomic,strong)    NSDictionary *userInfo;

@property (nonatomic,assign)    int type;

-(NSString*)messageStr;

-(NSString*)filePath;

@end


