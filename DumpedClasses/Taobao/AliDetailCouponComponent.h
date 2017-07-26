//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliProductDetailComponent.h"

@class AliDetailASYIService, AliDetailPtShopCouponModel, AliDetailServiceContext, UIColor, UILabel;

@interface AliDetailCouponComponent : AliProductDetailComponent
{
    UIColor *fgColor;
    UILabel *_priceLabel;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    UILabel *_timePeriodLabel;
    UILabel *_rightTips;
    AliDetailPtShopCouponModel *_couponModel;
    AliDetailASYIService *_couponService;
    AliDetailServiceContext *_couponContext;
}

+ (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) AliDetailServiceContext *couponContext; // @synthesize couponContext=_couponContext;
@property(retain, nonatomic) AliDetailASYIService *couponService; // @synthesize couponService=_couponService;
@property(retain, nonatomic) AliDetailPtShopCouponModel *couponModel; // @synthesize couponModel=_couponModel;
@property(retain, nonatomic) UILabel *rightTips; // @synthesize rightTips=_rightTips;
@property(retain, nonatomic) UILabel *timePeriodLabel; // @synthesize timePeriodLabel=_timePeriodLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
- (void).cxx_destruct;
- (void)setTimePeriod;
- (void)setRightTips;
- (void)setTips:(double)arg1;
- (void)setTitle:(double)arg1 hasTips:(_Bool)arg2;
- (void)setTipsAndTitle;
- (void)setColors;
- (void)clickCoupon:(id)arg1;
- (void)setObject:(id)arg1;
- (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
