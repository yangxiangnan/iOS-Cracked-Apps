//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSearchContext, FBSearchDiscoverErrorViewConfig, FBSearchDiscoverNavigationControlConfig, FBSearchTypeaheadActivityListenerAnnouncer, FBSearchTypeaheadSessionConfig, FBSearchTypeaheadSessionStatus, FBUserSession, NSString, UIColor;

@interface FBSearchDiscoverConfiguration : NSObject
{
    _Bool _showRecommendationsInNullState;
    FBUserSession *_session;
    NSObject *_scenePath;
    FBSearchTypeaheadSessionConfig *_sessionConfig;
    FBSearchTypeaheadActivityListenerAnnouncer *_announcer;
    NSString *_analyticsModule;
    NSString *_identifier;
    Class _componentProvider;
    CDUnknownBlockType _nuxBannerViewControllerBlock;
    NSString *_nuxAppEvent;
    UIColor *_backgroundColor;
    unsigned long long _emptySERPViewStyle;
    FBSearchDiscoverErrorViewConfig *_errorViewConfig;
    CDUnknownBlockType _tailIndicatorViewBlock;
    CDUnknownBlockType _tailLoadingViewBlock;
    FBSearchDiscoverNavigationControlConfig *_navigationControlConfig;
    FBSearchContext *_searchContext;
    FBSearchTypeaheadSessionStatus *_sessionStatus;
}

@property(readonly, nonatomic) _Bool showRecommendationsInNullState; // @synthesize showRecommendationsInNullState=_showRecommendationsInNullState;
@property(readonly, nonatomic) FBSearchTypeaheadSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
@property(readonly, nonatomic) FBSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(readonly, copy, nonatomic) FBSearchDiscoverNavigationControlConfig *navigationControlConfig; // @synthesize navigationControlConfig=_navigationControlConfig;
@property(readonly, copy, nonatomic) CDUnknownBlockType tailLoadingViewBlock; // @synthesize tailLoadingViewBlock=_tailLoadingViewBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType tailIndicatorViewBlock; // @synthesize tailIndicatorViewBlock=_tailIndicatorViewBlock;
@property(readonly, copy, nonatomic) FBSearchDiscoverErrorViewConfig *errorViewConfig; // @synthesize errorViewConfig=_errorViewConfig;
@property(readonly, nonatomic) unsigned long long emptySERPViewStyle; // @synthesize emptySERPViewStyle=_emptySERPViewStyle;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSString *nuxAppEvent; // @synthesize nuxAppEvent=_nuxAppEvent;
@property(readonly, copy, nonatomic) CDUnknownBlockType nuxBannerViewControllerBlock; // @synthesize nuxBannerViewControllerBlock=_nuxBannerViewControllerBlock;
@property(readonly, nonatomic) Class componentProvider; // @synthesize componentProvider=_componentProvider;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) FBSearchTypeaheadActivityListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(readonly, nonatomic) FBSearchTypeaheadSessionConfig *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(readonly, nonatomic) NSObject *scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long mode;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 sessionConfig:(id)arg3 announcer:(id)arg4 analyticsModule:(id)arg5 identifier:(id)arg6 componentProvider:(Class)arg7 nuxBannerViewControllerBlock:(CDUnknownBlockType)arg8 nuxAppEvent:(id)arg9 backgroundColor:(id)arg10 emptySERPViewStyle:(unsigned long long)arg11 errorViewConfig:(id)arg12 tailIndicatorViewBlock:(CDUnknownBlockType)arg13 tailLoadingViewBlock:(CDUnknownBlockType)arg14 navigationControlConfig:(id)arg15 searchContext:(id)arg16 sessionStatus:(id)arg17 showRecommendationsInNullState:(_Bool)arg18;

@end
