//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNetworkConnectCheckerDelegate-Protocol.h"

@class NSString;

@interface WKNetworkConnectCheckHandle : NSObject <WKNetworkConnectCheckerDelegate>
{
    _Bool _hasCheckSniffer;
    int _snifferStatus;
}

@property(nonatomic) _Bool hasCheckSniffer; // @synthesize hasCheckSniffer=_hasCheckSniffer;
@property(nonatomic) int snifferStatus; // @synthesize snifferStatus=_snifferStatus;
- (void)reportEvent:(id)arg1 withType:(unsigned long long)arg2;
- (id)getEventNameByState:(unsigned long long)arg1;
- (void)connectCheckerStateChanged:(unsigned long long)arg1 wifi:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
