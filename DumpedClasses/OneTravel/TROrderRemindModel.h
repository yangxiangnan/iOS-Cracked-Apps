//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface TROrderRemindModel : TRBaseModel
{
    NSNumber<Optional> *_msgId;
    NSNumber<Optional> *_msgType;
    NSString<Optional> *_msgValue;
    NSString<Optional> *_orderId;
    NSString<Optional> *_title;
    NSString<Optional> *_content;
    NSString<Optional> *_imgIconUrl;
    NSString<Optional> *_cancelBtnText;
    NSString<Optional> *_confirmBtnText;
}

+ (id)objWithTimelyRemindReq:(id)arg1;
@property(retain, nonatomic) NSString<Optional> *confirmBtnText; // @synthesize confirmBtnText=_confirmBtnText;
@property(retain, nonatomic) NSString<Optional> *cancelBtnText; // @synthesize cancelBtnText=_cancelBtnText;
@property(retain, nonatomic) NSString<Optional> *imgIconUrl; // @synthesize imgIconUrl=_imgIconUrl;
@property(retain, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString<Optional> *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString<Optional> *msgValue; // @synthesize msgValue=_msgValue;
@property(retain, nonatomic) NSNumber<Optional> *msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSNumber<Optional> *msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (long long)orderAdditionType;

@end
