//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MUKTitleActionCell.h"

@class NSString, UIImage, UIImageView;

@interface MUKTitleImgActionCell : MUKTitleActionCell
{
    NSString *_imgUrl;
    UIImage *_sideImage;
    UIImageView *_subImageView;
}

@property(retain, nonatomic) UIImageView *subImageView; // @synthesize subImageView=_subImageView;
@property(retain, nonatomic) UIImage *sideImage; // @synthesize sideImage=_sideImage;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
