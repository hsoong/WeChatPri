//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "WCPayLogicMgrExt-Protocol.h"

@class NSString, UIImageView, UILabel, UIView, WCPayBankLogoView, WCPayBindCardInfo, WCPayNetImageResource;

@interface WCPayCardDetailView : UIButton <WCPayLogicMgrExt>
{
    WCPayBindCardInfo *m_info;
    UILabel *bankTypeLabel;
    _Bool needUpdateResource;
    UIImageView *backView;
    UIImageView *waterMaskView;
    WCPayBankLogoView *logoView;
    UIView *bottomArea;
    WCPayNetImageResource *_m_waterMaskImage;
    WCPayNetImageResource *_m_backgroundImage;
    WCPayNetImageResource *_m_bankLogoImage;
    UIView *_bankNoView;
}

@property(retain, nonatomic) UIView *bankNoView; // @synthesize bankNoView=_bankNoView;
@property(retain, nonatomic) WCPayNetImageResource *m_bankLogoImage; // @synthesize m_bankLogoImage=_m_bankLogoImage;
@property(retain, nonatomic) WCPayNetImageResource *m_backgroundImage; // @synthesize m_backgroundImage=_m_backgroundImage;
@property(retain, nonatomic) WCPayNetImageResource *m_waterMaskImage; // @synthesize m_waterMaskImage=_m_waterMaskImage;
@property(retain, nonatomic) UIView *bottomArea; // @synthesize bottomArea;
@property(retain, nonatomic) WCPayBankLogoView *logoView; // @synthesize logoView;
@property(retain, nonatomic) UIImageView *waterMaskView; // @synthesize waterMaskView;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView;
@property(nonatomic) _Bool needUpdateResource; // @synthesize needUpdateResource;
- (void).cxx_destruct;
- (double)cardBackHeight;
- (double)waterMaskHeight;
- (void)OnGetBankResourcesNotification:(id)arg1;
- (id)getInfo;
- (void)CancelPerformGetData;
- (void)dealloc;
- (id)initWithBindCardInfo:(id)arg1 Data:(id)arg2;
- (_Bool)isShowECardMangeArea;
- (void)initViewWithBindCardInfo:(id)arg1 Data:(id)arg2;
- (void)OnGetBankResources:(id)arg1 Error:(id)arg2;
- (void)OnGetBankPackage:(id)arg1 Error:(id)arg2;
- (void)OnSuccessGetBankResources:(id)arg1;
- (void)OnSuccessGetBankPackage:(id)arg1;
- (void)SaveAndShowBankLogoImage:(id)arg1;
- (void)SaveAndShowBackGroundImage:(id)arg1;
- (void)layoutLogoView:(id)arg1;
- (void)SaveAndShowWaterMaskImage:(id)arg1;
- (void)GetAboutAllImage;
- (id)getBackGroundImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
