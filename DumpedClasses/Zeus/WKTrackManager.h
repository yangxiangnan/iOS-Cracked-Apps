//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WKTrackManager : NSObject
{
}

+ (void)eventPushID:(id)arg1 desc:(id)arg2;
+ (void)eventPushID:(id)arg1;
+ (void)eventAppInstall:(id)arg1;
+ (void)eventError:(id)arg1 errorMsg:(id)arg2 desc:(id)arg3;
+ (void)eventError:(id)arg1 errorMsg:(id)arg2;
+ (void)eventDeviceToken:(id)arg1 desc:(id)arg2;
+ (void)eventDeviceToken:(id)arg1;
+ (void)eventActive:(_Bool)arg1 desc:(id)arg2;
+ (void)eventActive:(_Bool)arg1;
+ (void)uploadTodayExtensionData;
+ (void)event:(id)arg1 desc:(id)arg2;
+ (void)event:(id)arg1;

@end
