//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface _TtC7Lingome20CheckInSummaryHeader : UICollectionReusableView
{
    // Error parsing type: , name: todayRecordDurationLabel
    // Error parsing type: , name: todayBestQuizScoreLabel
    // Error parsing type: , name: maximumConsecutiveDaysLabel
    // Error parsing type: , name: dateLabel
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel;
@property(nonatomic) __weak UILabel *maximumConsecutiveDaysLabel; // @synthesize maximumConsecutiveDaysLabel;
@property(nonatomic) __weak UILabel *todayBestQuizScoreLabel; // @synthesize todayBestQuizScoreLabel;
@property(nonatomic) __weak UILabel *todayRecordDurationLabel; // @synthesize todayRecordDurationLabel;

@end
