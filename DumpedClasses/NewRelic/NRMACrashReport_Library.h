//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRMAJSONABLE-Protocol.h"

@class NRMACrashReport_CodeType, NSNumber, NSString;

@interface NRMACrashReport_Library : NSObject <NRMAJSONABLE>
{
    NSString *_baseAddress;
    NSString *_imageName;
    NSNumber *_imageSize;
    NSString *_imageUuid;
    NRMACrashReport_CodeType *_codeType;
}

@property(retain) NRMACrashReport_CodeType *codeType; // @synthesize codeType=_codeType;
@property(retain) NSString *imageUuid; // @synthesize imageUuid=_imageUuid;
@property(retain) NSNumber *imageSize; // @synthesize imageSize=_imageSize;
@property(retain) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain) NSString *baseAddress; // @synthesize baseAddress=_baseAddress;
- (void).cxx_destruct;
- (id)JSONObject;
- (id)initWithBaseAddress:(id)arg1 imageName:(id)arg2 imageSize:(id)arg3 imageUuid:(id)arg4 codeType:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
