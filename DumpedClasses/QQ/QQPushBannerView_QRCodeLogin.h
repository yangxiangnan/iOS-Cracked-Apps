//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPushBannerView.h"

@class UIImageView, UILabel;

@interface QQPushBannerView_QRCodeLogin : QQPushBannerView
{
    UILabel *_textLable;
    UIImageView *_imageView;
    _Bool _isCheZai;
}

@property(nonatomic) _Bool isCheZai; // @synthesize isCheZai=_isCheZai;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 tips:(id)arg3 deviceType:(long long)arg4;
- (void)setPCStyle:(id)arg1;
- (void)setCheZaiStyle;
- (void)didCloseButtonClicked;
- (void)didPushBannerClicked;

@end
