//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class MMWebImageView, UILabel, WCPayVirtualNoBindCard;

@interface WCPayVirtualCardDetailView : MMUIButton
{
    WCPayVirtualNoBindCard *m_info;
    MMWebImageView *m_logoView;
    MMWebImageView *m_waterMaskView;
    UILabel *m_bankNameLabel;
    UILabel *m_bankTypeLabel;
    UILabel *m_entranceLabel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)initView;
- (id)getInfo;
- (id)initWithVirtualCardInfo:(id)arg1;

@end

