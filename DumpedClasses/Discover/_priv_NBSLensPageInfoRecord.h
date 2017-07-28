//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_priv_NBS_Lock.h"

@class NSMutableArray, _priv_NBSStack;

@interface _priv_NBSLensPageInfoRecord : _priv_NBS_Lock
{
    unsigned long long timeToBackground;
    long long timeBackground;
    NSMutableArray *dataArray;
    _priv_NBSStack *_vcStack;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)pageInfo:(id)arg1 withPageTime:(long long)arg2;
- (id)nameOfVC:(id)arg1;
- (id)renderData;
- (void)dealWithDidEnterForeground:(unsigned long long)arg1 withIsNeedInit:(_Bool)arg2;
- (void)dealWithDidEnterBackground:(unsigned long long)arg1;
- (void)pushToVCStack:(id)arg1 withStartTime:(unsigned long long)arg2;
- (id)init;

@end
