//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GCDThrottle : NSObject
{
}

+ (void)throttle:(double)arg1 key:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (void)throttle:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)throttle:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (id)scheduledSources;

@end
