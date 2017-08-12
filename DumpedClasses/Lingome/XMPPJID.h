//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface XMPPJID : NSObject <NSCoding, NSCopying>
{
    NSString *user;
    NSString *domain;
    NSString *resource;
}

+ (id)jidWithPrevalidatedUser:(id)arg1 prevalidatedDomain:(id)arg2 resource:(id)arg3;
+ (id)jidWithPrevalidatedUser:(id)arg1 prevalidatedDomain:(id)arg2 prevalidatedResource:(id)arg3;
+ (id)jidWithUser:(id)arg1 domain:(id)arg2 resource:(id)arg3;
+ (id)jidWithString:(id)arg1 resource:(id)arg2;
+ (id)jidWithString:(id)arg1;
+ (_Bool)parse:(id)arg1 outUser:(id *)arg2 outDomain:(id *)arg3 outResource:(id *)arg4;
+ (_Bool)validateUser:(id)arg1 domain:(id)arg2 resource:(id)arg3;
+ (_Bool)validateResource:(id)arg1;
+ (_Bool)validateDomain:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToJID:(id)arg1 options:(int)arg2;
- (_Bool)isEqualToJID:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)jidWithNewResource:(id)arg1;
- (_Bool)isServer;
- (_Bool)isFullWithUser;
- (_Bool)isFull;
- (_Bool)isBareWithUser;
- (_Bool)isBare;
- (id)full;
- (id)bare;
- (id)domainJID;
- (id)bareJID;
@property(readonly) NSString *resource;
@property(readonly) NSString *domain;
@property(readonly) NSString *user;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
