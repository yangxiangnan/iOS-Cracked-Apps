//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ResponseInfo.h"

@class NSArray, NSMutableArray, NSString;

@interface SimilarSpecialResponseInfo : ResponseInfo
{
    NSString *_errMessage;
    NSMutableArray *_specialItemList;
    NSArray *_taglist;
}

+ (id)dataStringWithObj:(id)arg1 AndFormat:(id)arg2;
+ (id)tokenSimilarSpecialResponseData:(id)arg1;
@property(retain, nonatomic) NSArray *taglist; // @synthesize taglist=_taglist;
@property(retain, nonatomic) NSMutableArray *specialItemList; // @synthesize specialItemList=_specialItemList;
@property(retain, nonatomic) NSString *errMessage; // @synthesize errMessage=_errMessage;
- (void).cxx_destruct;

@end
