//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@protocol TBIMMessageAdapter <NSObject>
- (NSDictionary *)toJsonDictionary;
- (_Bool)isAitaSelf;
- (_Bool)hasAitaInfo;
- (_Bool)canShowPush;
- (NSString *)remark;
- (NSString *)getExt;
- (long long)Compare:(id <TBIMMessageAdapter>)arg1;
- (_Bool)isEqual:(id <TBIMMessageAdapter>)arg1;
- (id <TBIMUserAdapter>)getSender;
- (NSString *)getSenderId;
- (id <TBIMSessionAdapter>)getSession;
- (_Bool)isTemp;
- (NSString *)code;
- (_Bool)isSilent;
- (NSString *)getSenderName;
- (NSString *)summary;
- (NSDate *)getSendTime;
- (NSString *)getSessionId;
- (unsigned long long)getReadStatus;
- (unsigned long long)getSendStatus;
- (unsigned long long)getDirection;
- (NSString *)getContent;
- (int)getMessageType;
- (NSString *)getMessageID;
@end
