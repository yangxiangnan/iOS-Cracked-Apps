//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IEMMessageBody-Protocol.h"

@class EMLocationMessageBodyInternal, EMMessage, NSString;
@protocol IEMChatObject;

@interface EMLocationMessageBody : NSObject <IEMMessageBody>
{
    EMLocationMessageBodyInternal *_internal;
}

- (void).cxx_destruct;
@property(nonatomic) __weak EMMessage *message; // @dynamic message;
@property(readonly, nonatomic) long long messageBodyType; // @dynamic messageBodyType;
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(readonly, nonatomic) id <IEMChatObject> chatObject; // @dynamic chatObject;
- (id)initWithChatObject:(id)arg1;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
