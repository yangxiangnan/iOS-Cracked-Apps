//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SSThemedButton, TTRealnameAuthCaptureButton;

@interface TTRealnameAuthCameraBottomView : UIView
{
    TTRealnameAuthCaptureButton *_captureButton;
    SSThemedButton *_flipButton;
    UIView *_leftView;
    UIView *_rightView;
    SSThemedButton *_cancelButton;
}

@property(retain, nonatomic) SSThemedButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) SSThemedButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) TTRealnameAuthCaptureButton *captureButton; // @synthesize captureButton=_captureButton;
- (void).cxx_destruct;
- (void)setupSubviewsWithFlipOn:(_Bool)arg1;
- (id)initWithFlipOn:(_Bool)arg1;

@end

