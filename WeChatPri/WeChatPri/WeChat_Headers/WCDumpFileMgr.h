//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCDumpFileMgr : MMService <IMsgExt, ICdnComMgrExt, MMService>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_dicDumpFileContext;
}

- (void).cxx_destruct;
- (void)OnCdnUpload:(id)arg1;
- (void)reportFail:(id)arg1;
- (void)reportFileInfo:(id)arg1 withContext:(id)arg2;
- (void)dumpFile:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

