//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBFragmentModelProtocol-Protocol.h"

@class FBGraphQLConsistency, FBGraphQLServiceToken, NSArray, NSObject;
@protocol FBPageInfoFragment, FBPinnedAdsQuery_viewer_accountUser_pinnedAdsFragmentBuilder, OS_dispatch_queue;

@protocol FBPinnedAdsQuery_viewer_accountUser_pinnedAdsFragment <FBFragmentModelProtocol>
- (id <FBPinnedAdsQuery_viewer_accountUser_pinnedAdsFragmentBuilder>)copyBuilder;
- (FBGraphQLServiceToken *)subscribeWithConsistency:(FBGraphQLConsistency *)arg1 updateCallback:(void (^)(id <FBPinnedAdsQuery_viewer_accountUser_pinnedAdsFragment>, id <FBGraphQLServiceStatus>))arg2 failureCallback:(void (^)(NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (id <FBPageInfoFragment>)pageInfo;
- (NSArray *)edges;
@end
