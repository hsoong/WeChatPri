//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCOutPhoneContact, WCOutRecentCallItem;

@interface WCOutRecentCallItemAndContactArchive : NSObject
{
    WCOutRecentCallItem *_lastCallItem;
    WCOutPhoneContact *_contact;
}

@property(retain, nonatomic) WCOutPhoneContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCOutRecentCallItem *lastCallItem; // @synthesize lastCallItem=_lastCallItem;
- (void).cxx_destruct;

@end
