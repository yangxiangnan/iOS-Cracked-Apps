//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7Lingome23ClassLiveViewController.h"

#import "GSBroadcastAudioDelegate-Protocol.h"

@interface _TtC7Lingome23ClassLiveViewController (Lingome5) <GSBroadcastAudioDelegate>
- (void)broadcastManager:(id)arg1 isSpeakerAvailable:(_Bool)arg2;
- (void)broadcastManager:(id)arg1 microphoneAudioWaveValue:(long long)arg2;
- (void)broadcastManagerDidInactivateMicrophone:(id)arg1;
- (void)broadcastManagerDidActivateMicrophone:(id)arg1;
- (void)broadcastManager:(id)arg1 didReceiveAudioModuleInitResult:(_Bool)arg2;
@end
