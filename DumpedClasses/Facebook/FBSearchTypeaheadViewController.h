//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBComponentCellAppearanceEventListener-Protocol.h"
#import "FBComponentScrollEventListener-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBComponentTableViewDataSourceEventListener-Protocol.h"
#import "FBComponentTableViewDataSourceSelectionHandler-Protocol.h"
#import "FBGraphSearchContentViewController-Protocol.h"
#import "FBGraphSearchKeyboardShortcutDelegate-Protocol.h"
#import "FBNuxBannerControllerDelegate-Protocol.h"
#import "FBSearchSuggestionTableViewCellDelegate-Protocol.h"
#import "FBSearchSuggestionsDataSourceDelegate-Protocol.h"
#import "FBSearchTypeaheadActivityListener-Protocol.h"
#import "FBSearchTypeaheadCustomContentControllerDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBComponentTableViewDataSource, FBGraphSearchScrollListenerHelper, FBLoadingIndicatorView, FBSearchContext, FBSearchRequestRetryErrorView, FBSearchResultsPrefetchManager, FBSearchStructuredText, FBSearchSuggestionsDataSource, FBSearchTableViewData, FBSearchTypeaheadActivityListenerAnnouncer, FBSearchTypeaheadCustomContentController, FBSearchTypeaheadLogger, FBSearchTypeaheadSessionConfig, FBSearchTypeaheadSessionStatus, FBSecondaryNavigationControl, FBTransientViewStateManager, FBUserSession, NSError, NSObject, NSString, UILabel, UITableView, UIView;
@protocol FBGraphSearchContentViewControllerDelegate, FBNuxBannerViewController, FBSearchTextFieldProtocol;

@interface FBSearchTypeaheadViewController : UIViewController <UITableViewDelegate, FBSearchSuggestionTableViewCellDelegate, FBSearchSuggestionsDataSourceDelegate, FBSearchTypeaheadActivityListener, FBNuxBannerControllerDelegate, FBAccessibilityInvalidationEventsListener, FBComponentScrollEventListener, FBComponentTableViewDataSourceSelectionHandler, FBComponentTableViewDataSourceCellConfigProvider, FBComponentCellAppearanceEventListener, FBComponentTableViewDataSourceEventListener, FBGraphSearchKeyboardShortcutDelegate, FBSearchTypeaheadCustomContentControllerDelegate, FBGraphSearchContentViewController>
{
    FBUserSession *_userSession;
    FBSearchContext *_searchContext;
    FBSearchTypeaheadSessionStatus *_sessionStatus;
    FBSearchTypeaheadSessionConfig *_sessionConfig;
    unsigned long long _loadingState;
    FBSearchTypeaheadLogger *_logger;
    FBSearchTypeaheadActivityListenerAnnouncer *_announcer;
    NSObject *_scenePath;
    FBSearchSuggestionsDataSource *_suggestionsDataSource;
    FBComponentTableViewDataSource *_tableViewDataSource;
    FBTransientViewStateManager *_viewStateManager;
    FBSearchTypeaheadCustomContentController *_injectedSuggestionsController;
    FBGraphSearchScrollListenerHelper *_scrollListenerHelper;
    FBSearchResultsPrefetchManager *_resultsPrefetchManager;
    UIViewController<FBNuxBannerViewController> *_megaphoneVC;
    UIView *_megaphoneContainerView;
    UITableView *_tableView;
    UIView *_emptyTableFooterView;
    FBLoadingIndicatorView *_tailLoadingIndicatorView;
    FBSearchRequestRetryErrorView *_errorRetryView;
    FBSearchTableViewData *_suggestionData;
    unsigned long long _suggestionDataKeywordMode;
    _Bool _suggestionsIsLoading;
    NSError *_latestNetworkError;
    _Bool _pendingTableViewUpdate;
    FBSecondaryNavigationControl *_tabBar;
    UIView *_tabBarContainer;
    UIView *_bottomline;
    UIView *_educationImageView;
    UILabel *_educationLabel;
    UIView<FBSearchTextFieldProtocol> *_searchField;
    unsigned long long _currentSelectedSuggestionIndex;
    _Bool _isHandlingUserUpdate;
    id <FBGraphSearchContentViewControllerDelegate> graphSearchContentDelegate;
    FBSearchStructuredText *_structuredQuery;
}

