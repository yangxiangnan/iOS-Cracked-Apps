//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QXLiveChatClientInfo : NSObject
{
    _Bool _isUseDomainAddress;
    int _version;
    int _platform;
    int _network;
    int _atype;
    int _ag;
    long long _room;
    NSString *_atoken;
    NSString *_deviceID;
    NSString *_liveChatDomain;
    NSString *_liveChatMQTTServer;
    double _connectTimeout;
}

@property(nonatomic) double connectTimeout; // @synthesize connectTimeout=_connectTimeout;
@property(copy, nonatomic) NSString *liveChatMQTTServer; // @synthesize liveChatMQTTServer=_liveChatMQTTServer;
@property(copy, nonatomic) NSString *liveChatDomain; // @synthesize liveChatDomain=_liveChatDomain;
@property(nonatomic) int ag; // @synthesize ag=_ag;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) _Bool isUseDomainAddress; // @synthesize isUseDomainAddress=_isUseDomainAddress;
@property(copy, nonatomic) NSString *atoken; // @synthesize atoken=_atoken;
@property(nonatomic) int atype; // @synthesize atype=_atype;
@property(nonatomic) long long room; // @synthesize room=_room;
@property(nonatomic) int network; // @synthesize network=_network;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(nonatomic) int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)buildJsonDicToSend;

@end

