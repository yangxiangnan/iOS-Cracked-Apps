//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSArray<FAShakeActivityGiftInfoList>, NSString;

@interface FAShakeActivityConfig : FAModel
{
    int _nID;
    NSString *_intro;
    NSString *_msg;
    NSString *_groundUrl;
    NSString *_groundDetailUrl;
    NSString *_specificationUrl;
    NSString *_buttonUrl;
    NSArray<FAShakeActivityGiftInfoList> *_giftInfoList;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSArray<FAShakeActivityGiftInfoList> *giftInfoList; // @synthesize giftInfoList=_giftInfoList;
@property(copy, nonatomic) NSString *buttonUrl; // @synthesize buttonUrl=_buttonUrl;
@property(copy, nonatomic) NSString *specificationUrl; // @synthesize specificationUrl=_specificationUrl;
@property(copy, nonatomic) NSString *groundDetailUrl; // @synthesize groundDetailUrl=_groundDetailUrl;
@property(copy, nonatomic) NSString *groundUrl; // @synthesize groundUrl=_groundUrl;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(nonatomic) int nID; // @synthesize nID=_nID;
- (void).cxx_destruct;

@end
