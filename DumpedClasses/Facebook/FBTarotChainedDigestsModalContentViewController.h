//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBModalContentViewController-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;

@interface FBTarotChainedDigestsModalContentViewController : UIViewController <UIViewControllerAnimatedTransitioning, FBModalContentViewController>
{
    UIViewController *_contentViewController;
    UIView *_sourceViewForPresentation;
    CDUnknownBlockType _dismissBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(readonly, nonatomic) __weak UIView *sourceViewForPresentation; // @synthesize sourceViewForPresentation=_sourceViewForPresentation;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForPresentedModalContainerViewController:(id)arg1;
- (id)scrollViewForDismissingModalContainerViewController:(id)arg1;
- (id)headerViewForModalContainerViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewController:(id)arg1 sourceViewForPresentation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
