//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBUpdateDataFetcherParams : FBValueObject <NSCopying>
{
    _Bool _filterResultsForOtherBundleIds;
    NSString *_appId;
    NSString *_bundleId;
    NSString *_releaseChannel;
    unsigned long long _limit;
}

@property(readonly, nonatomic) _Bool filterResultsForOtherBundleIds; // @synthesize filterResultsForOtherBundleIds=_filterResultsForOtherBundleIds;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSString *releaseChannel; // @synthesize releaseChannel=_releaseChannel;
@property(readonly, copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)initWithAppId:(id)arg1 bundleId:(id)arg2 releaseChannel:(id)arg3 limit:(unsigned long long)arg4 filterResultsForOtherBundleIds:(_Bool)arg5;

@end
