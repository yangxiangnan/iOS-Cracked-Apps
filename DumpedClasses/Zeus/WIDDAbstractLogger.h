//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WIDDLogger-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, WIDDLogFormatter;

@interface WIDDAbstractLogger : NSObject <WIDDLogger>
{
    id <WIDDLogFormatter> formatter;
    NSObject<OS_dispatch_queue> *loggerQueue;
}

- (id)loggerName;
- (id)loggerQueue;
- (void)setLogFormatter:(id)arg1;
- (id)logFormatter;
- (void)logMessage:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
