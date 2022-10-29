//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString, WCTDatabase, WCTTable;

@interface MultiTalkSessionMgr : MMService <MMService>
{
    WCTDatabase *_dataBase;
    WCTTable *_contactTable;
    WCTTable *_messageTable;
    WCTTable *_sessionTable;
    WCTTable *_bannerTable;
}

+ (void)deleteMultiTalkDB;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *bannerTable; // @synthesize bannerTable=_bannerTable;
@property(retain, nonatomic) WCTTable *sessionTable; // @synthesize sessionTable=_sessionTable;
@property(retain, nonatomic) WCTTable *messageTable; // @synthesize messageTable=_messageTable;
@property(retain, nonatomic) WCTTable *contactTable; // @synthesize contactTable=_contactTable;
@property(retain, nonatomic) WCTDatabase *dataBase; // @synthesize dataBase=_dataBase;
- (id)getSubMessageContentWithSessionState:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (id)getHeaderMessageContentWithSessionState:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (id)genMsgJsonContentWithDisplayContentHeader:(id)arg1 subContent:(id)arg2 sessionItem:(id)arg3 msgLocalID:(unsigned int)arg4;
- (BOOL)addNewMultiTalkChatroomMessageWithGroupData:(id)arg1 sessionItem:(id)arg2 msgLocalID:(unsigned int)arg3 isSelfCaller:(BOOL)arg4 sessionState:(unsigned int)arg5 inviteUsername:(id)arg6 createTime:(unsigned int)arg7;
- (BOOL)isGroupDataValid:(id)arg1;
- (void)ChangeSessionUnReadCount:(id)arg1 to:(unsigned int)arg2;
- (unsigned int)getSessionLastMessageIDWithGroupData:(id)arg1;
- (BOOL)insertOrUpdateRowInBannerTable:(id)arg1;
- (BOOL)insertNewRowInBannerTable:(id)arg1;
- (BOOL)insertOrUpdateRowInSessionTable:(id)arg1;
- (BOOL)insertNewRowInSessionTable:(id)arg1;
- (BOOL)insertOrUpdateRowInMessageTable:(id)arg1;
- (BOOL)insertNewRowInMessageTable:(id)arg1;
- (BOOL)insertOrUpdateRowInContactTable:(id)arg1;
- (BOOL)insertNewRowInContactTable:(id)arg1;
- (void)fillBannerItemupdateRowsOnPropertiesForBannerObject:(void *)arg1;
- (void)fillSessionItemupdateRowsOnPropertiesForSessionObject:(void *)arg1;
- (void)fillMessageItemupdateRowsOnPropertiesForMessageObject:(void *)arg1;
- (void)fillContactItemupdateRowsOnPropertiesForContactObject:(void *)arg1;
- (id)genSessionItemWithGroupData:(id)arg1;
- (id)genMessageItemWithGroupData:(id)arg1;
- (id)genContactItemWithGroupData:(id)arg1;
- (id)getMultiTalkMsgDigestFromMessageContent:(id)arg1;
- (BOOL)insertOrUpdateSessionWithMultiTalkGroupData:(id)arg1;
- (BOOL)updateMessageWithMessageID:(unsigned int)arg1 multiTalkGroup:(id)arg2 duration:(unsigned int)arg3;
- (id)getAllMultiTalkBannerInfos;
- (BOOL)updateHasGenMessageWithMessageID:(unsigned int)arg1;
- (id)getMultiTalkBannerInfoByWxGroupId:(id)arg1;
- (BOOL)deleteMultiTalkBannerItem:(id)arg1;
- (BOOL)createNewMultiTalkBannerWithGroupData:(id)arg1;
- (BOOL)createNewMultiTalkMessageWithGroupData:(id)arg1 messageID:(unsigned int)arg2 isSelfCaller:(BOOL)arg3 sessionState:(unsigned int)arg4 inviteUsername:(id)arg5 createTime:(unsigned int)arg6;
- (BOOL)createNewMultiTalkMessageWithGroupData:(id)arg1 messageID:(unsigned int)arg2 isSelfCaller:(BOOL)arg3 sessionState:(unsigned int)arg4 createTime:(unsigned int)arg5;
- (unsigned int)createNewMultiTalkMessageDataWithGroupData:(id)arg1;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (void)createTables;
- (void)clearTables;
- (void)closeDBBeforeInit;
- (void)closeDB;
- (void)initDatabase;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

