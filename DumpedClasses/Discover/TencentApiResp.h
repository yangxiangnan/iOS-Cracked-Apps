//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, TencentApiReq;

@interface TencentApiResp : NSObject <NSCoding>
{
    long long _nRetCode;
    NSString *_sRetMsg;
    TencentApiReq *_objReq;
    int _xo;
}

+ (id)respFromReq:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) long long nRetCode; // @dynamic nRetCode;
@property(retain, nonatomic) TencentApiReq *objReq; // @dynamic objReq;
@property(retain, nonatomic) NSString *sRetMsg; // @dynamic sRetMsg;

@end

