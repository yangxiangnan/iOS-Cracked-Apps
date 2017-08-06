//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTV_DBBase, NSString;

@interface KTV_DBManager : NSObject
{
    NSString *tableName;
    KTV_DBBase *dbBase;
}

@property(retain, nonatomic) KTV_DBBase *dbBase; // @synthesize dbBase;
- (void).cxx_destruct;
- (_Bool)dropTable;
- (_Bool)update:(id)arg1 condition:(id)arg2;
- (_Bool)deleteDataByCondiction:(id)arg1;
- (_Bool)deleteAll;
- (_Bool)insertIntoTable:(id)arg1;
- (_Bool)NSStringIsNULL:(id)arg1;
- (id)init;

@end
