//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUtility : NSObject
{
}

+ (id)getCursorWithImageName:(id)arg1;
+ (id)parseURLParams:(id)arg1;
+ (id)DoNewDns:(id)arg1 DnsType:(unsigned int *)arg2;
+ (id)DoDns:(id)arg1;
+ (BOOL)isHTTPUrl:(id)arg1;
+ (struct CGSize)getVideoPreferredSizeWithAssetTrack:(id)arg1;
+ (void)addSubView:(id)arg1 toViewStyleCenter:(id)arg2;
+ (BOOL)hasRetinaScreen;
+ (BOOL)isBeingDebugged;
+ (BOOL)hasChinese:(id)arg1;
+ (unsigned short)getFirstChar:(id)arg1;
+ (id)transformOneChineseToPinyin:(id)arg1;
+ (BOOL)isEnterpriseSingleUsrName:(id)arg1;
+ (BOOL)isArchivedUsrName:(id)arg1;
+ (BOOL)isEnterpriseUsrName:(id)arg1;
+ (id)IntToIPString:(unsigned int)arg1;
+ (id)SockAddrToIPV4String:(struct sockaddr_in *)arg1;
+ (unsigned int)IPStringToInt:(id)arg1;
+ (id)SafeUnarchiveFromData:(id)arg1;
+ (id)SafeUnarchive:(id)arg1 hasError:(char *)arg2;
+ (id)SafeUnarchive:(id)arg1;
+ (unsigned int)GenID;
+ (id)getCompressExtensionSet;
+ (id)DecodeWithBase64:(id)arg1;
+ (id)EncodeWithBase64:(id)arg1;
+ (id)DecodeBase64:(id)arg1;
+ (id)NsDataEncodeBase64:(id)arg1;
+ (id)EncodeBase64:(id)arg1;
+ (id)DecodeBase64Url:(id)arg1;
+ (id)EncodeBase64Url:(id)arg1;
+ (unsigned long long)getTotalDiskSpace;
+ (unsigned long long)getFreeDiskSpace;
+ (double)convertSizeToMB:(unsigned long long)arg1;
+ (id)GetTimeFormat:(id)arg1;
+ (id)GetDateFormatLongLong:(id)arg1;
+ (id)GetDateFormatMonth:(id)arg1;
+ (long long)GetCurrentSecondInDay;
+ (long long)GetCurrentMinuteInDay;
+ (long long)GetCurrentHourInDay;
+ (long long)daysBetweenFrom:(id)arg1 To:(id)arg2;
+ (id)getShortStringByTime:(unsigned int)arg1;
+ (id)getFormatTimeWithUIntTime:(unsigned int)arg1;
+ (id)GetFormattedBuildTimeStamp;
+ (id)GetBuildTimeStamp;
+ (id)GetSystemTimeZoneString;
+ (unsigned long long)getCurrentTimeInMsFrom1970;
+ (unsigned int)GetCurrentTime;
+ (unsigned long long)GetCurrentTimeInMs;
+ (unsigned int)genServerCurrentTime;
+ (void)updateDiffServerTime:(int)arg1;
+ (id)getAppNameOfPreview;
+ (BOOL)isGIFFile:(id)arg1;
+ (void)selectFile:(id)arg1 rootPath:(id)arg2;
+ (id)getAppNameCanOpenFile:(id)arg1;
+ (BOOL)isValidWeChatID:(id)arg1;
+ (BOOL)isNumber:(id)arg1;
+ (BOOL)isEnglishWord:(id)arg1;
+ (id)transformToPinyin:(id)arg1;
+ (id)filterString:(id)arg1;
+ (id)trimString:(id)arg1;
+ (id)getStringFromUrl:(id)arg1 needle:(id)arg2;
+ (id)HashData:(id)arg1;
+ (id)HashString:(id)arg1;
+ (id)filterStringForTextMessage:(id)arg1 trimWhiteSpace:(BOOL)arg2;
+ (BOOL)isValidStringForTextMessage:(id)arg1;
+ (id)filterControlChars:(id)arg1;
+ (id)formatterDisplayNickName:(id)arg1;
+ (id)ReplaceSingleQuote:(id)arg1;
+ (id)SafeUtf8WithCString:(const char *)arg1;
+ (char *)NewStrFromNSStr:(id)arg1;
+ (BOOL)FFSvrChatInfoMsgWithImgZZ;
+ (unsigned int)GetChannelNumber;
+ (id)GetRandomKeyWithSalt:(id)arg1;
+ (id)GetRandomKey;
+ (id)safeUnarchive:(id)arg1;
+ (void)doNotBackupNsIDPath;
+ (id)GetUUID;
+ (id)GetRandomUUID;
+ (id)GetHashDeviceId;
+ (id)GetDeviceId;
+ (id)GetDeviceType;
+ (long long)compareVersion:(id)arg1 toVersion:(id)arg2;
+ (long long)compareVersionToCurrentVersion:(id)arg1;
+ (id)cgiShortVersionString;
+ (id)cgiVersionString;
+ (id)displayedShortVersionString;
+ (id)displayedVersionString;
+ (id)ParseFullVersionString:(unsigned int)arg1;
+ (id)ParseVersionString:(unsigned int)arg1;
+ (void)ParseVersion:(unsigned int)arg1 Major:(unsigned int *)arg2 Minor:(unsigned int *)arg3 Minorex:(unsigned int *)arg4 Beta:(unsigned int *)arg5;
+ (void)ParseVersion:(unsigned int)arg1 Major:(unsigned int *)arg2 Minor:(unsigned int *)arg3 Minorex:(unsigned int *)arg4;
+ (unsigned int)BuildNumber;
+ (BOOL)isBuildFromReleaseBranch;
+ (unsigned int)GetVersion;
+ (id)mapsURLWithLatitude:(double)arg1 longitude:(double)arg2 provider:(unsigned long long)arg3;
+ (BOOL)appleMapsAvailable;
+ (BOOL)isLongitudeValid:(double)arg1;
+ (BOOL)isLatitudeValid:(double)arg1;
+ (BOOL)isNeedProcessBrandContact:(id)arg1;
+ (id)specialUserNameList;
+ (id)GenPushContactFromMsgData:(id)arg1;
+ (unsigned int)GetPushContactSceneFromMsg:(id)arg1;
+ (BOOL)GetStrangerContactsFromServer:(id)arg1;
+ (BOOL)GetContactsFromServer:(id)arg1 isForceGet:(BOOL)arg2;
+ (BOOL)GetContactsFromServer:(id)arg1;
+ (BOOL)RemoveChatContactForSession:(id)arg1;
+ (id)GetDisplayNameByUsrName:(id)arg1;
+ (id)GetContactByUsrName:(id)arg1;
+ (id)GetContactAfterCheckExist:(id)arg1;
+ (id)GetContactForBackup:(id)arg1;
+ (id)GetContactForSession:(id)arg1;
+ (id)GetContactByNickName:(id)arg1;
+ (BOOL)IsContactExistForSession:(id)arg1;
+ (unsigned int)GetCurrentWeixinUin;
+ (unsigned int)GetCurrentQQUin;
+ (id)GetCurrentWeiboUserName;
+ (id)GetCurrentUserName;
+ (BOOL)IsSelfUserName:(id)arg1;
+ (id)GetPluginDisplayName:(id)arg1;
+ (BOOL)IsQQMailUserName:(id)arg1;
+ (BOOL)IsTencentNewsPlugin:(id)arg1;
+ (BOOL)IsWeiboContact:(id)arg1;
+ (BOOL)IsUnsupportSubscription:(id)arg1;
+ (BOOL)IsInChatTableBlacklist:(id)arg1;
+ (BOOL)IsStickyChatsFolder:(id)arg1;
+ (BOOL)IsGroupBox:(id)arg1;
+ (BOOL)IsEncodeUserName:(id)arg1;
+ (BOOL)IsLocalSupportPlaceholderUsrName:(id)arg1;
+ (BOOL)IsLocalPlaceholderUsrName:(id)arg1;
+ (BOOL)IsLocalHardCodeUsrName:(id)arg1;
+ (BOOL)IsOfficialPluginUsrName:(id)arg1;
+ (BOOL)IsLocalizedPluginUsrName:(id)arg1;
+ (BOOL)IsFileHelper:(id)arg1;
+ (BOOL)IsWeAppSessionHolder:(id)arg1;
+ (BOOL)IsTemplateMsgHolder:(id)arg1;
+ (BOOL)IsOfficialAccountFolder:(id)arg1;
+ (BOOL)IsBrandContactUserName:(id)arg1;
+ (BOOL)IsBrandSessionHolder:(id)arg1;
+ (BOOL)IsWeixinTeamContact:(id)arg1;
+ (BOOL)IsMsgFromBrandContact:(id)arg1;
+ (BOOL)IsMsgFromEnterpriseBrandContact:(id)arg1;
+ (BOOL)PreFilterNoBrandUserName:(id)arg1;
+ (BOOL)IsWeiXinMsgContact:(id)arg1;
+ (id)PreHandleUserName:(id)arg1;
+ (unsigned int)GetChatNameType:(id)arg1;
+ (void)kernelRemoveAccountRelateService;
+ (void)kernelLazyRegisterExtensionLister;
+ (void)kernelRegisterClsMethod;
+ (void)KernelRemoveMMKVFileWithUserName:(id)arg1;
+ (void)KernelRemoveUserPrivacyFilesWithUserName:(id)arg1;
+ (void)KernelRemoveUserAppGroupFolderAndKeyValueDB;
+ (void)KernelRemoveUserFolder;
+ (void)KernelClearKeyInfoData;
+ (void)KernelOnBackground;
+ (void)KernelOnForeground;
+ (void)KernelOnAppExit;
+ (id)getSoftTypeInfo;
+ (BOOL)AppMsgCannotAddToDB:(id)arg1 syncMsgList:(id)arg2;
+ (BOOL)IsFilterSpecialSysMsg:(id)arg1;
+ (BOOL)IsFilterStatusNotify:(id)arg1 chatName:(id)arg2;
+ (BOOL)CanAddToDB:(id)arg1 chatName:(id)arg2 syncMsgList:(id)arg3;
+ (BOOL)CanAddToDB:(id)arg1 chatName:(id)arg2;
+ (id)GenAddMsgFromMsgData:(id)arg1;
+ (id)GenMsgDataFromAddMsg:(id)arg1;
+ (void)CleanupAllMediaRes:(id)arg1;
+ (id)GetMsgLocalUsrName:(id)arg1;
+ (id)GetClientIDOfMsg:(id)arg1 LocalID:(unsigned int)arg2 Time:(unsigned int)arg3;
+ (id)obfuscate:(id)arg1 withKey:(id)arg2;
+ (BOOL)hasChinese:(id)arg1;
+ (BOOL)IsIgnoreChar:(unsigned short)arg1;
+ (BOOL)IsEnChar:(unsigned short)arg1;
+ (BOOL)isEmoji:(id)arg1;
+ (BOOL)IsSameLanguage:(id)arg1;
+ (BOOL)IsSysRegionChina;
+ (id)GetRealCurSystemLanguage;
+ (id)GetCurSystemLanguage;
+ (id)trimLanguage:(id)arg1;
+ (id)IsSupportedLanguage:(id)arg1;
+ (void)reportSettingsData;
+ (id)filterAllWhiteSpaceAndNewLineString:(id)arg1;
+ (id)filterWhiteSpaceAndNewLineString:(id)arg1;
+ (unsigned long long)getFreeBackupDiskSpace;
+ (BOOL)isEnterpriseBrandContact:(id)arg1;
+ (BOOL)isNormalBrandContact:(id)arg1;
+ (void)OnDeleteContacts_Thread:(id)arg1;
+ (void)OnModContacts_Thread:(id)arg1 updateBrief:(BOOL)arg2;
+ (void)OnModContacts_Thread:(id)arg1;
+ (void)CopyLocalFieldToNewMemberContact:(id)arg1 oldContact:(id)arg2;
+ (void)CopyLocalFieldToNewContact:(id)arg1 oldContact:(id)arg2;
+ (id)GenGroupContactFromModContact:(id)arg1;
+ (void)updateBasicChatroomInfo:(id)arg1 byModContact:(id)arg2;
+ (id)GenGroupContactByMergeBriefModContactAndCreateIfNotExist:(id)arg1;
+ (id)GenContactDataFromModContact:(id)arg1;
+ (id)GenOpenIMGroupMemberFromRoomMemberInfo:(id)arg1;
+ (id)GenGroupMemberFromRoomMemberInfo:(id)arg1;
+ (id)GenGroupMemberFromModContact:(id)arg1;
+ (unsigned int)ChatNotifyC2S:(unsigned int)arg1;
+ (unsigned int)ChatNotifyS2C:(unsigned int)arg1;
+ (void)AddGroupMemberNeedVerifyMsg:(id)arg1 ContactList:(id)arg2;
+ (void)AddGroupCreateMsg:(id)arg1 ContactList:(id)arg2;
+ (id)GenSelfContact;

@end

