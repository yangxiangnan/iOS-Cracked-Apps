//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GSDocView, GSVideoView, UILabel, _TtC7Lingome15MicSequenceView;
@protocol _TtP7Lingome20ClassDocViewDelegate_;

@interface _TtC7Lingome12ClassDocView : UIView
{
    // Error parsing type: , name: docView
    // Error parsing type: , name: videoView
    // Error parsing type: , name: videoTipsLabel
    // Error parsing type: , name: showScreen
    // Error parsing type: , name: classNameLabel
    // Error parsing type: , name: notifyLabel
    // Error parsing type: , name: micView
    // Error parsing type: , name: isAllViewHidden
    // Error parsing type: , name: isHiding
    // Error parsing type: , name: connectStatusLabel
    // Error parsing type: , name: VideoViewleftMargin
    // Error parsing type: , name: delegate
    // Error parsing type: , name: fullScreenButton
    // Error parsing type: , name: switchButton
    // Error parsing type: , name: backButton
    // Error parsing type: , name: allowVideoView
    // Error parsing type: , name: videoOn
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)backToClassStudyVC:(id)arg1;
- (void)showNotLiveView;
- (void)showLiveView;
- (void)switchTapped;
- (void)showFullScreenMode;
- (void)startShowAnimation;
- (void)startHideAnimation;
- (void)hideAfterDelay;
- (void)handleTapGesture:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool videoOn; // @synthesize videoOn;
@property(nonatomic) _Bool allowVideoView; // @synthesize allowVideoView;
@property(nonatomic) __weak id <_TtP7Lingome20ClassDocViewDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) double VideoViewleftMargin; // @synthesize VideoViewleftMargin;
@property(nonatomic, retain) UILabel *connectStatusLabel; // @synthesize connectStatusLabel;
@property(nonatomic) _Bool isHiding; // @synthesize isHiding;
@property(nonatomic) _Bool isAllViewHidden; // @synthesize isAllViewHidden;
@property(nonatomic, retain) _TtC7Lingome15MicSequenceView *micView; // @synthesize micView;
@property(nonatomic, retain) UILabel *notifyLabel; // @synthesize notifyLabel;
@property(nonatomic, retain) UILabel *classNameLabel; // @synthesize classNameLabel;
@property(nonatomic) _Bool showScreen; // @synthesize showScreen;
@property(nonatomic, retain) UILabel *videoTipsLabel; // @synthesize videoTipsLabel;
@property(nonatomic, retain) GSVideoView *videoView; // @synthesize videoView;
@property(nonatomic, retain) GSDocView *docView; // @synthesize docView;

@end
