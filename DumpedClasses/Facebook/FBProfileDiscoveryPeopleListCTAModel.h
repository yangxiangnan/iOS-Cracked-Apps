//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBProfileDiscoveryPeopleListCTAModel : FBValueObject <NSCopying>
{
    _Bool _shouldShowBottomSeparationLine;
    NSString *_title;
    NSString *_subtitle;
}

@property(readonly, nonatomic) _Bool shouldShowBottomSeparationLine; // @synthesize shouldShowBottomSeparationLine=_shouldShowBottomSeparationLine;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 shouldShowBottomSeparationLine:(_Bool)arg3;

@end
