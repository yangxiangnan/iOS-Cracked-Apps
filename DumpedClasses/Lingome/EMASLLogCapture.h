//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EMASLLogCapture : NSObject
{
}

+ (void)captureAslLogs;
+ (void)aslMessageRecieved:(struct __asl_object_s *)arg1;
+ (void)configureAslQuery:(struct __asl_object_s *)arg1;
+ (void)setCaptureLevel:(unsigned long long)arg1;
+ (unsigned long long)captureLevel;
+ (void)stop;
+ (void)start;
+ (void)initialize;

@end
