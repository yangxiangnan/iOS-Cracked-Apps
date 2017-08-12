//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentProvider-Protocol.h"
#import "FBComponentCollectionViewDataSourceCellConfigProvider-Protocol.h"
#import "FBComponentScrollEventListener-Protocol.h"
#import "FBFriendListViewAdapterDelegate-Protocol.h"
#import "FBProfileFriendListViewControllerProtocol-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class FBComponentCollectionViewDataSource, FBFriendListViewAdapter, FBFriendingToolbox, FBProfileFriendListDataSource, FBUserSession, NSObject, NSString, UICollectionView, UIRefreshControl, UISearchBar;
@protocol FBProfileFriendListHelper, UICollectionViewDelegateFlowLayout;

@interface FBProfileFriendListCollectionViewController : UIViewController <CKComponentProvider, FBComponentCollectionViewDataSourceCellConfigProvider, FBComponentScrollEventListener, FBFriendListViewAdapterDelegate, UISearchBarDelegate, FBProfileFriendListViewControllerProtocol>
{
    FBUserSession *_session;
    NSString *_targetID;
    NSObject *_scenePath;
    id <FBProfileFriendListHelper> _helper;
    FBFriendingToolbox *_toolbox;
    UICollectionView *_collectionView;
    FBProfileFriendListDataSource *_dataSource;
    FBComponentCollectionViewDataSource *_componentCollectionViewDataSource;
    FBFriendListViewAdapter *_friendListAdapter;
    NSObject<UICollectionViewDelegateFlowLayout> *_flowLayoutDelegate;
    UISearchBar *_searchBar;
    UIRefreshControl *_refreshControl;
    _Bool _refreshControlAddedToView;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)_searchWithKeywords:(id)arg1;
@property(readonly, copy, nonatomic) NSString *targetID;
@property(readonly, copy, nonatomic) NSString *profileFriendListAnalyticsTabName;
- (struct FBComponentCollectionViewDataSourceCellConfig)configForCollectionCellInDataSource:(id)arg1;
- (void)adapterFinishedLoadingMore;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (_Bool)dataSourceShouldHideSectionHeaderRegardlessOfHelper:(id)arg1;
- (void)refreshAdapter;
- (void)viewDidLayoutSubviews;
- (void)_openFriendCenterSuggestionsTab;
- (void)_configNavigationBarWithAddFriendCenterLink;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1 targetID:(id)arg2 helper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
