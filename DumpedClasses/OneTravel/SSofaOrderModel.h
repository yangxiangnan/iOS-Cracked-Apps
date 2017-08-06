//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSofaBaseModel.h"

@class DiDiBoardingPOIEntityModel<Optional>, DiDiPOIEntityModel<Optional>, NSDate<Optional>, NSNumber<Optional>, NSString<Optional>;

@interface SSofaOrderModel : SSofaBaseModel
{
    NSString<Optional> *_orderId;
    DiDiPOIEntityModel<Optional> *_fromPoiModel;
    DiDiPOIEntityModel<Optional> *_toPoiModel;
    DiDiBoardingPOIEntityModel<Optional> *_onPosition;
    NSDate<Optional> *_goOffDate;
    NSNumber<Optional> *_departureTime;
    NSNumber<Optional> *_orderType;
    NSNumber<Optional> *_carLevel;
    NSNumber<Optional> *_orderStatus;
    NSNumber<Optional> *_price;
    NSString<Optional> *_arriveTime;
    NSNumber<Optional> *_status;
    NSNumber<Optional> *_type;
    NSNumber<Optional> *_times;
    NSString<Optional> *_desc;
    NSNumber<Optional> *_responsibleType;
    NSNumber<Optional> *_pay;
    NSNumber<Optional> *_banTime;
    NSNumber<Optional> *_punishPay;
    NSString<Optional> *_cycleinfo;
    NSNumber<Optional> *_leaveTime;
    NSNumber<Optional> *_isExempt;
}

@property(retain, nonatomic) NSNumber<Optional> *isExempt; // @synthesize isExempt=_isExempt;
@property(retain, nonatomic) NSNumber<Optional> *leaveTime; // @synthesize leaveTime=_leaveTime;
@property(copy, nonatomic) NSString<Optional> *cycleinfo; // @synthesize cycleinfo=_cycleinfo;
@property(retain, nonatomic) NSNumber<Optional> *punishPay; // @synthesize punishPay=_punishPay;
@property(retain, nonatomic) NSNumber<Optional> *banTime; // @synthesize banTime=_banTime;
@property(retain, nonatomic) NSNumber<Optional> *pay; // @synthesize pay=_pay;
@property(retain, nonatomic) NSNumber<Optional> *responsibleType; // @synthesize responsibleType=_responsibleType;
@property(copy, nonatomic) NSString<Optional> *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSNumber<Optional> *times; // @synthesize times=_times;
@property(retain, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber<Optional> *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString<Optional> *arriveTime; // @synthesize arriveTime=_arriveTime;
@property(retain, nonatomic) NSNumber<Optional> *price; // @synthesize price=_price;
@property(retain, nonatomic) NSNumber<Optional> *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(retain, nonatomic) NSNumber<Optional> *carLevel; // @synthesize carLevel=_carLevel;
@property(retain, nonatomic) NSNumber<Optional> *orderType; // @synthesize orderType=_orderType;
@property(retain, nonatomic) NSNumber<Optional> *departureTime; // @synthesize departureTime=_departureTime;
@property(retain, nonatomic) NSDate<Optional> *goOffDate; // @synthesize goOffDate=_goOffDate;
@property(retain, nonatomic) DiDiBoardingPOIEntityModel<Optional> *onPosition; // @synthesize onPosition=_onPosition;
@property(retain, nonatomic) DiDiPOIEntityModel<Optional> *toPoiModel; // @synthesize toPoiModel=_toPoiModel;
@property(retain, nonatomic) DiDiPOIEntityModel<Optional> *fromPoiModel; // @synthesize fromPoiModel=_fromPoiModel;
@property(copy, nonatomic) NSString<Optional> *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;

@end
