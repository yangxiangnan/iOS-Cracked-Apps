//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBFragmentModelProtocol-Protocol.h"

@class FBGraphQLConsistency, FBGraphQLServiceToken, NSObject, NSString;
@protocol FBFriendsNearbyWaveForDivebarQuery_viewer_contactsTabs_edges_node_contactsSections_edges_node_contactsSets_edges_node_setItems_edges_node_contact_representedProfile_profilePicture74FragmentBuilder, OS_dispatch_queue;

@protocol FBFriendsNearbyWaveForDivebarQuery_viewer_contactsTabs_edges_node_contactsSections_edges_node_contactsSets_edges_node_setItems_edges_node_contact_representedProfile_profilePicture74Fragment <FBFragmentModelProtocol>
- (id <FBFriendsNearbyWaveForDivebarQuery_viewer_contactsTabs_edges_node_contactsSections_edges_node_contactsSets_edges_node_setItems_edges_node_contact_representedProfile_profilePicture74FragmentBuilder>)copyBuilder;
- (FBGraphQLServiceToken *)subscribeWithConsistency:(FBGraphQLConsistency *)arg1 updateCallback:(void (^)(id <FBFriendsNearbyWaveForDivebarQuery_viewer_contactsTabs_edges_node_contactsSections_edges_node_contactsSets_edges_node_setItems_edges_node_contact_representedProfile_profilePicture74Fragment>, id <FBGraphQLServiceStatus>))arg2 failureCallback:(void (^)(NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (NSString *)uri;
@end
