//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKFeedCmtArrModel.h"

@class WKFeedCommentModel;

@interface WKFeedUnFoldCmtModel : WKFeedCmtArrModel
{
    _Bool _isUnFold;
    WKFeedCommentModel *_newsCmt;
    unsigned long long _floorNum;
    unsigned long long _floorCount;
    unsigned long long _originIndex;
    unsigned long long _totalFloorOfUnFold;
}

@property(nonatomic) _Bool isUnFold; // @synthesize isUnFold=_isUnFold;
@property(nonatomic) unsigned long long totalFloorOfUnFold; // @synthesize totalFloorOfUnFold=_totalFloorOfUnFold;
@property(nonatomic) unsigned long long originIndex; // @synthesize originIndex=_originIndex;
@property(nonatomic) unsigned long long floorCount; // @synthesize floorCount=_floorCount;
@property(nonatomic) unsigned long long floorNum; // @synthesize floorNum=_floorNum;
@property(retain, nonatomic) WKFeedCommentModel *newsCmt; // @synthesize newsCmt=_newsCmt;
- (void).cxx_destruct;
- (void)showMoreText:(_Bool)arg1;
- (id)initWithComment:(id)arg1 floorNum:(unsigned long long)arg2 floorCount:(unsigned long long)arg3;

@end
