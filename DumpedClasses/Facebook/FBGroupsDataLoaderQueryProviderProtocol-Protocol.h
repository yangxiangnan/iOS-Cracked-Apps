//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBGroupsDataLoaderQueryTypeProtocol-Protocol.h"

@class FBGraphQLQuery, NSString;

@protocol FBGroupsDataLoaderQueryProviderProtocol <FBGroupsDataLoaderQueryTypeProtocol>
- (FBGraphQLQuery *)groupsQueryForUserFBID:(NSString *)arg1 afterCursor:(NSString *)arg2 querySize:(unsigned long long)arg3;

@optional
- (FBGraphQLQuery *)groupsDeltaQueryForUserFBID:(NSString *)arg1 afterCursor:(NSString *)arg2 querySize:(unsigned long long)arg3;
- (FBGraphQLQuery *)groupsUpdatesQueryForUserFBID:(NSString *)arg1 afterCursor:(NSString *)arg2 querySize:(unsigned long long)arg3;
@end
