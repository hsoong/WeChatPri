//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCNewStorageFreeSpaceViewCell.h"

@class NSString, UIButton, UILabel, UIView;

@interface WCNewStorageFreeWechatSpaceViewCell : WCNewStorageFreeSpaceViewCell
{
    NSString *expiredString;
    UILabel *expiredLabel;
    struct CGPoint labelOrigin;
    UILabel *titleLabel;
    UILabel *usedSpaceLabel;
    UILabel *wordingLabel;
    UIButton *actionButton;
    UIView *seperateLine;
    UIView *extraView;
    UIButton *cleanCacheButton;
}

@property(retain, nonatomic) UIButton *cleanCacheButton; // @synthesize cleanCacheButton;
- (void)setExtraView:(id)arg1;
- (id)extraView;
- (void)setSeperateLine:(id)arg1;
- (id)seperateLine;
- (void)setActionButton:(id)arg1;
- (id)actionButton;
- (void)setWordingLabel:(id)arg1;
- (id)wordingLabel;
- (void)setUsedSpaceLabel:(id)arg1;
- (id)usedSpaceLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void).cxx_destruct;
- (void)onClickExtraView:(id)arg1;
- (void)onClickWeChatUsage:(id)arg1;
- (void)onClickCleanCache:(id)arg1;
- (void)initCleanCacheButton;
- (void)initActionButton;
- (void)initWordingLabel;
- (void)initUsedSpaceLabel;
- (void)initTitleLabel;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
