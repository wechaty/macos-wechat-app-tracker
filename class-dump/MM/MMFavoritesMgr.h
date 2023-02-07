//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt-Protocol.h"
#import "FavoritesBatchDelMgrDelegate-Protocol.h"
#import "FavoritesBatchGetMgrDelegate-Protocol.h"
#import "FavoritesSyncManagerDelegate-Protocol.h"
#import "FavoritesUploadMgrDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "MMNetExt-Protocol.h"
#import "MMService-Protocol.h"

@class FavRecentDataMgr, FavoritesBatchDelMgr, FavoritesBatchGetMgr, FavoritesSetting, FavoritesSyncManager, FavoritesTagMgr, FavoritesUploadMgr, NSMutableSet, NSString, WCFavoritesDB;

@interface MMFavoritesMgr : MMService <FavoritesBatchGetMgrDelegate, FavoritesSyncManagerDelegate, FavoritesBatchDelMgrDelegate, AccountServiceExt, MMNetExt, FavoritesUploadMgrDelegate, IContactMgrExt, MMService>
{
    BOOL m_invalidWalFlag;
    BOOL _isSyncingTag;
    WCFavoritesDB *_favItemDB;
    FavoritesSyncManager *_syncMgr;
    FavoritesUploadMgr *_uploadMgr;
    FavoritesBatchGetMgr *_batchGetMgr;
    FavoritesTagMgr *_tagMgr;
    FavoritesBatchDelMgr *_batchDelMgr;
    FavRecentDataMgr *_recentMgr;
    NSMutableSet *_modingItems;
    FavoritesSetting *_setting;
    NSMutableSet *_waitGetContactsFavItems;
}

