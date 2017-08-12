//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQCollectionViewController.h"

#import "MQQInfomationFetcherDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class MQQCollectionViewSection, MQQInfomationBlankView, MQQInfomationFetcher, MQQInfomationRecordManager, NSMutableArray, NSString;

@interface MQQInfomationViewController : MQQCollectionViewController <MQQInfomationFetcherDelegate, UIViewControllerPreviewingDelegate>
{
    double _beginStayingTime;
    _Bool _networkDisabled;
    _Bool _isLoadingDisplayed;
    long long _categoryID;
    MQQInfomationRecordManager *_recordManager;
    MQQInfomationFetcher *_infoFetcher;
    MQQCollectionViewSection *_topViewSection;
    NSMutableArray *_contentViewSections;
    MQQCollectionViewSection *_loadingViewSection;
    MQQInfomationBlankView *_blankView;
}

@property(retain, nonatomic) MQQInfomationBlankView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) MQQCollectionViewSection *loadingViewSection; // @synthesize loadingViewSection=_loadingViewSection;
@property(retain, nonatomic) NSMutableArray *contentViewSections; // @synthesize contentViewSections=_contentViewSections;
@property(retain, nonatomic) MQQCollectionViewSection *topViewSection; // @synthesize topViewSection=_topViewSection;
@property(retain, nonatomic) MQQInfomationFetcher *infoFetcher; // @synthesize infoFetcher=_infoFetcher;
@property(retain, nonatomic) MQQInfomationRecordManager *recordManager; // @synthesize recordManager=_recordManager;
@property(nonatomic) long long categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) _Bool isLoadingDisplayed; // @synthesize isLoadingDisplayed=_isLoadingDisplayed;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_endStayTimingAndReport;
- (void)_beginStayTiming;
- (void)networkInfoDidChange:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)infomationFetcher:(id)arg1 didFinishWithLists:(id)arg2 incrementally:(_Bool)arg3 error:(id)arg4;
- (void)_dismissLoadingSection;
- (void)_updateLoadingState:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)settingButonClicked:(id)arg1;
- (void)removeBlankView;
- (void)loadBlankViewWithStyle:(long long)arg1;
- (void)loadBackgroundView;
- (void)loadBarButtonItem;
- (void)loadCollectionView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCategoryID:(long long)arg1 title:(id)arg2;
- (void)dealloc;
- (id)_viewControllerForInfomation:(id)arg1;
- (_Bool)_existsTopViewSection;
- (id)_loadingViewItem;
- (id)_contentViewItemWithInfo:(id)arg1 index:(long long)arg2;
- (id)headerTitleWithList:(id)arg1 isFirstSection:(_Bool)arg2;
- (void)_addContentSectionsWithInfoLists:(id)arg1;
- (void)_initForContentSections;
- (void)_initForLoadingViewSection;
- (void)_initForTopViewSection;
- (void)_initForCollectionViewSections;
- (void)_updateSectionsWithInfoLists:(id)arg1;
- (void)_addSectionsWithInfoLists:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
