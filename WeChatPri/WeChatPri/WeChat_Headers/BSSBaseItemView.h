//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol BSSItemViewDelegate;

@interface BSSBaseItemView : UIView
{
    id <BSSItemViewDelegate> _delegate;
}

+ (double)heightForItem;
@property(nonatomic) __weak id <BSSItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end
