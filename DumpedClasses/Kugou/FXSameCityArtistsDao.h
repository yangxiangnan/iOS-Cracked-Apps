//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBasisHttpDao.h"

@interface FXSameCityArtistsDao : FXBasisHttpDao
{
}

- (id)getSomeArtistListWithCityId:(long long)arg1 withCityName:(id)arg2 withPage:(int)arg3 withpageSize:(int)arg4 error:(id *)arg5;
- (id)getCityInfoWithUrl:(id)arg1 error:(id *)arg2;
- (id)getSameCityArtistsListWithCityId:(int)arg1 withCityName:(id)arg2 withPage:(int)arg3 withpageSize:(int)arg4 sort:(unsigned long long)arg5 error:(id *)arg6;

@end
