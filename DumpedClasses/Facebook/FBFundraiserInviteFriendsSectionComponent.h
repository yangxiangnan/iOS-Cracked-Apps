//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBCompositeSectionComponent.h>

@class FBFundraiserInviteListenerAnnouncer, FBGraphQLConnectionSectionComponent;

@interface FBFundraiserInviteFriendsSectionComponent : FBCompositeSectionComponent
{
    FBGraphQLConnectionSectionComponent *_graphQLConnectionComponent;
    FBFundraiserInviteListenerAnnouncer *_listenerAnnouncer;
}

+ (id)newWithCampaignID:(id)arg1 searchQuery:(id)arg2 friendOffset:(id)arg3 first:(id)arg4 isPending:(_Bool)arg5 sectionComponentToolbox:(id)arg6;
@property(readonly, copy, nonatomic) FBFundraiserInviteListenerAnnouncer *listenerAnnouncer; // @synthesize listenerAnnouncer=_listenerAnnouncer;
@property(copy, nonatomic) FBGraphQLConnectionSectionComponent *graphQLConnectionComponent; // @synthesize graphQLConnectionComponent=_graphQLConnectionComponent;
- (void).cxx_destruct;

@end
