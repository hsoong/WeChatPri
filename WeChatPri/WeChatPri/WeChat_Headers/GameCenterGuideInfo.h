//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface GameCenterGuideInfo : MMObject <PBCoding>
{
    NSString *title;
    NSArray *guideList;
    NSString *moreTitle;
    NSString *moreURL;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *moreURL; // @synthesize moreURL;
@property(retain, nonatomic) NSString *moreTitle; // @synthesize moreTitle;
@property(retain, nonatomic) NSArray *guideList; // @synthesize guideList;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
