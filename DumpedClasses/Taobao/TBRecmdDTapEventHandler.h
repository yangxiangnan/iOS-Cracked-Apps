//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBDinamicEventHandler.h"

@class NSString, TBRecmdContext;

@interface TBRecmdDTapEventHandler : NSObject <TBDinamicEventHandler>
{
    TBRecmdContext *_context;
}

@property(nonatomic) __weak TBRecmdContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)prepareBindEventInView:(id)arg1 withData:(id)arg2;
- (void)handleEventInView:(id)arg1 withData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
