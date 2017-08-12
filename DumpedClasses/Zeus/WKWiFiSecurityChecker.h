//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WiFiSecurityCheckerResultDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, SecurityCheckerAdapter, WiFiSecurityResultItem;

@interface WKWiFiSecurityChecker : NSObject <WiFiSecurityCheckerResultDelegate>
{
    _Bool _stopRunLoop;
    long long _timeout;
    NSMutableArray *_checkItems;
    WiFiSecurityResultItem *_checkResultItem;
    SecurityCheckerAdapter *_checkApi;
    CDUnknownBlockType _hanleBlock;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType hanleBlock; // @synthesize hanleBlock=_hanleBlock;
@property(retain, nonatomic) SecurityCheckerAdapter *checkApi; // @synthesize checkApi=_checkApi;
@property(retain, nonatomic) WiFiSecurityResultItem *checkResultItem; // @synthesize checkResultItem=_checkResultItem;
@property(retain, nonatomic) NSMutableArray *checkItems; // @synthesize checkItems=_checkItems;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)generateCommonParameter:(id)arg1;
- (id)getBaseAttr:(id)arg1;
- (void)doneWithResult:(id)arg1;
- (void)fetchResultFromServer:(id)arg1;
- (void)securityCheckFinished:(id)arg1;
- (_Bool)isAllFinished;
- (void)_timeoutActionFired;
- (void)start:(CDUnknownBlockType)arg1;
- (void)stop;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
