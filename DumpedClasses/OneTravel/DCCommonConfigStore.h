//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DCAsyncFileCache, DCCommonConfigModel, DCHomeRequestStrategy, NSString;

@interface DCCommonConfigStore : NSObject
{
    DCAsyncFileCache *diskCache;
    NSString *configDiskPath;
    DCHomeRequestStrategy *requestStrategy;
    DCCommonConfigModel *_cachedModel;
}

@property(retain, nonatomic) DCCommonConfigModel *cachedModel; // @synthesize cachedModel=_cachedModel;
@property(readonly) DCHomeRequestStrategy *requestStrategy; // @synthesize requestStrategy;
- (void).cxx_destruct;
- (void)requestNetUserConfigSuccess:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)requestDiskUserConfigSuccess:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)requestUserConfigSuccess:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2 source:(unsigned long long)arg3;
- (id)init;

@end
