//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DocSwfDelegate <NSObject>
- (void)OnOpenComplete:(struct SwfPlayerBase *)arg1 userID:(int)arg2;
- (void)NeedDraw:(struct SwfPlayerBase *)arg1;
- (void)OnKillTimer:(struct SwfPlayerBase *)arg1;
- (void)OnSetTimer:(struct SwfPlayerBase *)arg1;
- (void)OnEndDraw:(struct SwfPlayerBase *)arg1;
- (void)OnBeginDraw:(struct SwfPlayerBase *)arg1;
@end
