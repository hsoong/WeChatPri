//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ProtobufCGIWrap, UnifyAuthResponse;

@protocol WCAccountManualAuthControlLogicDelegate <NSObject>
- (_Bool)onManualAuthControlLogicError:(ProtobufCGIWrap *)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(UnifyAuthResponse *)arg2;
@end

