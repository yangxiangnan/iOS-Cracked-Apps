//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface NVMBreakfastDateWarningCell : UICollectionViewCell
{
    UILabel *_warningLabel;
    UIView *_checkView;
    UIImageView *_hasGoodImageView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *hasGoodImageView; // @synthesize hasGoodImageView=_hasGoodImageView;
@property(retain, nonatomic) UIView *checkView; // @synthesize checkView=_checkView;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
