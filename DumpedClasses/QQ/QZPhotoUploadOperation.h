//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseOperation.h"

@interface QZPhotoUploadOperation : QZBaseOperation
{
}

- (void)finished:(id)arg1;
- (void)retryCompressionIfNeeded;
- (void)cancelJob:(_Bool)arg1;
- (void)decreaseBatchJobCount;
- (id)operationDescription;
- (id)titleText;
- (void)onRestored;
- (void)execute;

@end
