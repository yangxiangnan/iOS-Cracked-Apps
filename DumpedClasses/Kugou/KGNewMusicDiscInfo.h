//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGMusicBaseObject.h"

@class NSString;

@interface KGNewMusicDiscInfo : KGMusicBaseObject
{
    _Bool _isPayAlbum;
    int _singerid;
    int _isfirst;
    NSString *_albumid;
    NSString *_albumname;
    NSString *_singername;
    NSString *_intro;
    NSString *_publishtime;
    NSString *_imgurl;
    unsigned long long _privilege;
    long long _songcount;
}

@property(nonatomic) long long songcount; // @synthesize songcount=_songcount;
@property(nonatomic) unsigned long long privilege; // @synthesize privilege=_privilege;
@property(nonatomic) int isfirst; // @synthesize isfirst=_isfirst;
@property(copy, nonatomic) NSString *imgurl; // @synthesize imgurl=_imgurl;
@property(copy, nonatomic) NSString *publishtime; // @synthesize publishtime=_publishtime;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *singername; // @synthesize singername=_singername;
@property(nonatomic) int singerid; // @synthesize singerid=_singerid;
@property(copy, nonatomic) NSString *albumname; // @synthesize albumname=_albumname;
@property(copy, nonatomic) NSString *albumid; // @synthesize albumid=_albumid;
@property(nonatomic) _Bool isPayAlbum; // @synthesize isPayAlbum=_isPayAlbum;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
