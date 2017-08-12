//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EZTableDataProtocol-Protocol.h"

@class EMConversation, EZTableDataController, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface EZGroupChatListDataController : NSObject <EZTableDataProtocol>
{
    EMConversation *_conversation;
    EZTableDataController *_dataController;
    NSMutableArray *_messagesArray;
    NSObject<OS_dispatch_queue> *_dataFetchingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataFetchingQueue; // @synthesize dataFetchingQueue=_dataFetchingQueue;
@property(retain, nonatomic) NSMutableArray *messagesArray; // @synthesize messagesArray=_messagesArray;
@property(retain, nonatomic) EZTableDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) EMConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (int)studyGroupDataTypeAtIndexPath:(id)arg1;
- (id)mergeObjectsFrom:(id)arg1 withNewObjects:(id)arg2;
- (id)sortMessageByCreatedTime:(id)arg1;
- (id)indexPathForMessageWithId:(id)arg1;
- (id)lastMessageIndexPath;
- (id)firstMessageIndexPath;
- (double)messageTimeIntervalAtIndexPath:(id)arg1;
- (id)groupMessagesFromHuanxinMessages:(id)arg1;
- (long long)indexOfUrl:(id)arg1 inUrls:(id)arg2;
- (id)fetchImageUrls;
- (void)fetchAllUnreadMessagesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchHistoryMessagesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)insertMessages:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)insertMessage:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)insertNewMessages:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)deleteMessagesWithFirstVisibleMessage:(id)arg1;
- (void)loadDataWithCompletionBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (id)lastItemIndexPath;
- (id)dataAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)divideMessageToGroups:(id)arg1;
- (id)indexPathForObject:(id)arg1;
- (id)initWithChatUserIMId:(id)arg1;
- (id)initWithGroupIMId:(id)arg1;
- (id)initWithGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
