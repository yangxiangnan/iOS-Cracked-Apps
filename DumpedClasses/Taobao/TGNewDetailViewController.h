//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DZNEmptyDataSetDelegate.h"
#import "DZNEmptyDataSetSource.h"
#import "MWPhotoBrowserDelegate.h"
#import "MXScrollViewDelegate.h"
#import "SwipeViewDataSource.h"
#import "SwipeViewDelegate.h"
#import "TGDetailFooterToolViewDelegate.h"
#import "TGDetailHeaderViewDelegate.h"
#import "TGDetailProductSloganDelegate.h"
#import "TGNewDetailViewModelDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, TGDefaultErrorView, TGDetailHeaderView, TGDetailProductSlogan, TGNewDetailViewModel, TGPageControl, TGParallaxHeaderView, TGPlayerController, UIButton, UICollectionView, UILabel, UIView;

@interface TGNewDetailViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, TGDetailHeaderViewDelegate, MXScrollViewDelegate, TGNewDetailViewModelDelegate, SwipeViewDataSource, SwipeViewDelegate, UIScrollViewDelegate, TGDetailProductSloganDelegate, MWPhotoBrowserDelegate, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate, TGDetailFooterToolViewDelegate>
{
    TGDetailHeaderView *_navHeaderView;
    TGParallaxHeaderView *_parallaxHeaderView;
    TGDefaultErrorView *_errorView;
    TGPlayerController *_player;
    UIView *_videoCoverView;
    UIButton *_videoPlayButton;
    UILabel *_videoPlayLabel;
    TGPageControl *_pageControl;
    TGDetailProductSlogan *_productSlogan;
    UILabel *_collectionViewBottomLabel;
    NSMutableArray *_images;
    double _parallaxHeaderHeight;
    TGNewDetailViewModel *_viewModel;
    UICollectionView *_collectionView;
    NSArray *_btnArray;
    long long _previousStatusBarStyle;
}

@property(nonatomic) long long previousStatusBarStyle; // @synthesize previousStatusBarStyle=_previousStatusBarStyle;
@property(retain, nonatomic) NSArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) TGNewDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double parallaxHeaderHeight; // @synthesize parallaxHeaderHeight=_parallaxHeaderHeight;
- (void).cxx_destruct;
- (_Bool)scrollView:(id)arg1 shouldScrollWithSubView:(id)arg2;
- (void)photoBrowserDidFinishModalPresentation:(id)arg1;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)swipeView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)swipeViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)swipeViewCurrentItemIndexDidChange:(id)arg1;
- (id)swipeView:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInSwipeView:(id)arg1;
- (void)openPageForProductViewModel:(id)arg1 andSpm:(id)arg2;
- (void)didClickActionButton;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)moreItemsHaveBeenLoadedOver;
- (void)networkStatusChanged;
- (void)gotoGroupShare;
- (void)clickGroupShareButtonOnDetailHeaderView:(id)arg1;
- (void)clickShareOnFooterView;
- (void)clickCommentOnFooterView;
- (void)clickLikeButtonOnDetailHeaderView:(id)arg1;
- (void)clickCommentButtonOnDetailHeaderView:(id)arg1;
- (void)clickShareButtonOnDetailHeaderView:(id)arg1;
- (void)clickBackButtonOnDetailHeaderView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)touchParallaxHeaderImage;
- (void)configParallaxHeaderWithType:(long long)arg1;
- (void)configPageControlWithType:(long long)arg1;
- (void)configProductSloganWithType:(long long)arg1;
- (void)clickPlayerButton;
- (void)configVideoViewWithType:(long long)arg1;
- (void)configLayoutAndInteraction;
- (void)moreItemsAtSection:(long long)arg1;
- (void)moreItemsLoadedAtIndexPaths:(id)arg1;
- (void)updateStatusBar;
- (void)detailDataLoaded;
- (id)titleForEmptyDataSet:(id)arg1;
- (id)imageForEmptyDataSet:(id)arg1;
- (void)emptyDataSet:(id)arg1 didTapView:(id)arg2;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadInfiniteFooter;
- (void)loadParallaxHeaderView;
- (void)loadCollectionView;
- (void)loadNaviHeaderView;
- (void)loadFooterToolView;
- (void)moviePlayerDidEnterFullscreen:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
