//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

@interface WCPayGetPayCardListLogic : WCPayControlLogic
{
    int scene;
}

@property(nonatomic) int scene; // @synthesize scene;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)startLogic;

@end

