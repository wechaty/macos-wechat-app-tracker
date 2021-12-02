//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, WCTDatabase;
@protocol OS_dispatch_queue;

@interface MessageDB : NSObject
{
    WCTDatabase *m_db;
    NSString *m_nsDBIdentifier;
    unsigned int m_dbTag;
    NSRecursiveLock *m_oLock;
    NSString *m_nsDBFilePath;
    NSRecursiveLock *m_oUnreadCountLock;
    NSMutableDictionary *m_dictUnreadcount;
    NSRecursiveLock *m_oMsgTableDicLock;
    NSMutableDictionary *m_dictMsgTable;
    NSMutableDictionary *m_dictMsgDeletionTable;
    NSMutableSet *m_setHistoryTable;
    NSObject<OS_dispatch_queue> *m_queue;
    NSRecursiveLock *_tableLocksMapLock;
    NSMutableDictionary *_tableLocks;
}

+ (id)msgTableName:(id)arg1;
+ (void)deleteDBFile;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tableLocks; // @synthesize tableLocks=_tableLocks;
@property(retain, nonatomic) NSRecursiveLock *tableLocksMapLock; // @synthesize tableLocksMapLock=_tableLocksMapLock;
- (id)getMessageDeletionFromDB:(id)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const list_02de7622 *)arg3;
- (BOOL)deleteAllMsgDeletion:(id)arg1;
- (BOOL)addNewMsgDeletionsToDB:(id)arg1 chatName:(id)arg2;
- (unsigned int)addNewMsgDeletionToDB:(id)arg1 chatName:(id)arg2;
- (BOOL)createMsgDeletionTableWithTableName:(id)arg1;
- (BOOL)createMsgDeletionTable:(id)arg1;
- (id)getMsgDeletionTableName:(id)arg1;
- (id)getUnReadInChat:(id)arg1 Limit:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 ToCreateTime:(unsigned int)arg4;
- (BOOL)clearUnRead:(unsigned int)arg1 ToCreateTime:(unsigned int)arg2 chatName:(id)arg3;
- (id)getUnReadInChatForSync:(id)arg1 ToCreateTime:(unsigned int)arg2;
- (BOOL)clearUnReadForSync:(unsigned int)arg1 chatName:(id)arg2;
- (unsigned int)getUnReadCount:(id)arg1;
- (id)getLastReadMsg:(id)arg1;
- (id)getFirstUnreadMsg:(id)arg1;
- (BOOL)deleteAllRowsInChat:(id)arg1;
- (BOOL)deleteRowsInChatWithSvrIds:(id)arg1 chatName:(id)arg2;
- (BOOL)deleteRowsInChatWithLocalIds:(id)arg1 chatName:(id)arg2;
- (BOOL)deleteRowInChatWithLocalId:(unsigned int)arg1 svrId:(unsigned long long)arg2 chatName:(id)arg3;
- (BOOL)updateMsgInDB:(id)arg1 chatName:(id)arg2 type:(unsigned long long)arg3;
- (BOOL)modifyMsgInDB:(id)arg1 chatName:(id)arg2;
- (BOOL)modifyMsgFieldInDB:(id)arg1 chatName:(id)arg2 bitSet:(unsigned int)arg3;
- (void)handleMsgListFromDB:(id)arg1 chatName:(id)arg2 shouldCheck:(BOOL)arg3 shouldCheckRefer:(BOOL)arg4;
- (void)handleMsgListFromDB:(id)arg1 chatName:(id)arg2 shouldCheck:(BOOL)arg3;
- (void)handleMsgListFromDB:(id)arg1 chatName:(id)arg2;
- (id)getMessageListFromDB:(id)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const list_02de7622 *)arg3 limit:(const struct WCTExpr *)arg4;
- (id)getMessageDataFromDB:(id)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const list_02de7622 *)arg3;
- (long long)getMessageCountFromDB:(id)arg1 where:(const struct WCTExpr *)arg2;
- (id)getLastAppMsg:(id)arg1 shouldCheck:(BOOL)arg2;
- (id)getLastMsg:(id)arg1 shouldCheck:(BOOL)arg2;
- (unsigned int)getLastMsgLocalId:(id)arg1;
- (unsigned int)getLastMsgCreateTime:(id)arg1;
- (id)hasSvrIdList:(id)arg1 chatName:(id)arg2;
- (BOOL)hasSvrId:(unsigned long long)arg1 chatName:(id)arg2;
- (BOOL)hasMsgWithChat:(id)arg1;
- (BOOL)addMsgDicToDB:(id)arg1;
- (BOOL)addMsgListToDB:(id)arg1 chatName:(id)arg2;
- (BOOL)insertOrUpdateRoomHistoryMsg:(id)arg1 historyId:(unsigned long long)arg2 svrId:(long long)arg3;
- (id)getRoomHistoryByChatName:(id)arg1 historyId:(unsigned long long)arg2;
- (unsigned int)innerAddNewMsgToDB:(id)arg1 chatName:(id)arg2 isAutoIncrement:(BOOL)arg3;
- (unsigned int)addNewMsgToDB:(id)arg1 chatName:(id)arg2 shouldAutoIncreaseLocalID:(BOOL)arg3;
- (unsigned int)addNewMsgToDB:(id)arg1 chatName:(id)arg2;
- (unsigned int)convertToLocalCreateTime:(id)arg1 createTime:(unsigned int)arg2;
- (id)getRoomHistoryMsgTable;
- (BOOL)createRoomHistoryMsgTable;
- (BOOL)createMsgTable:(id)arg1;
- (void)removeTableLock:(id)arg1;
- (id)getTableLock:(id)arg1;
- (id)getMsgTableName:(id)arg1;
- (void)reportDB;
- (void)backupDB;
- (void)close;
- (void)closeDBBeforeInit;
- (BOOL)RollbackTransaction;
- (BOOL)CommitTransaction;
- (BOOL)BeginDefaultTransaction;
- (BOOL)BeginTransaction;
- (id)currentDBName;
- (id)currentDBQueue;
- (id)currentDB;
- (void)dealloc;
- (BOOL)setupDB;
- (id)initWithIdentifier:(id)arg1;

@end

