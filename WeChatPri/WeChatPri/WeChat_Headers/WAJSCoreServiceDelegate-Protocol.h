//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAJSCoreService;

@protocol WAJSCoreServiceDelegate <NSObject>
- (_Bool)reportPerformance;
- (void)triggerStrictBanMode:(NSString *)arg1;
- (_Bool)checkServiceRunInMainThread:(NSString *)arg1;
- (_Bool)checkServiceRunMode:(NSString *)arg1;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 failHandler:(void (^)(NSString *))arg3 fromAppService:(WAJSCoreService *)arg4;
- (_Bool)hasPermissionWithJSAPI:(NSString *)arg1 getState:(unsigned int *)arg2 fromAppService:(WAJSCoreService *)arg3;
@end

