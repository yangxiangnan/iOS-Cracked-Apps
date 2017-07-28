//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppMonitorEvent.h"

#import "AppMonitorRawEventProtocol.h"

@class NSString;

@interface AppMonitorRawCountEvent : AppMonitorEvent <AppMonitorRawEventProtocol>
{
    long long _count;
    double _value;
}

+ (id)parseRawUTMsg:(id)arg1;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) long long count; // @synthesize count=_count;
- (id)dumpToUTEvent;
- (id)initWithEventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3 value:(double)arg4;
- (id)initWithEventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3 value:(double)arg4 extraInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
