//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVCompetitionResultInfo, NSString;

@interface KTVCompetitionResultItem : KTVObjectModel
{
    _Bool _sex1;
    _Bool _sex2;
    int _immunity;
    long long _result;
    long long _starNum;
    NSString *_songName;
    NSString *_headImg1;
    NSString *_headImg2;
    long long _isFx1;
    long long _isFx2;
    NSString *_userName1;
    NSString *_userName2;
    NSString *_scoreStr;
    NSString *_resultImageName;
    long long _gainStarNum;
    long long _result2;
    NSString *_result2Content;
    long long _gainImmunity;
    NSString *_gainImmunityDescr;
    KTVCompetitionResultInfo *_info;
}

@property(retain, nonatomic) KTVCompetitionResultInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *gainImmunityDescr; // @synthesize gainImmunityDescr=_gainImmunityDescr;
@property(nonatomic) long long gainImmunity; // @synthesize gainImmunity=_gainImmunity;
@property(retain, nonatomic) NSString *result2Content; // @synthesize result2Content=_result2Content;
@property(nonatomic) long long result2; // @synthesize result2=_result2;
@property(nonatomic) long long gainStarNum; // @synthesize gainStarNum=_gainStarNum;
@property(nonatomic) int immunity; // @synthesize immunity=_immunity;
@property(retain, nonatomic) NSString *resultImageName; // @synthesize resultImageName=_resultImageName;
@property(retain, nonatomic) NSString *scoreStr; // @synthesize scoreStr=_scoreStr;
@property(nonatomic) _Bool sex2; // @synthesize sex2=_sex2;
@property(nonatomic) _Bool sex1; // @synthesize sex1=_sex1;
@property(retain, nonatomic) NSString *userName2; // @synthesize userName2=_userName2;
@property(retain, nonatomic) NSString *userName1; // @synthesize userName1=_userName1;
@property(nonatomic) long long isFx2; // @synthesize isFx2=_isFx2;
@property(nonatomic) long long isFx1; // @synthesize isFx1=_isFx1;
@property(retain, nonatomic) NSString *headImg2; // @synthesize headImg2=_headImg2;
@property(retain, nonatomic) NSString *headImg1; // @synthesize headImg1=_headImg1;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(nonatomic) long long starNum; // @synthesize starNum=_starNum;
@property(nonatomic) long long result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)configureFromInfo:(id)arg1;

@end
