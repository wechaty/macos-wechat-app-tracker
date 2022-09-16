//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt-Protocol.h"
#import "MMService-Protocol.h"

@class FTSFileMessageDB, NSMutableArray, NSMutableDictionary, NSObject, NSOperationQueue, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface FTSFileMessageService : MMService <MMService, IMessageExt>
{
    unsigned int _initialFetchCount;
    unsigned int _maxOperationCount;
    unsigned int _maxFetchCount;
    FTSFileMessageDB *_m_ftsdb;
    NSRecursiveLock *_m_oLock;
    NSObject<OS_dispatch_queue> *_m_ftsTaskInitialQueue;
    long long _initialCount;
    long long _initialAppCount;
    double _initialBegin;
    NSMutableArray *_initialTaskList;
    NSMutableArray *_initialSessionList;
    NSOperationQueue *_m_ftsIndexMaintainQueue;
    NSMutableDictionary *_m_dictForQueueTask;
    NSObject<OS_dispatch_queue> *_m_ftsTaskCheckQueue;
}

+ (BOOL)isStopFTSFileService;
+ (id)initialIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_ftsTaskCheckQueue; // @synthesize m_ftsTaskCheckQueue=_m_ftsTaskCheckQueue;
@property(retain, nonatomic) NSMutableDictionary *m_dictForQueueTask; // @synthesize m_dictForQueueTask=_m_dictForQueueTask;
@property(retain, nonatomic) NSOperationQueue *m_ftsIndexMaintainQueue; // @synthesize m_ftsIndexMaintainQueue=_m_ftsIndexMaintainQueue;
@property(nonatomic) unsigned int maxFetchCount; // @synthesize maxFetchCount=_maxFetchCount;
@property(nonatomic) unsigned int maxOperationCount; // @synthesize maxOperationCount=_maxOperationCount;
@property(nonatomic) unsigned int initialFetchCount; // @synthesize initialFetchCount=_initialFetchCount;
@property(retain, nonatomic) NSMutableArray *initialSessionList; // @synthesize initialSessionList=_initialSessionList;
@property(retain, nonatomic) NSMutableArray *initialTaskList; // @synthesize initialTaskList=_initialTaskList;
@property(nonatomic) double initialBegin; // @synthesize initialBegin=_initialBegin;
@property(nonatomic) long long initialAppCount; // @synthesize initialAppCount=_initialAppCount;
@property(nonatomic) long long initialCount; // @synthesize initialCount=_initialCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_ftsTaskInitialQueue; // @synthesize m_ftsTaskInitialQueue=_m_ftsTaskInitialQueue;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain, nonatomic) FTSFileMessageDB *m_ftsdb; // @synthesize m_ftsdb=_m_ftsdb;
- (id)getTypeFileListWithLastMsg:(id)arg1 groupType:(int)arg2 sortType:(unsigned long long)arg3 limitCnt:(unsigned int)arg4 hasMore:(char *)arg5;
- (id)getChatFileListWithLastMsg:(id)arg1 chatName:(id)arg2 sortType:(unsigned long long)arg3 limitCnt:(unsigned int)arg4 hasMore:(char *)arg5;
- (id)getSenderFileListWithLastMsg:(id)arg1 sender:(id)arg2 sortType:(unsigned long long)arg3 limitCnt:(unsigned int)arg4 hasMore:(char *)arg5;
- (id)getRecentFileListWithLastMsg:(id)arg1 limitCnt:(unsigned int)arg2 hasMore:(char *)arg3;
- (id)getAllFileListWithLastMsg:(id)arg1 sortType:(unsigned long long)arg2 limitCnt:(unsigned int)arg3 hasMore:(char *)arg4;
- (id)searchFTSFileMessageWithKeyword:(id)arg1;
- (id)getFTSFileMessageForChats:(id)arg1;
- (id)getFileMessageForChat:(id)arg1;
- (id)getFTSFileMessageForSenders:(id)arg1;
- (id)getFileMessageForSender:(id)arg1;
- (id)getAllFileMessagesForType;
- (id)getAllFileMessageType;
- (id)getAllFileMessageChats;
- (id)getAllFileMessageSenders;
- (id)getAllRecentFileItemOnCount;
- (id)getAllRecentFileItemOnDate;
- (id)getAllFileMessageUnorderedSenders;
- (id)getAllFileMessageUnorderedChats;
- (id)getAllFileMessage;
- (id)getFtsFileDB;
- (void)deleteOutdateRecentList;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (id)handleLoadedAppMsg:(id)arg1 chatName:(id)arg2;
- (BOOL)shouldStopFTSService;
- (int)ABTestMaxFetchCount;
- (int)ABTestMaxOperationCount;
- (int)ABTestInitialFetchCount;
- (int)ABTestInitialBatchCount;
- (int)ABTestInitialBatch;
- (int)ABTestInitialTotalCount;
- (void)onDelAllMsg:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)onAddMsg:(id)arg1 msgData:(id)arg2;
- (void)onOperateMsgList:(id)arg1 opTime:(unsigned int)arg2;
- (void)doUpdateIndex:(id)arg1;
- (void)doClearIndex:(id)arg1;
- (void)doDeleteIndex:(id)arg1;
- (void)doCreateIndex:(id)arg1;
- (void)doCreateImmediateIndex:(id)arg1;
- (void)doCreateInitialIndex:(id)arg1;
- (void)clearIndexForChat:(id)arg1;
- (void)deleteIndexForChat:(id)arg1 msgData:(id)arg2;
- (void)updateIndexForMsgList:(id)arg1 opTime:(unsigned int)arg2;
- (void)createIndexForChat:(id)arg1 msgData:(id)arg2;
- (void)createIndexImmediately;
- (void)checkSessions;
- (void)createIndexInitially;
- (void)suspendQueue;
- (void)resumeQueue;
- (void)onServiceTerminate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

