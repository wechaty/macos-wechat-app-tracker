//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IChatSyncMgrExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMService-Protocol.h"
#import "SyncExt-Protocol.h"

@class MMSessionSortLogic, MMSessionStorage, MMSessionsWrapper, MMThreadSafeDictionary, MMTimer, NSArray, NSMutableArray, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface MMSessionMgr : MMService <IGroupMgrExt, SyncExt, IMessageExt, IContactMgrExt, IChatSyncMgrExt, MMService>
{
    BOOL _m_hasClearData;
    BOOL _bSessionLoaded;
    unsigned int _m_totalUnReadCount;
    MMSessionsWrapper *_sessionsWrapper;
    MMSessionStorage *_m_storage;
    MMSessionSortLogic *_m_sortLogic;
    NSRecursiveLock *_m_arrSessionLock;
    NSRecursiveLock *_m_reorderSessionLock;
    MMTimer *_updateTimer;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    MMThreadSafeDictionary *_needEnterSessionSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMThreadSafeDictionary *needEnterSessionSet; // @synthesize needEnterSessionSet=_needEnterSessionSet;
@property BOOL bSessionLoaded; // @synthesize bSessionLoaded=_bSessionLoaded;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain, nonatomic) MMTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSRecursiveLock *m_reorderSessionLock; // @synthesize m_reorderSessionLock=_m_reorderSessionLock;
@property(retain, nonatomic) NSRecursiveLock *m_arrSessionLock; // @synthesize m_arrSessionLock=_m_arrSessionLock;
@property BOOL m_hasClearData; // @synthesize m_hasClearData=_m_hasClearData;
@property(retain, nonatomic) MMSessionSortLogic *m_sortLogic; // @synthesize m_sortLogic=_m_sortLogic;
@property(retain, nonatomic) MMSessionStorage *m_storage; // @synthesize m_storage=_m_storage;
@property(retain, nonatomic) MMSessionsWrapper *sessionsWrapper; // @synthesize sessionsWrapper=_sessionsWrapper;
@property unsigned int m_totalUnReadCount; // @synthesize m_totalUnReadCount=_m_totalUnReadCount;
- (void)setupSessionArray:(id)arg1;
- (void)resetSessionArray;
- (void)addTaskOnMarkSessionRead:(id)arg1;
- (void)addTaskOnDraftSession:(id)arg1;
- (void)addTaskOnMuteChange:(id)arg1 withContact:(id)arg2;
- (void)addTaskOnTopChange:(id)arg1 withContact:(id)arg2;
- (void)addTaskOnUnreadCountChange:(id)arg1 to:(unsigned int)arg2 isMarkUnread:(BOOL)arg3;
- (void)addTaskOnEnterSession:(id)arg1;
- (void)addTaskOnSyncMsgs:(id)arg1 msgList:(id)arg2;
- (void)addTaskOnModMsg:(id)arg1 msgData:(id)arg2;
- (void)addTaskOnModifySessionArray:(id)arg1;
- (void)addTaskOnModifySession:(id)arg1;
- (void)addTaskOnModifyContact:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)onUnReadCountChange:(id)arg1;
- (void)onUnreadSession:(id)arg1;
- (void)onEnterSession:(id)arg1;
- (void)onMsgDeletedForSession:(id)arg1;
- (void)onModMsg:(id)arg1 msgData:(id)arg2;
- (void)onChatSyncMsgs:(id)arg1 msgList:(id)arg2;
- (void)onAddMsgListForSession:(id)arg1;
- (void)onGetSessionListFromStatusNotify:(id)arg1 source:(int)arg2;
- (void)processOnSyncSessionList:(id)arg1 source:(int)arg2;
- (BOOL)shouldHandleSyncedSessionList:(int)arg1;
- (void)processSpecialSessionInfo:(id)arg1;
- (void)processBrandSessionHolderInfo:(id)arg1;
- (void)processRecoverSessionArray:(id)arg1;
- (void)processOnUnreadCountChange:(id)arg1 isMarkUnread:(BOOL)arg2;
- (void)processOnModifyContacts:(id)arg1;
- (void)processOnEnterSession:(id)arg1 isFromLocal:(BOOL)arg2;
- (void)processOnMsgDeleted:(id)arg1;
- (void)processOnChatSyncMsgs:(id)arg1 msgList:(id)arg2;
- (void)processOnModMsg:(id)arg1 msgData:(id)arg2;
- (void)processOnAddMsgListForSession:(id)arg1;
- (void)onInitFinish;
- (void)chatDelete;
- (void)chatMuteOrUnmute;
- (void)chatStickyOrUnsticky;
- (void)onDeleteContacts:(id)arg1;
- (unsigned int)GenSendMsgTimeWithUserName:(id)arg1;
- (unsigned int)GenSendMsgTime;
- (void)processSessionWithUserName:(id)arg1 isMuted:(BOOL)arg2 updateStatus:(unsigned long long)arg3;
- (void)unmuteSessionByUserName:(id)arg1 updateStatus:(unsigned long long)arg2;
- (void)unmuteSessionByUserName:(id)arg1;
- (void)muteSessionByUserName:(id)arg1 updateStatus:(unsigned long long)arg2;
- (void)muteSessionByUserName:(id)arg1;
- (void)switchSession:(id)arg1 isFolding:(BOOL)arg2 isAnimated:(BOOL)arg3;
- (void)switchAllReadedSessionsFoldingStatus:(BOOL)arg1 isAnimated:(BOOL)arg2;
- (BOOL)shouldFoldSession:(id)arg1;
- (void)processSessionWithUserName:(id)arg1 isInGroupBox:(BOOL)arg2 updateStatus:(unsigned long long)arg3;
- (void)processSessionWithUserName:(id)arg1 isTop:(BOOL)arg2 updateStatus:(unsigned long long)arg3;
- (void)processDraftSessionInfo:(id)arg1;
- (BOOL)isTopSessionCountExceed;
- (void)untopSessionByUserName:(id)arg1 updateStatus:(unsigned long long)arg2;
- (void)untopSessionByUserName:(id)arg1;
- (void)topSessionByUserName:(id)arg1 updateStatus:(unsigned long long)arg2;
- (void)topSessionByUserName:(id)arg1;
- (void)createNewSessionWithUserName:(id)arg1;
- (unsigned int)getTotalUnreadCount;
- (void)processMarkSessionAsRead:(id)arg1;
- (id)getTopNSession:(unsigned long long)arg1;
- (id)getAllGroupSession;
- (id)getAllGroupSessionContact;
- (id)getNextUnreadSessionWithCurIndex:(unsigned long long)arg1;
- (id)getNextUnreadSessionWithCurIndex:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (id)getFirstUnreadSession;
- (id)getFirstUnreadSessionWithType:(unsigned long long)arg1;
- (long long)getFirstUntopSessionIndex;
- (BOOL)ignoreMutedChatsWhileAutoScroll;
- (BOOL)ignoreMutedChatsWhileAutoScrollWithType:(unsigned long long)arg1;
- (id)getSessionByUserName:(id)arg1;
- (id)getSessionAtIndex:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (id)getSessionAtIndex:(unsigned long long)arg1;
- (long long)getSessionIndexByUserName:(id)arg1 forType:(unsigned long long)arg2;
- (long long)getSessionIndexByUserName:(id)arg1;
- (unsigned long long)getSessionCountForType:(unsigned long long)arg1;
- (unsigned long long)getSessionCount;
- (id)getAllSessionsForType:(unsigned long long)arg1;
- (id)getAllSessions;
@property(retain, nonatomic) NSString *m_currentSessionName;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)checkUpdate;
- (void)stopUpdateTimer;
- (void)updateGroupChatSessionIfNeeded;
- (void)doRecoverSessionList;
- (void)recoverSessionListFromLocalMsg;
- (id)genSessionInfo:(id)arg1 withLastMsg:(id)arg2;
- (double)getMaxEnterTime;
- (unsigned int)sumUnreadCount;
- (void)pushFrontSessionInfo:(id)arg1;
- (unsigned char)FFDataSvrMgrSvrFavZZ;
- (void)syncSessionOrder:(id)arg1;
- (void)removeSessionInfoInArray:(id)arg1;
- (void)removeSessionInfo:(id)arg1;
- (void)updateSessionInfo:(id)arg1;
- (void)addOrUpdateSessionInfo:(id)arg1 isNew:(char *)arg2;
- (long long)indexInSessionArray:(id)arg1 withUserName:(id)arg2;
- (long long)indexInSessionArrayWithUserName:(id)arg1;
- (long long)indexInSessionArrayWithUserName:(id)arg1 forType:(unsigned long long)arg2;
- (id)sessionInfoByUserName:(id)arg1;
- (id)sessionInfoAtIndex:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (id)doStickyChatsTypeStatistic;
- (void)updateStickyFolderSessionInfo;
- (long long)groupBoxAdjustStrategy;
- (void)setGroupBoxAdjustStrategy:(long long)arg1;
- (long long)lastGroupBoxPos;
- (void)setLastGroupBoxPos:(long long)arg1;
- (long long)groupBoxThreshold;
- (void)setGroupBoxThreshold:(long long)arg1;
- (void)setGuidanceWindowController:(id)arg1;
- (id)guidanceWindowController;
- (void)setContactInitLogic:(id)arg1;
- (id)contactInitLogic;
- (void)onContactInitSuccess;
- (void)onContactInitProcessUpdate:(unsigned int)arg1;
- (void)onContactInitFail;
- (BOOL)deleteGroupBoxSessionIfNeed;
- (void)updateGroupBoxSessionRedDotStatusIfNeeded;
- (void)updateGroupBoxSessionRedDotStatus:(BOOL)arg1;
- (void)checkGenerateGroupBoxDigest;
- (void)generateGroupBoxDigestWithMessageData:(id)arg1 isShowUnReadAsRedDot:(BOOL)arg2;
- (void)generateGroupBoxDigestWithMessageData:(id)arg1;
- (void)generateGroupBoxDigest:(id)arg1 isShowUnReadAsRedDot:(BOOL)arg2;
- (void)generateGroupBoxDigestByLatestGroupBoxMsg;
- (void)markUpdateSessionsContactFinished;
- (void)clearUpdateSessionsContactFinishedFlag;
- (void)syncPersistentCorrectionTime:(id)arg1 pctime:(double)arg2;
- (double)getSessionInfoMaxTime:(id)arg1;
- (id)checkTimeStampOrder:(long long)arg1;
- (id)calcGroupBoxParams:(long long)arg1;
- (void)adjustGroupBoxSessionPos;
- (void)updateSessionsContactIfNeeded;
- (void)showGroupBoxGuidanceIfNeededWithContact:(id)arg1;
- (id)onChatSyncNeedAddSession:(id)arg1;
- (BOOL)isNeedCallNewMsgArrival:(id)arg1;
- (BOOL)isVoiceMessagePlayed:(id)arg1;
- (void)mergeSessionTasksIfNeeded:(id)arg1;
- (BOOL)p_handleSessionReorderWhenSessionList:(id)arg1;
- (id)p_handleSessionReorderWhenDraftChange:(id)arg1;
- (id)p_handleSessionReorderWhenModifyContact:(id)arg1 orderChanged:(char *)arg2 redDotChanged:(char *)arg3;
- (id)p_handleSessionReorderTaskWhenModMsg:(id)arg1 lastMsgChanged:(char *)arg2;
- (id)p_handleSessionReorderWhenUpdateSession:(id)arg1;
- (id)p_handleSessionReorderWhenMarkRead:(id)arg1;
- (id)p_handleSessionReorderWhenUnreadChange:(id)arg1;
- (BOOL)isSessionMsgDataNeeded:(id)arg1;
- (BOOL)p_handleSessionReorderTaskWhenModifySession:(id)arg1;
- (BOOL)p_handleSessionReorderTaskWhenEnterSession:(id)arg1 shouldClearUnread:(BOOL)arg2;
- (void)doSyncSessionList;
- (void)doSyncExecuteTask:(id)arg1;
- (void)doSyncWhenMigrateEnd:(id)arg1;
- (void)executeTask;
- (void)addExecuteQueue:(id)arg1;
- (void)stopTimer;
- (void)clearTaskArrayAndStopTimer;
- (void)startWithInterval:(double)arg1;
@property(retain, nonatomic) NSArray *oldSortedSessionArray; // @dynamic oldSortedSessionArray;
@property(retain, nonatomic) MMTimer *myTimer; // @dynamic myTimer;
@property(retain, nonatomic) NSMutableArray *syncTaskArray; // @dynamic syncTaskArray;
@property(retain, nonatomic) NSMutableArray *taskArray; // @dynamic taskArray;
- (void)buildUserGroupRelationIfNeed:(id)arg1 allGroupNameSet:(id)arg2;
- (void)storageDeleteBrandSessionInfo:(id)arg1;
- (void)storageSaveBrandSessionInfos:(id)arg1;
- (void)storageDeleteSessionInfo:(id)arg1;
- (void)storageSaveSessionInfos:(id)arg1;
- (void)storageUninit;
- (void)storageInit;
- (void)notifyUnreadCount;
- (void)notifyIfUnreadCountChange;
- (void)countUnreadCount;
- (id)getSessionContact:(id)arg1;
- (void)removeSessionOfUser:(id)arg1 isDelMsg:(BOOL)arg2;
- (void)clearSessionChatLog:(id)arg1;
- (BOOL)isHideSession:(id)arg1;
- (BOOL)isHideSession:(id)arg1 lastMsgCreateTime:(unsigned int)arg2;
- (void)hideSessionOfUser:(id)arg1 clearToTime:(unsigned int)arg2;
- (void)hideSessionOfUser:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (BOOL)isSessionHandled:(id)arg1 scene:(unsigned long long)arg2;
- (id)filterValidSyncedSession:(id)arg1;
- (BOOL)isValidSyncSession:(id)arg1;
- (id)genSessionInfo:(id)arg1 withEnterTime:(unsigned int)arg2;
- (id)genSessionInfo:(id)arg1 withAddMsg:(id)arg2;
- (id)genSessionInfoIgnoreMsgByContact:(id)arg1 hideSession:(char *)arg2;
- (id)genSessionInfoByContact:(id)arg1;
- (void)loadExtendedMsgData:(id)arg1;
- (void)loadBrandSessionData;
- (void)loadSessionData;
- (void)updateGroupBoxSessionthreshold;
- (void)waitUntilLoadData:(CDUnknownBlockType)arg1;
- (void)asyncLoadData;
- (void)syncLoadData;
- (void)loadDataWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

