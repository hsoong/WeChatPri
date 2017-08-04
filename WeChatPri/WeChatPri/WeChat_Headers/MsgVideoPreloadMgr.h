//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IClearDataMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSString;

@interface MsgVideoPreloadMgr : MMService <MMService, IMsgExt, IClearDataMgrExt>
{
}

- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResumePreload;
- (void)PausePreload;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
