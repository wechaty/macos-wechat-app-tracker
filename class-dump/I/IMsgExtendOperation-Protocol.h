//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MessageData, NSArray, NSData, NSImage, NSString, SendVideoInfo;

@protocol IMsgExtendOperation <NSObject>
@property(nonatomic) __weak MessageData *m_refMessageData;
- (id)copy;

@optional
- (NSImage *)referIcon;
- (BOOL)hasReferIcon;
- (BOOL)hasReferThumb;
- (NSString *)msgReferSummary;
- (BOOL)msgCanBeRefered;
- (BOOL)isAppRecordFinishDownload;
- (BOOL)isFinishUploadOrDownload;
- (void)ChangeForBackup;
- (BOOL)cleanupMediaRes;
- (BOOL)isNonSupportedMessageData;
- (void)clearReaderWraps;
- (BOOL)isAppHDImageExist;
- (NSString *)getAppHDImagePath;
- (BOOL)isAppFileExist;
- (BOOL)isAppImgExist;
- (NSString *)getReaderWrapDisplayTitle;
- (void)parseReaderContent;
- (NSString *)getSingleReaderCoverUrl;
- (NSArray *)getReaderWraps;
- (BOOL)isAppFeedNameCardMsg;
- (BOOL)isAppFeedMsg;
- (BOOL)isAppPatMsg;
- (BOOL)isAppSoliataireMsg;
- (BOOL)isAppBrandNativeMsg;
- (BOOL)isOpenSDKAppBrandMsg;
- (BOOL)isLiveMsg;
- (BOOL)isAppSyncMsg;
- (BOOL)isAppBrandMsg;
- (BOOL)isAppRecordOverLimit;
- (BOOL)isLargeFileForForward;
- (BOOL)isLargeFileForFavOrRecord;
- (BOOL)isMusic;
- (BOOL)isNoteMsg;
- (BOOL)isCustomEmojiMsg;
- (BOOL)isAppTransferMsg;
- (BOOL)isAppHongbaoMsg;
- (BOOL)isAppC2CMsg;
- (BOOL)isAppRecordMsg;
- (BOOL)isSolitaireTextAppMsg;
- (BOOL)isTextAppMsg;
- (BOOL)isMultiReaderMsg;
- (BOOL)isSingleReaderMsg;
- (BOOL)isSupportedAppMsg;
- (BOOL)isURLAppMsg;
- (BOOL)isEmojiAppMsg;
- (BOOL)isImgAppMsg;
- (BOOL)isFileUploadBoxAppMsg;
- (BOOL)isFileAppMsg;
- (unsigned int)getPreviewType;
- (BOOL)isEmotionExist;
- (BOOL)getDownloadThumbStatus:(unsigned int *)arg1;
- (BOOL)isNeedDownloadThumb;
- (NSString *)getThumbPath;
- (BOOL)saveVideoThumb:(SendVideoInfo *)arg1 toUser:(NSString *)arg2;
- (BOOL)saveVideoResource:(SendVideoInfo *)arg1 toUser:(NSString *)arg2;
- (BOOL)isVideoExist;
- (BOOL)isThumbImgExist;
- (BOOL)isImgExist;
- (BOOL)isHDImg;
- (BOOL)saveMsgDefaultThumbWithData:(NSData *)arg1 shouldCached:(BOOL)arg2;
- (BOOL)saveMsgThumbImg;
- (BOOL)saveMsgImg;
- (BOOL)isVoiceExist;
- (void)SetPlaySounded:(BOOL)arg1;
- (BOOL)IsPlaySounded;
- (void)SetPlayingSoundStatus:(BOOL)arg1;
- (BOOL)IsPlayingSound;
- (BOOL)IsRecording;
- (void)SetPlayed;
- (BOOL)IsDownloadEnded;
- (BOOL)IsUnPlayed;
- (BOOL)SaveMesVoice:(unsigned int)arg1;
- (BOOL)isCanUseCdnDownload;
- (BOOL)isCanUseCdnUpload;
- (void)encodeMsgFieldToXML:(NSString *)arg1;
- (void)parseMsgFieldFromXML;
- (NSString *)getMsgContentWithXMLFormat;
- (void)updateMsgContentForBackup;
- (NSString *)GetContent;
- (void)updateContent:(NSString *)arg1;
@end

