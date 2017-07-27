//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMultimediaEditView.h"

#import "MQZoneMoodEditInputCellDelegate.h"

@class MQZoneMoodEditInputCell, NSString, UIButton, UIView, UIViewController;

@interface QZMoodQuickPublishedEditView : TBMultimediaEditView <MQZoneMoodEditInputCellDelegate>
{
    MQZoneMoodEditInputCell *_inputCell;
    UIView *_inputView;
    UIView *_line;
    UIButton *_maskView;
    UIButton *_authorityButton;
    UIViewController *_parentViewController;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) UIButton *authorityButton; // @synthesize authorityButton=_authorityButton;
@property(retain, nonatomic) UIButton *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) MQZoneMoodEditInputCell *inputCell; // @synthesize inputCell=_inputCell;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
