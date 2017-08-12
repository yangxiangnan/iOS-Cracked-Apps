//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRMAHarvestAware-Protocol.h"

@class NSString;

@interface NRMAAnalytics : NSObject <NRMAHarvestAware>
{
    struct AnalyticsController *_analyticsController;
    _Bool _sessionWillEnd;
}

+ (void)clearDuplicationStores;
+ (id)getLastSessionsEvents;
+ (id)getLastSessionsAttributes;
+ (id)getDBStorePath;
+ (PersistentStore_af1b0c6f *)eventDupStore;
+ (PersistentStore_cbf80255 *)attributeDupStore;
- (void)onHarvestBefore;
- (void)sessionWillEnd;
- (void)clearLastSessionsAnalytics;
- (id)sessionAttributeJSONString;
- (id)analyticsJSONString;
- (_Bool)incrementSessionAttribute:(id)arg1 value:(id)arg2 persistent:(_Bool)arg3;
- (_Bool)incrementSessionAttribute:(id)arg1 value:(id)arg2;
- (_Bool)event:(shared_ptr_e67e2ffa)arg1 withAttributes:(id)arg2;
- (_Bool)addCustomEvent:(id)arg1 withAttributes:(id)arg2;
- (_Bool)addBreadcrumb:(id)arg1 withAttributes:(id)arg2;
- (_Bool)addEventNamed:(id)arg1 withAttributes:(id)arg2;
- (_Bool)removeAllSessionAttributes;
- (_Bool)removeSessionAttributeNamed:(id)arg1;
- (_Bool)setUserId:(id)arg1;
- (_Bool)setSessionAttribute:(id)arg1 value:(id)arg2;
- (_Bool)setSessionAttribute:(id)arg1 value:(id)arg2 persistent:(_Bool)arg3;
- (_Bool)setNRSessionAttribute:(id)arg1 value:(id)arg2;
- (_Bool)setLastInteraction:(id)arg1;
- (_Bool)addTrackedGestureEvent:(id)arg1 targetObject:(id)arg2 label:(id)arg3 accessibility:(id)arg4 tapCoordinates:(id)arg5 gestureType:(id)arg6 controlFrame:(id)arg7;
- (_Bool)addHTTPErrorEvent:(id)arg1 httpMethod:(id)arg2 withTimer:(id)arg3 bytesReceived:(long long)arg4 bytesSent:(long long)arg5 statusCode:(unsigned long long)arg6 errorMessage:(id)arg7;
- (_Bool)addNetworkErrorEvent:(id)arg1 httpMethod:(id)arg2 withTimer:(id)arg3 errorCode:(long long)arg4 bytesSent:(long long)arg5 bytesReceived:(long long)arg6 errorMessage:(id)arg7;
- (_Bool)addInteractionEvent:(id)arg1 interactionDuration:(double)arg2;
- (void)dealloc;
- (id)initWithSessionStartTimeMS:(long long)arg1;
- (void)setMaxEventBufferTime:(unsigned int)arg1;
- (void)setMaxEventBufferSize:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
