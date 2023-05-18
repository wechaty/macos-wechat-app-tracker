//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSBaseDB.h"

@class MMThreadSafeDictionary, NSRecursiveLock, WCTTable;

@interface FTSFileMessageDB : FTSBaseDB
{
    WCTTable *_m_tableFileContext;
    WCTTable *_m_tableRecentFile;
    WCTTable *_m_tableQueryFile;
    MMThreadSafeDictionary *_m_dictFTSTables;
    NSRecursiveLock *_m_oLock;
}

+ (void)deleteFTSFileDB;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain, nonatomic) MMThreadSafeDictionary *m_dictFTSTables; // @synthesize m_dictFTSTables=_m_dictFTSTables;
@property(retain, nonatomic) WCTTable *m_tableQueryFile; // @synthesize m_tableQueryFile=_m_tableQueryFile;
@property(retain, nonatomic) WCTTable *m_tableRecentFile; // @synthesize m_tableRecentFile=_m_tableRecentFile;
@property(retain, nonatomic) WCTTable *m_tableFileContext; // @synthesize m_tableFileContext=_m_tableFileContext;
- (id)getTypeFileListWithLastMsg:(id)arg1 groupTypeList:(id)arg2 sortType:(unsigned long long)arg3 limitCnt:(unsigned int)arg4 useNotIn:(BOOL)arg5;
- (id)getChatFileListWithLastMsg:(id)arg1 chatName:(id)arg2 sortType:(unsigned long long)arg3 limitCnt:(unsigned int)arg4;
- (id)getSenderFileListWithLastMsg:(id)arg1 sender:(id)arg2 sortType:(unsigned long long)arg3 limitCnt:(unsigned int)arg4;
- (id)getRecentFileListWithLastMsg:(id)arg1 limitCnt:(unsigned int)arg2;
- (id)getAllFileListWithLastMsg:(id)arg1 sortType:(unsigned long long)arg2 limitCnt:(unsigned int)arg3;
- (id)queryWithKeyword:(id)arg1;
- (id)queryWithKeyword:(id)arg1 inChatName:(id)arg2;
- (id)getNormalizeKeyword:(id)arg1;
- (const void *)orderOfAscUpdateTimeAndCreateTimeAndMsgLocalId;
- (const void *)orderOfDescUpdateTimeAndCreateTimeAndMsgLocalId;
- (const void *)orderOfAscFileSizeAndCreateTimeAndMsgLocalId;
- (const void *)orderOfDescFileSizeAndCreateTimeAndMsgLocalId;
- (const void *)orderOfAscCreateTimeAndMsgLocalId;
- (const void *)orderOfDescCreateTimeAndMsgLocalId;
- (unsigned int)tableIndexOfChatName:(id)arg1;
- (id)msgTableWithChatName:(id)arg1;
- (id)msgTableWithIndex:(unsigned int)arg1;
- (BOOL)deleteRecentFileMsgListWithMaxOpTime:(unsigned int)arg1;
- (BOOL)deleteRowInChatTable:(id)arg1 arrMsgData:(id)arg2;
- (BOOL)deleteAllRowsInChatTable:(id)arg1;
- (BOOL)deleteRowsInContextTable:(id)arg1;
- (id)getFTSFileMessageForSenders:(id)arg1;
- (id)getFTSFileMessageForSender:(id)arg1;
- (id)getAllFTSFileMessageForType;
- (id)getAllFTSFileMessageType;
- (id)getAllNewestFTSFileMessageForChats;
- (id)getAllFTSFileMessageSenders;
- (id)getAllFTSFileMessageChats;
- (id)getAllNewestFTSFileMessageForSender;
- (id)getRecentFTSFileMessageOnCount;
- (id)getRecentFTSFileMessageOnDate;
- (id)getFTSFileMessageForChatNames:(id)arg1;
- (id)getFTSFileMessageForChatName:(id)arg1 startTime:(unsigned int)arg2 endTime:(unsigned int)arg3;
- (id)getFTSFileMessageForChatName:(id)arg1;
- (id)getLatestFileContextByChatName:(id)arg1;
- (unsigned long long)getLastMesLocalID:(id)arg1;
- (BOOL)updateRowsInChatTable:(id)arg1 msgList:(id)arg2 opTime:(unsigned int)arg3;
- (BOOL)updateRecentFileMsgList:(id)arg1 opTime:(unsigned int)arg2;
- (BOOL)insertRowsInChatTable:(id)arg1 arrMsgData:(id)arg2 lastLocalID:(unsigned int)arg3;
- (BOOL)insertRowsInChatTable:(id)arg1 lastLocalID:(unsigned int)arg2;
- (BOOL)insertRowsInContextTable:(id)arg1;
- (BOOL)createQueryFileTable;
- (BOOL)createRecentFileTable;
- (BOOL)createFileContextTable;
- (id)createFTSFileTable:(int)arg1;
- (BOOL)createFTSFileTables;
- (id)init;

@end