+ (void)clearDataFolder;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *waitGetContactsFavItems; // @synthesize waitGetContactsFavItems=_waitGetContactsFavItems;
@property(nonatomic) BOOL isSyncingTag; // @synthesize isSyncingTag=_isSyncingTag;
@property(retain, nonatomic) FavoritesSetting *setting; // @synthesize setting=_setting;
@property(retain, nonatomic) NSMutableSet *modingItems; // @synthesize modingItems=_modingItems;
@property(retain, nonatomic) FavRecentDataMgr *recentMgr; // @synthesize recentMgr=_recentMgr;
@property(retain, nonatomic) FavoritesBatchDelMgr *batchDelMgr; // @synthesize batchDelMgr=_batchDelMgr;
@property(retain, nonatomic) FavoritesTagMgr *tagMgr; // @synthesize tagMgr=_tagMgr;
@property(retain, nonatomic) FavoritesBatchGetMgr *batchGetMgr; // @synthesize batchGetMgr=_batchGetMgr;
@property(retain, nonatomic) FavoritesUploadMgr *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(retain, nonatomic) FavoritesSyncManager *syncMgr; // @synthesize syncMgr=_syncMgr;
@property(readonly, nonatomic) WCFavoritesDB *favItemDB; // @synthesize favItemDB=_favItemDB;
- (id)findWaitGetContactsFavItem:(id)arg1;
- (void)onModifyStrangerContacts:(id)arg1;
- (void)checkInvalidNote:(id)arg1 batchgetList:(id)arg2;
- (void)getFirstPageFavoritesList:(int)arg1;
- (id)xmlForFavoriteItem:(id)arg1;
- (void)onUserLogout;
- (void)notifySyncNoteConfilct:(id)arg1;
- (void)updateFavoritesSetting;
- (void)saveFavSetting;
- (void)loadFavSetting;
- (void)onBatchDelItemSuccess;
- (void)onServerNotify:(int)arg1 cmdID:(int)arg2 notifyData:(id)arg3;
- (void)removeFileItemWithDataList:(id)arg1;
- (void)removeSavedFileForFavorteItem:(id)arg1;
- (BOOL)deleteFavoriteItemDBByFavId:(unsigned int)arg1 callExtension:(BOOL)arg2;
- (BOOL)batchDelFavoritesItem:(id)arg1;
- (BOOL)delFavoritesItems:(id)arg1;
- (BOOL)delFavoritesItem:(id)arg1;
- (void)handleModifyFavItemDescriptionOk:(id)arg1;
- (void)handleModifyFavItemTagOk:(id)arg1;
- (void)batchGetFavItem:(int)arg1;
- (void)HandleModifyFavItemResp:(id)arg1 cgiWrap:(id)arg2;
- (BOOL)updateItemInFavItemDB:(id)arg1;
- (BOOL)updateItemXml:(id)arg1;
- (BOOL)updateSearchTableWithFavoriteItem:(id)arg1;
- (void)reIndexAllItemsIntoSearchTable;
- (void)updateItemUpdateTime:(id)arg1;
- (id)updateTagWithFavoriteItem:(id)arg1;
- (void)searchFavSourceWithKeyword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)containFavItemInList:(id)arg1 item:(id)arg2;
- (id)getFavItemsWithSenderUserNames:(id)arg1 inLocalIds:(id)arg2;
- (BOOL)matchSearchFiledWithTask:(id)arg1 searchFiled:(id)arg2 matchKeyWordResults:(id)arg3;
- (BOOL)matchTagList:(id)arg1 keyWord:(id)arg2;
- (id)filterSearchResult:(id)arg1 keyWord:(id)arg2;
- (void)searchWithKeyword:(id)arg1 types:(id)arg2 senderUserName:(id)arg3 tag:(id)arg4 progress:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)searchWithKeyword:(id)arg1 types:(id)arg2 senderUserName:(id)arg3 tag:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)updateOrAddItemTagWithFavLocalId:(unsigned int)arg1 withTagSvrIds:(id)arg2 withTagNames:(id)arg3;
- (void)handleDeleteTag:(BOOL)arg1 tag:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteTag:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleUpdateTagName:(BOOL)arg1 oldTag:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)checkUpdateTagNameParameters:(id)arg1 newTagName:(id)arg2;
- (void)updateTag:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)updateFavItemTagDB:(id)arg1 tags:(id)arg2;
- (void)handleUpdateItemTags:(BOOL)arg1 items:(id)arg2 tags:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateItemTagsForOldCGI:(id)arg1 tags:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateItems:(id)arg1 tags:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addItems:(id)arg1 toTag:(id)arg2;
- (void)addItem:(id)arg1 toTag:(id)arg2;
- (unsigned int)itemTagLocalIdWithTagString:(id)arg1;
- (id)getFavItemTags:(unsigned int)arg1;
- (id)getTagNameWithTagLocalId:(unsigned int)arg1;
- (unsigned long long)countOfItemsWithTagLocalId:(unsigned int)arg1;
- (unsigned long long)countOfItemsWithTagString:(id)arg1;
- (id)itemLocalIDsWithTagString:(id)arg1;
- (id)itemsWithTagsStrings:(id)arg1;
- (id)itemsWithTagString:(id)arg1;
- (id)topTagsWithLimit:(unsigned int)arg1;
- (unsigned long long)countOfAllTags;
- (id)allTagNames;
- (BOOL)processTagsFromServer:(id)arg1;
- (id)allFavEssentialInfosInDB;
- (id)getWCContactData:(id)arg1;
- (id)allItemSenderContactsContainerGroup;
- (id)allGroupChatSenderContacts;
- (id)allItemSenderContacts;
- (id)allItemSenderUserNames;
- (void)deleteRecentFavItem:(unsigned int)arg1;
- (void)addRecentFavItems:(id)arg1;
- (void)addRecentFavItem:(unsigned int)arg1;
- (id)getRecentFavItems;
- (unsigned long long)countOfRecentFavItems;
- (BOOL)hasBeforeAsyncUploadingItem;
- (id)favoritesSetting;
- (id)getFavItemWithFavID:(unsigned int)arg1 checkUpdateIfNeed:(BOOL)arg2;
- (id)getFavItemWithLocalID:(unsigned int)arg1 checkUpdateIfNeed:(BOOL)arg2;
- (unsigned long long)totalCountOfItems;
- (BOOL)getFavItemLocalIDWithFavID:(unsigned int)arg1 retLocalID:(id)arg2;
- (unsigned long long)countOfItemsWithTypes:(id)arg1;
- (unsigned long long)countOfItemsWithType:(int)arg1;
- (id)getAllFavItems;
- (id)getAllFavItemsEssentialFieldsWithTypes:(id)arg1;
- (id)getAllFavItemsEssentialFieldsWithType:(int)arg1;
- (id)getFavItemWithSourceID:(id)arg1;
- (unsigned long long)allIndexOfFavItem:(id)arg1;
- (void)checkBatchDelQueue;
- (void)checkUploadingQueueOnReachabilityChanged;
- (void)checkUploadingQueue;
- (void)onUploadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2;
- (void)onUploadFavoritesItemDidCopiedDataFiles:(id)arg1;
- (BOOL)addLocalNoteFavoriteItem:(id)arg1;
- (BOOL)updateFavoritesItem:(id)arg1 delayUpload:(BOOL)arg2;
- (BOOL)updateFavoriteItem:(id)arg1;
- (BOOL)addFavoritesItem:(id)arg1 delayUpload:(BOOL)arg2;
- (BOOL)addFavoriteItem:(id)arg1;
- (void)onRegardUpdateTimeAsAddAddItem:(id)arg1;
- (void)onBatchGetItemList:(id)arg1 updateTagFavItems:(id)arg2 ErrCode:(int)arg3;
- (void)addFavIDsToBatchGetQueue:(id)arg1;
- (void)onNeedUpdateFavInfo;
- (void)syncMgrDidFinishSyncWithSuccess:(BOOL)arg1 selector:(int)arg2 addedItems:(id)arg3 deletedItems:(id)arg4 updatedItemFavIds:(id)arg5 totalCountChanged:(BOOL)arg6;
- (void)SyncByNotify:(unsigned int)arg1;
- (void)sync;
- (BOOL)checkCanRetrySync:(id)arg1;
- (void)checkShouldShowFavErrorHint;
- (void)onServiceClearData;
- (void)loadOldDataToNewToNewTables;
- (void)onServiceInit;
- (void)dealloc;
- (void)setupMgr;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

