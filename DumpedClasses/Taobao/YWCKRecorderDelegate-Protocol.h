//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol YWCKRecorderDelegate <NSObject>

@optional
- (void)recorderDidOutputSampleBuffer:(id <YWCKRecorder>)arg1;
- (void)recorderDidCompleteSession:(id <YWCKRecorder>)arg1;
- (void)recorder:(id <YWCKRecorder>)arg1 didCompleteSegment:(id <YWCKRecordSegment>)arg2;
@end