@property(readonly, nonatomic) FBSearchStructuredText *structuredQuery; // @synthesize structuredQuery=_structuredQuery;
@property(nonatomic) __weak id <FBGraphSearchContentViewControllerDelegate> graphSearchContentDelegate; // @synthesize graphSearchContentDelegate;
- (void).cxx_destruct;
- (_Bool)_showTabBar;
- (void)_logInvisibleImpressionForTableViewData:(id)arg1;
- (void)_updateTypeaheadFilterType;
- (void)_updateScopedSearchInputType;
- (void)_didChangeTapBarSegment:(id)arg1;
- (void)updateScopedSearchInputType;
- (void)_layoutTabBar;
- (void)_setupTabBar;
- (void)_layoutMegaphoneView;
- (void)_hideMegaphone;
- (void)_showMegaphoneWithTrigger:(id)arg1;
- (id)_searchComponentContext;
- (unsigned long long)_keywordMode;
- (id)_modelForTableViewData:(id)arg1 indexPath:(id)arg2 position:(unsigned long long)arg3 isLastRow:(_Bool)arg4;
- (void)_enqueueComponentsTypeaheadUpdateWithTableViewData:(id)arg1;
- (void)_addEmptyToolTipIfNeeded:(id)arg1;
- (void)_enqueueTypeaheadUpdateWithTableViewData:(id)arg1;
- (void)endUserUpdate;
- (void)startUserUpdate;
- (unsigned long long)_firstFlickerIndexForUpdatedTableViewData:(id)arg1;
- (_Bool)_verifySuggestionConformsToFBSearchSuggestionProtocol:(id)arg1;
- (id)_innerModelFromPossibleComponentModel:(id)arg1;
- (void)_updateTypeaheadContentWithTableViewData:(id)arg1;
- (unsigned long long)_viewStateFromLoadingState:(unsigned long long)arg1;
- (_Bool)_offlineSearchUnavailable;
- (void)_updateLoadingIndicator:(unsigned long long)arg1;
- (void)retryButtonDidTap:(id)arg1;
- (void)graphSearchTypeaheadCustomContentControllerDidUpdatedContent:(id)arg1;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (_Bool)dataSource:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)nuxBannerControllerWillNavigateAway:(id)arg1;
- (void)nuxBannerControllerDidDismissBanner:(id)arg1;
- (void)_searchSelectedSuggestion;
- (void)_updateSuggestionSelectionHighlightWithSelectedSuggestionIndex:(long long)arg1;
- (void)_selectPreviousSuggestion;
- (void)_selectNextSuggestion;
- (_Bool)graphSearchKeyboardShortcutIsAnySuggestionHiglighted;
- (void)graphSearchKeyboardShortcutKeyPressed:(long long)arg1;
- (void)dataSourceDidEndUpdates:(id)arg1 changeset:(struct Changeset)arg2;
- (void)componentDidDisappearFromViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)componentWillAppearInViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)searchSuggestionTableViewCell:(id)arg1 didPerformAction:(unsigned long long)arg2 forSuggestion:(id)arg3;
- (void)_nullStateContentLoaderDidFinishLoading;
- (void)suggestionsDataSource:(id)arg1 didFailUpdateWithError:(id)arg2;
- (void)suggestionsDataSource:(id)arg1 didUpdateSuggestions:(id)arg2 isLoading:(_Bool)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollToTop;
- (void)resetTypeaheadSessionState;
- (void)reloadCustomTypeaheadContent;
- (void)cancelOutstandingRequestsIfNeeded;
- (void)performQuery:(id)arg1;
- (void)didReceiveAccessibilityInvalidation;
- (void)_createEducationView;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setupTableViewDataSource;
- (void)loadView;
- (id)analyticsModule;
- (void)_sendEmptyTypeaheadRequest;
- (id)initWithUserSession:(id)arg1 searchContext:(id)arg2 sessionConfig:(id)arg3 typeaheadSessionStatus:(id)arg4 logger:(id)arg5 announcer:(id)arg6 scenePath:(id)arg7 searchField:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
