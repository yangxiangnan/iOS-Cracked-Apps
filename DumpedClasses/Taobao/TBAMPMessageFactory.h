//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBAMPMessageFactory : NSObject
{
}

+ (id)newSendMessageWithType:(unsigned long long)arg1 withBizId:(unsigned long long)arg2 forSession:(id)arg3 messageType:(unsigned long long)arg4 sendTime:(id)arg5;
+ (id)newAmpMessageWithType:(unsigned long long)arg1 messageType:(unsigned long long)arg2;
+ (id)newAmpMessageWithType:(unsigned long long)arg1;
+ (id)ampMessageFromJson:(id)arg1;
+ (id)ampMessageFromJsonStr:(id)arg1;

@end
