//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQPhotoFilterBrowserExController.h"

#import "MQQAlertViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class MQQAlertView, MQQAsset, MQQPFResultSet, NSString, UIActionSheet;

@interface MQQPhotoFilterBrowserBurstController : MQQPhotoFilterBrowserExController <MQQAlertViewDelegate, UIActionSheetDelegate>
{
    MQQPFResultSet *_burstResultSet;
    MQQAsset *_burstAsset;
    MQQAlertView *_alertView;
    UIActionSheet *_actionSheet;
}

@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) MQQAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) MQQAsset *burstAsset; // @synthesize burstAsset=_burstAsset;
@property(retain, nonatomic) MQQPFResultSet *burstResultSet; // @synthesize burstResultSet=_burstResultSet;
- (void)deleteSelected;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)mqqAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)imageCellForIndex:(long long)arg1;
- (_Bool)shouldShowDotViewOnThumbnailsViewAtIndex:(long long)arg1;
- (void)handleObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBottomBarState:(long long)arg1;
- (long long)shouldShowOnImageCellAtIndex:(long long)arg1;
- (void)cleanButtonClicked:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithFilterOptions:(unsigned long long)arg1 burstResultSet:(id)arg2 currentIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
