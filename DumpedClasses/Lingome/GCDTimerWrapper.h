//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCDTimerWrapper : NSObject
{
    struct dispatch_source_s *timer;
}

- (void)dealloc;
- (void)cancel;
- (id)initWithDispatchTimer:(struct dispatch_source_s *)arg1;

@end
