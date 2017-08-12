//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CloudAnimationView, NSString, UIImageView;

@interface RocketAnimationView : UIView <CAAnimationDelegate>
{
    long long count;
    struct CGRect cloudViewFrame;
    struct CGRect secondCloudViewFrame;
    _Bool _isComplete;
    UIImageView *_rocketImageView;
    UIView *_rocketContainterView;
    CloudAnimationView *_cloudView;
    CloudAnimationView *_secondCloudView;
}

@property(retain, nonatomic) CloudAnimationView *secondCloudView; // @synthesize secondCloudView=_secondCloudView;
@property(retain, nonatomic) CloudAnimationView *cloudView; // @synthesize cloudView=_cloudView;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(retain, nonatomic) UIView *rocketContainterView; // @synthesize rocketContainterView=_rocketContainterView;
@property(retain, nonatomic) UIImageView *rocketImageView; // @synthesize rocketImageView=_rocketImageView;
- (void).cxx_destruct;
- (id)rocketAnimation2;
- (id)rocketAnimation1;
- (id)rocketAnimation;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addAnimation;
- (void)stopAnimation;
- (void)startAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
