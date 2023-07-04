//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PathUtility : NSObject
{
}

+ (BOOL)isInDiskImageFolder:(id)arg1;
+ (BOOL)setDoNotBackupForFolder:(id)arg1;
+ (BOOL)setDoNotBackupForPath:(id)arg1;
+ (id)getSysDocumentPath;
+ (id)getSysCachePath;
+ (id)getSysLibraryPath;
+ (id)GetAppDocumentsPath;
+ (id)GetSysDownloadsPath;
+ (id)HashUserNameForPath:(id)arg1;
+ (id)GetRootPathOfTrash;
+ (id)GetRandomPathOfTrash;
+ (id)GetTmpPath;
+ (id)GetDocFixRootPath;
+ (id)GetLibraryCacheFixRootPath;
+ (id)GetDocPath;
+ (id)GetLogFolder;
+ (id)GetLibraryCachePath;
+ (id)GetBrandSessionHolderCachePath;
+ (id)GetSessionFilePathWithMessage:(id)arg1;
+ (id)GetAllMsgFilePathWithMessage:(id)arg1;
+ (void)RemoveChatSyncFileWithMessage:(id)arg1;
+ (id)GetChatSyncUnzipPathWithMessage:(id)arg1;
+ (id)GetChatSyncFileFullPathWithMessage:(id)arg1;
+ (id)GetChatSyncFileBasePathWithMessage:(id)arg1;
+ (id)GetChatSyncDBPath;
+ (id)GetChatSyncBasePath;
+ (id)joinedBySourcePathFromXML:(id)arg1;
+ (id)trimmingSourcePathToXML:(id)arg1;
+ (id)GetSessionSortCacheDataFilePath;
+ (id)GetSessionDBRecoverPath;
+ (id)GetSessionDBExtPath;
+ (id)GetSessionDBPath;
+ (id)GetSessionStorageDir;
+ (void)removeEmotionsFolder;
+ (id)GetEmojiPanelConfigDir;
+ (id)GetNewEmojiConfigDir;
+ (id)emoticonPackageThumbPath:(id)arg1;
+ (id)emoticonThumbPath:(id)arg1;
+ (id)emoticonPathNonPersistence:(id)arg1;
+ (id)emoticonPathPersistence:(id)arg1;
+ (id)emoticonPath:(id)arg1;
+ (id)downloadPathForEmoticonPackage:(id)arg1;
+ (id)emoticonsDBPath;
+ (id)emoticonsBasePath;
+ (id)GetAllowSaveEmoticonDataPath;
+ (id)GetCustomEmoticonDataListPath;
+ (id)GetFavEmoticonDataListPath;
+ (id)GetPathOfEmoticonDownloadQueueData;
+ (id)packageThumbsBasePath;
+ (id)BasePathOfEmoticonNonPersistence;
+ (id)BasePathOfEmoticonPersistence;
+ (id)BasePathOfEmoticonFile;
+ (id)BasePathOfDownloadTemp;
+ (id)GetPathOfTempEmoticon:(id)arg1;
+ (void)CreateEmoticonBasePaths;
+ (id)emoticonPathNonPersistenceCompatible:(id)arg1;
+ (id)emoticonPathPersistenceCompatible:(id)arg1;
+ (id)getContactInitFailedUserNamePath;
+ (id)getContactInitDir;
+ (id)getWCContactDBRecoverPathNew;
+ (id)getWCContactDBPathNew;
+ (id)getWCContactDBPath;
+ (id)getWCContactRootPath;
+ (id)getContactAutoUpdateDataOldPath;
+ (id)getContactAutoCheckDataPath;
+ (id)getContactAutoUpdateDataPath;
+ (id)getReadWriteTempFilePath:(id)arg1;
+ (id)getHardLinkTempFilePath:(id)arg1;
+ (id)getHardLinkTempFilePathWithDefault;
+ (id)getHardLinkDBPath;
+ (id)getHardLinkRootDir;
+ (id)GetWebTemplateDBPath;
+ (id)GetWebTemplateDirPath;
+ (id)videoTmpPathWithMessage:(id)arg1 rawVideo:(BOOL)arg2;
+ (id)imageTmpPathWithMessage:(id)arg1 midImage:(BOOL)arg2;
+ (id)imagePathWithMessage:(id)arg1 midImage:(BOOL)arg2;
+ (id)GetCdnRootPath;
+ (id)GetAcountBetaDBPath;
+ (id)GetAccountSettingsHistoryPath;
+ (id)GetAccountKeyValueDBPath;
+ (id)GetAccountSettingsHistoryPathOfUser:(id)arg1;
+ (id)GetAccountKeyValueDBPathOfUser:(id)arg1;
+ (id)GetAccountFriendRequestDataPath;
+ (id)GetAccountSnsBackgroundImagePath;
+ (id)GetAccountUserInfoNewPath;
+ (id)GetAccountUserInfoPath;
+ (id)GetAccountSettingDbPathOfUser:(id)arg1;
+ (id)GetAccountSettingDbPath;
+ (id)GetAccountSettingExtPath;
+ (id)GetAccountSettingPath;
+ (id)GetAccountStoragePathOfUser:(id)arg1;
+ (id)GetAccountStoragePath;
+ (id)GetCurUsrMd5;
+ (id)GetCurUserCachePath;
+ (id)GetCurUserDocumentPath;
+ (id)GetUserCachePathWithUserName:(id)arg1;
+ (id)GetUserDocumentPathWithUserName:(id)arg1;
+ (id)convertToRealFilePath:(id)arg1;
+ (void)load;
+ (id)getPredownloadRequestDataPath;
+ (id)getPredownloadQuotaPath:(unsigned long long)arg1;
+ (id)getPredownloadDBPath:(unsigned long long)arg1;
+ (id)getPredownloadDirWithBizId:(unsigned long long)arg1;
+ (id)getPredownloadRootDir;
+ (id)getAbtestCachePath;
+ (id)getAbtestRootPath;
+ (id)getKvConfigDBPath;
+ (id)getKvConfigRootPath;
+ (BOOL)saveSyncTime;
+ (BOOL)saveNewSyncTime;
+ (id)getNewSyncTimePath;
+ (id)getSyncTimePath;
+ (id)GetOpenIMOplogDBPath;
+ (id)GetOpLogDBPath;
+ (id)GetSyncBufferPath;
+ (id)getSyncRootDir;
+ (id)getTmpUploadHistoryPath;
+ (id)getTmpAddMsgHistoryPathWithUserName:(id)arg1 historyId:(unsigned long long)arg2;
+ (id)getTmpSysMsgHistoryPathWithUserName:(id)arg1 historyId:(unsigned long long)arg2;
+ (id)getSysMsgHistoryPathWithUserName:(id)arg1 historyId:(unsigned long long)arg2;
+ (id)getMsgFileDirWithUserName:(id)arg1;
+ (id)getMsgAppOpenDataDirWithUserName:(id)arg1;
+ (id)getMsgRawVideoTmpPath:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgVideoTmpPath:(id)arg1 localId:(unsigned int)arg2;
+ (id)_genFromSelfVideoUniqFlag:(id)arg1;
+ (id)getSendMsgVideoFileName:(id)arg1;
+ (id)getMsgVideoPathWithMessage:(id)arg1 isRawFlag:(BOOL)arg2;
+ (id)getMsgVideoPathWithMessage:(id)arg1;
+ (id)getMsgVideoPathWithUserName:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgVideoDirWithUserName:(id)arg1;
+ (id)getMsgSilkAudioPath:(id)arg1;
+ (id)getMsgAMRAudioPath:(id)arg1;
+ (id)getUniqueMsgAudioPath:(id)arg1;
+ (id)getMsgAudioPath:(id)arg1;
+ (id)getMsgAudioDir:(id)arg1;
+ (BOOL)isImageDataFmtFromPhone:(id)arg1;
+ (id)getMsgTmpHDImgPath:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgTmpImgThumbPathWithMessage:(id)arg1;
+ (id)getMsgTmpImgPath:(id)arg1 localId:(unsigned int)arg2;
+ (id)getMsgImgPreviewThumbPathWithMessage:(id)arg1;
+ (id)getMsgCompressImage:(id)arg1;
+ (id)getMsgImgPreviewImageForLargeImage:(id)arg1;
+ (id)getMsgEditImgPathWithMessage:(id)arg1;
+ (id)getMsgHDImgPathWithMessage:(id)arg1;
+ (id)getMsgImgThumbPath:(id)arg1 imgURLString:(id)arg2;
+ (id)getMsgImgThumbPathWithMessage:(id)arg1;
+ (id)getDeprecatedMsgImgPathWithMessage:(id)arg1;
+ (id)getMsgBubblePathWithMessage:(id)arg1;
+ (id)getMsgImgPathWithMessage:(id)arg1;
+ (id)getMsgImgBusinessDir:(id)arg1;
+ (id)getMsgImgBusinessRootDir;
+ (id)getMsgImgDir:(id)arg1;
+ (id)getMsgImagePathInType:(int)arg1 withMessage:(id)arg2;
+ (id)getUnSupportMigrateMsgMediaDirWithSessionName:(id)arg1;
+ (id)getMigrateAnalyseDBPath;
+ (id)getMediaDataDBPath;
+ (id)getMsgTempDirOfUser:(id)arg1;
+ (id)getGroupTopMsgDBPath;
+ (id)getMsgTempDir;
+ (id)getRevokeMsgDBPath;
+ (id)getSpamMsgDBPath;
+ (id)getRevokeMsgDBDir;
+ (id)getAppMsgDBPath;
+ (id)getFTSFileMsgDBPath;
+ (id)getFTSFileMsgDBDir;
+ (id)getFTSMsgDBPath;
+ (id)getBrandMsgDBRecoverPath;
+ (id)getBrandMsgDBPath;
+ (id)getMsgDBRecoverPath:(id)arg1;
+ (id)getMsgDBPath:(id)arg1;
+ (id)getUnSupportMigrateMsgDBPath;
+ (id)getMessageRootDir;
+ (id)getBackupLogPath:(id)arg1;
+ (id)getBackupIndexDataBasePath:(id)arg1;
+ (id)getBackupRecoverPath:(id)arg1;
+ (id)getBackupPath:(id)arg1;
+ (id)getCurUsrBackupDir;
+ (id)getCurUsrDeviceIdList;
+ (id)cachedStatusDataPath;
+ (id)cachedStatusDataFolder;
+ (id)GetFileStateSyncDBPath;
+ (id)GetAvatarPathBeforeAuthOK;
+ (id)GetAvatarPath;
+ (id)groupNoticeTpDownloadedThumbnailPathWithFavItemData:(id)arg1;
+ (id)groupNoticeTpDownloadedThumbnailFolderWithChatRoomName:(id)arg1;
+ (id)groupNoticeCDNDownloadedThumbnailPathWithFavItemData:(id)arg1;
+ (id)groupNoticeCDNDownloadedThumbnailFolderWithChatRoomName:(id)arg1;
+ (id)getGroupNoticeDataPathWithGroupNoticeData:(id)arg1;
+ (id)getGroupNoticeDataPathWithChatName:(id)arg1 sourceId:(id)arg2;
+ (id)getGroupNoticeDataPathWithChatName:(id)arg1;
+ (id)getGroupNoticeRootPath:(id)arg1;
+ (id)getGroupExtendDataPath:(id)arg1;
+ (id)getGroupDBRecoverPath;
+ (id)getGroupDBPath;
+ (id)getGroupDataDir;
+ (id)webPageItemImageHttpDownloadFileName:(id)arg1;
+ (id)webPageItemImageHttpDownloadPath:(id)arg1;
+ (id)favoritesDisplayOptimizedThumbnailsCachePath;
+ (id)favoritesOldDataPathWithFavItemData:(id)arg1;
+ (id)favoritesDataPathWithFavItemData:(id)arg1;
+ (id)favoritesDataFolder;
+ (id)favoritesTpDownloadedThumbnailPathWithFavItemData:(id)arg1;
+ (id)favoritesTpDownloadedThumbnailFolder;
+ (id)favoritesCDNDownloadedThumbnailPathWithFavItemData:(id)arg1;
+ (id)favoritesCDNDownloadedThumbnailFolder;
+ (id)favoritesRecentItemsPath;
+ (id)favoritesTempFolder;
+ (id)favoritesUICacheFolder;
+ (id)favoritesSettingPath;
+ (id)favoritesSyncBufferPath;
+ (id)favoritesDBRecoverPath;
+ (id)favoritesDBPath;
+ (id)favoritesRootDir;
+ (id)getSNSDBPath;

@end

