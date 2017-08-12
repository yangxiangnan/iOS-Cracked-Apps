//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBProfilePicturePickerControllerDelegate-Protocol.h"
#import "FBSimpleNUXStepViewControlling-Protocol.h"

@class FBNewAccountNUXExperimentContext, FBNewAccountNUXNavController, FBNewAccountNUXStepFactory, FBUserSession, NSArray, NSMutableDictionary, NSString;
@protocol FBNewAccountNUXControllerDelegate;

@interface FBNewAccountNUXController : NSObject <FBSimpleNUXStepViewControlling, FBProfilePicturePickerControllerDelegate>
{
    FBUserSession *_session;
    FBNewAccountNUXStepFactory *_stepFactory;
    NSMutableDictionary *_cachedStepControllers;
    FBNewAccountNUXNavController *_navController;
    FBNewAccountNUXExperimentContext *_context;
    unsigned long long _currentStepIndex;
    id <FBNewAccountNUXControllerDelegate> _delegate;
    NSArray *_steps;
}

@property(copy, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(nonatomic) __weak id <FBNewAccountNUXControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBNewAccountNUXNavController *navController; // @synthesize navController=_navController;
@property(nonatomic) unsigned long long currentStepIndex; // @synthesize currentStepIndex=_currentStepIndex;
- (void).cxx_destruct;
- (void)profilePicturePickerDidFailSettingPic:(id)arg1 errorType:(int)arg2;
- (void)profilePicturePickerDidUploadPic:(id)arg1;
- (void)profilePicturePickerDidChooseVideo:(id)arg1 selectingViewController:(id)arg2;
- (void)profilePicturePickerDidChoosePic:(id)arg1;
- (void)nextAction:(id)arg1;
- (void)skipAction:(id)arg1;
- (void)backButtonAction:(id)arg1;
- (void)_logSawStepEvent;
- (void)addNextButtonForViewController:(id)arg1;
- (void)incrementCurrentStepIndex;
- (void)addSkipButtonForViewController:(id)arg1;
- (void)addBackButtonForViewController:(id)arg1;
- (id)stepViewControllerBeforeCurrentIndex;
- (id)stepViewControllerStartingFromCurrentIndex;
- (void)updateServerCurrentStepStatus:(unsigned long long)arg1;
- (void)logEvent:(id)arg1 eventType:(id)arg2;
- (void)pushSubstepViewController:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isComplete;
- (void)goToNextStep;
- (void)didCompleteStep;
- (void)didPartiallyCompleteStep:(id)arg1;
- (void)didSkipStep;
- (void)didGoBack;
- (void)presentNUXFromViewController:(id)arg1;
- (id)init;
- (id)initWithSession:(id)arg1 steps:(id)arg2 currentStepIndex:(unsigned long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
