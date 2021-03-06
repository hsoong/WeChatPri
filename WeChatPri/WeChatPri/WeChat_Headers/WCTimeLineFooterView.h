//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRefreshTableFooterView.h"

@class NSString, UIActivityIndicatorView, UIColor, UILabel;

@interface WCTimeLineFooterView : MMRefreshTableFooterView
{
    UIActivityIndicatorView *m_activityIndicatorView;
    UILabel *m_label;
    unsigned int m_lineViewWidth;
    NSString *m_normalText;
    NSString *m_loadingText;
    UIColor *_m_textColor;
}

@property(retain, nonatomic) UIColor *m_textColor; // @synthesize m_textColor=_m_textColor;
@property(retain, nonatomic) NSString *m_loadingText; // @synthesize m_loadingText;
@property(retain, nonatomic) NSString *m_normalText; // @synthesize m_normalText;
@property(nonatomic) unsigned int m_lineViewWidth; // @synthesize m_lineViewWidth;
@property(retain, nonatomic) UILabel *m_label; // @synthesize m_label;
@property(retain, nonatomic) UIActivityIndicatorView *m_activityIndicatorView; // @synthesize m_activityIndicatorView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (int)getStatus;
- (void)resetStatus:(int)arg1;
- (void)fitIPadClassicStyle;
- (void)useMMSettingStyle;
- (id)initWhiteLoadingWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 whiteLoading:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

