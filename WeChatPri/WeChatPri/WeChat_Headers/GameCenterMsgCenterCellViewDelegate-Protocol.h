//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GameCenterMsgCenterContent, NSString;

@protocol GameCenterMsgCenterCellViewDelegate <NSObject>
- (void)onMergeUserImageClick:(GameCenterMsgCenterContent *)arg1 Url:(NSString *)arg2;
- (void)onUserHeadClick:(GameCenterMsgCenterContent *)arg1;
- (void)onUserNickNameClick:(GameCenterMsgCenterContent *)arg1;
- (void)onContentPicClick:(GameCenterMsgCenterContent *)arg1;
- (void)onSecondLineClick:(GameCenterMsgCenterContent *)arg1;
- (void)onSourceClick:(GameCenterMsgCenterContent *)arg1;
@end
