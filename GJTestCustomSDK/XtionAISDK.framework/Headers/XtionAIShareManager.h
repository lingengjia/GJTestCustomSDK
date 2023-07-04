//
//  XtionAIShareManager.h
//  XtionAISDK
//
//  Created by 南风 on 2023/6/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 统一对外接口类
@interface XtionAIShareManager : NSObject

+ (instancetype)sharedManager;

- (BOOL)iSAuthTokenValid;

// 旧版初始化
- (void)SDKHost:(NSString *)account accessKey:(NSString *)accessKey result:(void(^) (NSDictionary *dict))result;

// 新版初始化
- (void)SDKHost:(NSString *)host account:(NSString *)account accessKey:(NSString *)accessKey result:(void(^) (NSDictionary *dict))result;

- (void)checkWebFilesVersionWithsdkH5Host:(NSString *)sdkH5Host sdkH5Token:(NSString *)sdkH5Token;

- (void)getFullSencePictures:(NSArray *)cameraModeArr dataRetained:(NSString *)dataRetained result:(void(^) (NSDictionary *dict,BOOL isFinished))result;

- (void)getFakePhotos:(NSArray *)paths result:(void(^) (NSDictionary *dict))result;

/// 测试日志
- (void)testLog;

@end

NS_ASSUME_NONNULL_END
