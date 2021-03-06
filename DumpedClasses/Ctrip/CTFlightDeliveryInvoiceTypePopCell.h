//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightDeliveryInvoiceTypePopCellModel, NSLayoutConstraint, UIImageView, UILabel;

@interface CTFlightDeliveryInvoiceTypePopCell : UITableViewCell
{
    CTFlightDeliveryInvoiceTypePopCellModel *_cellModel;
    UIImageView *_tickIcon;
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelCenterY;
    UILabel *_hintLabel;
}

+ (double)heightOfDeliveryInvoiceTypePopCell:(id)arg1;
@property(nonatomic) __weak UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelCenterY; // @synthesize titleLabelCenterY=_titleLabelCenterY;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *tickIcon; // @synthesize tickIcon=_tickIcon;
@property(retain, nonatomic) CTFlightDeliveryInvoiceTypePopCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (void)setupDeliveryInvoiceTypePopCell:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

