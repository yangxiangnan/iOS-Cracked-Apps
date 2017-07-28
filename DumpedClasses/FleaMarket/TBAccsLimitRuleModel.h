//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBAccsLimitRuleModel : NSObject
{
    unsigned long long _leven;
    unsigned long long _type;
    double _delayTime;
    double _expireTime;
    double _expireDateTimestamp;
    NSString *_bizID;
    NSString *_serviceID;
    double _lastRequestSendTimestamp;
}

@property double lastRequestSendTimestamp; // @synthesize lastRequestSendTimestamp=_lastRequestSendTimestamp;
@property(retain, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(retain, nonatomic) NSString *bizID; // @synthesize bizID=_bizID;
@property(nonatomic) double expireDateTimestamp; // @synthesize expireDateTimestamp=_expireDateTimestamp;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long leven; // @synthesize leven=_leven;
- (void).cxx_destruct;

@end
