//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVKLiteUrlConfig : NSObject
{
    NSString *_getvInfoCGI;
    NSString *_getvbKeyCGI;
    NSString *_checkTimeCGI;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *checkTimeCGI; // @synthesize checkTimeCGI=_checkTimeCGI;
@property(readonly, nonatomic) NSString *getvbKeyCGI; // @synthesize getvbKeyCGI=_getvbKeyCGI;
@property(readonly, nonatomic) NSString *getvInfoCGI; // @synthesize getvInfoCGI=_getvInfoCGI;
- (void).cxx_destruct;
- (id)checkTime;
- (id)liveProgramVInfo;
- (id)getvKey;
- (id)getvbKeyForQzone;
- (id)getvbKey;
- (id)getvInfoForQzone;
- (id)getvInfo;
- (id)facilityPlaybackExtraParams;
- (id)facilityQueryString;
- (id)facilityPlatform;
- (id)facilitySdtfrom;
- (id)getSdtFromForPlay:(id)arg1;
- (id)getPlatform:(id)arg1;
@property(readonly, nonatomic) NSString *getPlatform;
@property(readonly, nonatomic) NSString *getSdtFromForPlay;
@property(readonly, nonatomic) NSString *checkTimeURL;
@property(readonly, nonatomic) NSString *liveProgramVInfoURL;
- (id)liveProgramVInfoURL:(id)arg1 Platform:(id)arg2 andCKey:(id)arg3;
- (id)liveProgramVInfoURL:(id)arg1 andPlatform:(id)arg2;
- (id)getvInfoURLForVid:(id)arg1 Platform:(id)arg2 andCKey:(id)arg3;
- (id)getvbKeyURLForVid:(id)arg1 andPlatform:(id)arg2;
- (id)getvInfoURLForVid:(id)arg1 andPlatform:(id)arg2;
@property(readonly, nonatomic) NSString *getvbKeyURL;
@property(readonly, nonatomic) NSString *getvInfoURL;

@end
