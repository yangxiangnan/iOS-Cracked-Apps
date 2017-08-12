//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface ProtalReconnectAnimationView : UIView
{
    double height;
    UIImageView *_rotationImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *rotationImageView; // @synthesize rotationImageView=_rotationImageView;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)rotate360WithDuration:(double)arg1 repeatCount:(double)arg2 onLayer:(id)arg3;
- (_Bool)requiresConstraintBasedLayout;
- (struct CGSize)intrinsicContentSize;
- (void)setupViews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
