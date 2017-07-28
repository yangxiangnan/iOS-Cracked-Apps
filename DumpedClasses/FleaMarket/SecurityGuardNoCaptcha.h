//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardNoCaptcha.h"

@class NSString;

@interface SecurityGuardNoCaptcha : NSObject <ISecurityGuardNoCaptcha>
{
}

- (Class)getMetaClass;
- (void)noCaptchaVerification:(id)arg1 status:(CDUnknownBlockType)arg2;
- (_Bool)putNoCaptchaTraceRecord:(long long)arg1 point:(struct CGPoint)arg2;
- (void)initNoCaptcha:(id)arg1 pageName:(id)arg2 width:(int)arg3 height:(int)arg4 retry:(int)arg5 status:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
