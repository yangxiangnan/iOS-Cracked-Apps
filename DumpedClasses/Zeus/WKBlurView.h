//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KLCPopup, UIToolbar;

@interface WKBlurView : UIView
{
    UIToolbar *_toolbar;
    KLCPopup *_popView;
}

@property(retain, nonatomic) KLCPopup *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (void)delayDismiss;
- (void)dismiss;
- (void)showWithDuration:(double)arg1;
- (void)showWithNoneAnimation;
- (void)show;
- (void)rnb_setup;
@property(readonly, nonatomic) _Bool isShowing;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImageFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
