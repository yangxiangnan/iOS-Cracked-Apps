//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBInstantGameEndGameScrollViewsGenerator, FBQuicksilverGameInfo, FBQuicksilverMatchupInfo, FBQuicksilverPlayerInfo;

@protocol FBInstantGameEndGameScrollViewsGeneratorDelegate <NSObject>
- (void)endGameScrollViewsGenerator:(FBInstantGameEndGameScrollViewsGenerator *)arg1 gameListCardDidSelectGameWithGameInfo:(FBQuicksilverGameInfo *)arg2;
- (void)endGameScrollViewsGeneratorChallengeListCardDidTapSeeMore:(FBInstantGameEndGameScrollViewsGenerator *)arg1;
- (void)endGameScrollViewsGenerator:(FBInstantGameEndGameScrollViewsGenerator *)arg1 challengeListCardDidTapChallengeWithNewMatchupInfo:(FBQuicksilverMatchupInfo *)arg2;
- (void)endGameScrollViewsGenerator:(FBInstantGameEndGameScrollViewsGenerator *)arg1 friendLeaderboardCardDidTapPlayAgainstOpponent:(FBQuicksilverPlayerInfo *)arg2;
- (void)endGameScrollViewsGeneratorFriendLeaderboardCardDidTapPlayWithFBFriends:(FBInstantGameEndGameScrollViewsGenerator *)arg1;
@end
