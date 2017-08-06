//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDIMAudioPlayerDelegate.h"
#import "DDIMBaseMessageCellViewDelegate.h"
#import "DDIMBaseSystemCellViewDelegate.h"
#import "DDIMSystemHelperCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DDIMTableView, DDIMTableViewDataModel, MJRefreshNormalHeader, NSDictionary, NSMutableArray, NSObject<OS_dispatch_source>, NSString;

@interface DDIMMessageTableViewDataSource : NSObject <DDIMBaseMessageCellViewDelegate, DDIMBaseSystemCellViewDelegate, DDIMAudioPlayerDelegate, DDIMSystemHelperCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    long long _audioPlayingSequence;
    _Bool _isLimited;
    _Bool _isSuspended;
    _Bool _isReadenActive;
    id <DDIMMessageVMDelegate> _messageVMDelegate;
    DDIMTableViewDataModel *_tableViewDataModel;
    DDIMTableView *_currentTableView;
    MJRefreshNormalHeader *_mj_header;
    NSDictionary *_extension;
    NSObject<OS_dispatch_source> *_sendTimer;
    NSMutableArray *_sendMidArray;
    NSMutableArray *_sendModelArray;
}

@property(retain, nonatomic) NSMutableArray *sendModelArray; // @synthesize sendModelArray=_sendModelArray;
@property(retain) NSMutableArray *sendMidArray; // @synthesize sendMidArray=_sendMidArray;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sendTimer; // @synthesize sendTimer=_sendTimer;
@property(retain, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) MJRefreshNormalHeader *mj_header; // @synthesize mj_header=_mj_header;
@property(nonatomic) __weak DDIMTableView *currentTableView; // @synthesize currentTableView=_currentTableView;
@property(retain, nonatomic) DDIMTableViewDataModel *tableViewDataModel; // @synthesize tableViewDataModel=_tableViewDataModel;
@property(nonatomic) _Bool isReadenActive; // @synthesize isReadenActive=_isReadenActive;
@property(nonatomic) __weak id <DDIMMessageVMDelegate> messageVMDelegate; // @synthesize messageVMDelegate=_messageVMDelegate;
- (void).cxx_destruct;
- (void)readAck:(id)arg1;
- (void)didSelectedSharePoiWithContent:(id)arg1;
- (void)didSelectedPoiWithContent:(id)arg1;
- (void)systemHelperCellDidSelected:(id)arg1;
- (void)gotoPersonalCenterWithUid:(long long)arg1 userInfo:(id)arg2;
- (void)stopAudioAnimationWithSequence:(long long)arg1;
- (void)stopAudioPlayAnimtionIfhave;
- (void)stopAudioPlayIfhave;
- (void)systemCellView:(id)arg1 tapCellWithLink:(id)arg2;
- (void)systemCellView:(id)arg1 tapCellWithSequence:(id)arg2;
- (void)messageView:(id)arg1 tapCellWithSequence:(id)arg2;
- (id)retriveLastDisplayMessage;
- (void)resetSessionInfo;
- (void)messageView:(id)arg1 deleteItemWithCellModel:(id)arg2;
- (void)messageView:(id)arg1 addCommonEWithCellModel:(id)arg2;
- (_Bool)messageViewCanAddCommonExpression:(id)arg1;
- (id)rightBubblePressed;
- (id)rightBubbleNormal;
- (id)defalutConfigPeerIcon;
- (id)extendViewForIMModel:(id)arg1;
- (void)messageView:(id)arg1 longPressEndedWithSequence:(id)arg2;
- (void)menuDidHide:(id)arg1;
- (void)messageView:(id)arg1 longPressStartWithSequence:(id)arg2;
- (void)messageView:(id)arg1 audioPlayFailedWithAudioSequence:(id)arg2;
- (void)messageView:(id)arg1 audioPlayStopWithAudioSequence:(id)arg2;
- (void)stopAudioWithSequence:(long long)arg1;
- (void)playAudioWithSequence:(long long)arg1;
- (void)playAudioWithResponseData:(id)arg1 withMessageModel:(id)arg2;
- (void)playAudioBackgroundWithMessageModel:(id)arg1;
- (void)playNextAudioWithCurrentIndex:(long long)arg1;
- (void)messageView:(id)arg1 audioPlayFirstFinishedWithAudioSequence:(id)arg2;
- (void)messageView:(id)arg1 audioPlayFinishedWithAudioSequence:(id)arg2;
- (void)messageView:(id)arg1 audioPlayStartWithAudioSequence:(id)arg2;
- (void)setCurrentLimited:(_Bool)arg1;
- (void)setIMUserInfoArray:(id)arg1;
- (void)setIMTableView:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)getUnReadStatusMsgsWithSession:(id)arg1;
- (void)loadPrePageMessage;
- (void)scrollTableToRow:(long long)arg1 Animated:(_Bool)arg2;
- (void)scrollTableToBottomAnimated:(_Bool)arg1;
- (void)reloadDataIsToBottom:(_Bool)arg1;
- (void)configCurrentTableHeader;
- (void)refreshDataSourceWithScrollToBottom:(_Bool)arg1;
- (void)refreshDBData;
- (id)getCellModelWithSequence:(long long)arg1;
- (long long)getMessageIndexWithSequence:(long long)arg1;
- (void)updateMessage:(id)arg1;
- (void)addNewMessage:(id)arg1 isMyMessage:(_Bool)arg2;
- (void)loadPreoviousPage;
- (void)deleteRecordingTableViewCell;
- (void)insertRecordingTableViewCell;
- (double)getExtendCellViewHeightWithMessage:(id)arg1;
- (double)cellHeightWithIndex:(long long)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshVMDefaultBgImageView;
- (void)senddMsgsReadStatus;
- (void)stopSendMsgReadStatusTimer;
- (void)startSendMsgReadStatusTimer;
- (id)getClassNameWithCellType:(long long)arg1;
- (void)dealloc;
- (void)updateConfigWithSession:(id)arg1;
- (id)initWithSessionModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
