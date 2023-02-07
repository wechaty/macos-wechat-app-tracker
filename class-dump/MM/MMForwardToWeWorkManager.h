//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"
#import "AppMessageHandlerDelegate-Protocol.h"
#import "IMMWeWorkRecordDownloadCDNMgrExt-Protocol.h"
#import "ImgMessageHandlerDelegate-Protocol.h"
#import "MMForwardToWeWorkLogicDelegate-Protocol.h"
#import "MMUploadProgressWindowDelegate-Protocol.h"
#import "VideoMessageHandlerDelegate-Protocol.h"
#import "WeComRecordHandlerDelegate-Protocol.h"

@class AppMessageHandlerForWeWork, FFProcessReqsvrLogicZZ, ImgMessageHandlerForWeWork, MMForwardToWeWorkLogic, MMUploadProgressWindow, MessageData, NSArray, NSData, NSMutableArray, NSRecursiveLock, NSString, NSTimer, VideoMessageHandlerForWeWork, WeComRecordHandler;

@interface MMForwardToWeWorkManager : NSObject <MMForwardToWeWorkLogicDelegate, AccountServiceExt, IMMWeWorkRecordDownloadCDNMgrExt, WeComRecordHandlerDelegate, MMUploadProgressWindowDelegate, AppMessageHandlerDelegate, ImgMessageHandlerDelegate, VideoMessageHandlerDelegate>
{
    BOOL _isForwarding;
    BOOL _isAccepting;
    int _acceptingMessageType;
    int _frowardSource;
    MMForwardToWeWorkLogic *_forwardLogic;
    NSString *_key;
    long long _sendMsgType;
    NSString *_encryptedMessage;
    NSData *_encryptedSingleMessage;
    NSRecursiveLock *_forwardingLock;
    NSRecursiveLock *_acceptingLock;
    MessageData *_forwardingMessage;
    unsigned long long _currentHandleFileSizeCount;
    unsigned long long _needHandleFileSizeCount;
    unsigned long long _currentProgress;
    NSTimer *_encodeWaitTimer;
    NSTimer *_randomProgressTimer;
    WeComRecordHandler *_recordMessageHandler;
    AppMessageHandlerForWeWork *_appMessageHandlerForWeWork;
    ImgMessageHandlerForWeWork *_imgMessageHandlerForWeWork;
    VideoMessageHandlerForWeWork *_videoMessageHandlerForWeWork;
    FFProcessReqsvrLogicZZ *_messageSendLogic;
    MMUploadProgressWindow *_uploadProgressWindow;
    NSMutableArray *_needHandleDataID;
    NSMutableArray *_canIgnoreUploadList;
    NSMutableArray *_ignoreUploadParams;
    NSMutableArray *_sendMessageIds;
    NSMutableArray *_needSeparateUploadMsgList;
    NSMutableArray *_needSeparateEncryptMsgList;
    MessageData *_currentSeparateUploadMsg;
    unsigned long long _selectSeparateForwardItemCount;
    NSArray *_needCleanFiles;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) int frowardSource; // @synthesize frowardSource=_frowardSource;
@property(retain, nonatomic) NSArray *needCleanFiles; // @synthesize needCleanFiles=_needCleanFiles;
@property(nonatomic) unsigned long long selectSeparateForwardItemCount; // @synthesize selectSeparateForwardItemCount=_selectSeparateForwardItemCount;
@property(retain, nonatomic) MessageData *currentSeparateUploadMsg; // @synthesize currentSeparateUploadMsg=_currentSeparateUploadMsg;
@property(retain, nonatomic) NSMutableArray *needSeparateEncryptMsgList; // @synthesize needSeparateEncryptMsgList=_needSeparateEncryptMsgList;
@property(retain, nonatomic) NSMutableArray *needSeparateUploadMsgList; // @synthesize needSeparateUploadMsgList=_needSeparateUploadMsgList;
@property(retain, nonatomic) NSMutableArray *sendMessageIds; // @synthesize sendMessageIds=_sendMessageIds;
@property(retain, nonatomic) NSMutableArray *ignoreUploadParams; // @synthesize ignoreUploadParams=_ignoreUploadParams;
@property(retain, nonatomic) NSMutableArray *canIgnoreUploadList; // @synthesize canIgnoreUploadList=_canIgnoreUploadList;
@property(retain, nonatomic) NSMutableArray *needHandleDataID; // @synthesize needHandleDataID=_needHandleDataID;
@property(retain, nonatomic) MMUploadProgressWindow *uploadProgressWindow; // @synthesize uploadProgressWindow=_uploadProgressWindow;
@property(retain, nonatomic) FFProcessReqsvrLogicZZ *messageSendLogic; // @synthesize messageSendLogic=_messageSendLogic;
@property(retain, nonatomic) VideoMessageHandlerForWeWork *videoMessageHandlerForWeWork; // @synthesize videoMessageHandlerForWeWork=_videoMessageHandlerForWeWork;
@property(retain, nonatomic) ImgMessageHandlerForWeWork *imgMessageHandlerForWeWork; // @synthesize imgMessageHandlerForWeWork=_imgMessageHandlerForWeWork;
@property(retain, nonatomic) AppMessageHandlerForWeWork *appMessageHandlerForWeWork; // @synthesize appMessageHandlerForWeWork=_appMessageHandlerForWeWork;
@property(retain, nonatomic) WeComRecordHandler *recordMessageHandler; // @synthesize recordMessageHandler=_recordMessageHandler;
@property(retain, nonatomic) NSTimer *randomProgressTimer; // @synthesize randomProgressTimer=_randomProgressTimer;
@property(retain, nonatomic) NSTimer *encodeWaitTimer; // @synthesize encodeWaitTimer=_encodeWaitTimer;
@property(nonatomic) unsigned long long currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) unsigned long long needHandleFileSizeCount; // @synthesize needHandleFileSizeCount=_needHandleFileSizeCount;
@property(nonatomic) unsigned long long currentHandleFileSizeCount; // @synthesize currentHandleFileSizeCount=_currentHandleFileSizeCount;
@property(nonatomic) BOOL isAccepting; // @synthesize isAccepting=_isAccepting;
@property(retain, nonatomic) MessageData *forwardingMessage; // @synthesize forwardingMessage=_forwardingMessage;
@property(nonatomic) int acceptingMessageType; // @synthesize acceptingMessageType=_acceptingMessageType;
@property(nonatomic) BOOL isForwarding; // @synthesize isForwarding=_isForwarding;
@property(retain, nonatomic) NSRecursiveLock *acceptingLock; // @synthesize acceptingLock=_acceptingLock;
@property(retain, nonatomic) NSRecursiveLock *forwardingLock; // @synthesize forwardingLock=_forwardingLock;
@property(retain, nonatomic) NSData *encryptedSingleMessage; // @synthesize encryptedSingleMessage=_encryptedSingleMessage;
@property(retain, nonatomic) NSString *encryptedMessage; // @synthesize encryptedMessage=_encryptedMessage;
@property(nonatomic) long long sendMsgType; // @synthesize sendMsgType=_sendMsgType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) MMForwardToWeWorkLogic *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
- (void)OnWeWorkDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnWeWorkDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnWeWorkDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 totalLen:(unsigned int)arg3 bThumb:(BOOL)arg4;
- (void)OnWeWorkDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)onRecordMsgUploadCDNModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onCurrentFileUploadFinish:(unsigned int)arg1 andLocalDataID:(id)arg2;
- (void)onCurrentFileUploadProgress:(unsigned int)arg1 andTotalLength:(unsigned int)arg2 andLocalDataID:(id)arg3;
- (void)notifyVideoMsgUploadProgress:(id)arg1 msgData:(id)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onVideoMsgUploadFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void)notifyImgMsgUploadProgress:(id)arg1 msgData:(id)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onImgMsgUploadFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void)notifyAppMsgUploadProgress:(id)arg1 msgData:(id)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onAppMsgUploadFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)onUserLogout;
- (int)calculateMessageCount:(id)arg1 andCount:(int)arg2;
- (int)calculateNeedHandleSizeCount:(id)arg1 andCount:(int)arg2 andDepth:(unsigned int)arg3;
- (void)getSendMessageIds:(id)arg1;
- (unsigned long long)calculateMessageSizeCount:(id)arg1 andCount:(unsigned long long)arg2;
- (unsigned long long)sumSeparateMsgSize:(id)arg1;
- (void)sumMessageSize:(id)arg1;
- (void)sumNeedHandleSizeForFilePaths:(id)arg1;
- (void)sumNeedHandleSizeForFavItems:(id)arg1;
- (void)sumNeedHandleSizeForMessageList:(id)arg1;
- (void)sumNeedHandleSizeForMsg:(id)arg1;
- (void)sumNeedHandleSize:(id)arg1;
- (void)onStopUploadTask;
- (void)dealGetMessageReport:(id)arg1 willSendUserNames:(id)arg2;
- (void)showToast:(id)arg1;
- (void)showForwordFailureToast;
- (void)getForwardInfoIsError:(unsigned int)arg1;
- (void)getDecryptedSeperateMessageisSucess:(id)arg1;
- (void)getDecryptedMessageisSuccess:(id)arg1;
- (void)getEncryptedSingleMessageisSuccess:(id)arg1;
- (void)getEncryptedMessageisSuccess:(id)arg1;
- (void)randomStartProgress;
- (void)endEncodegWaitTimer;
- (void)startRandomProgress;
- (void)stopRandomProgress;
- (BOOL)checkAllowForwardToWeWork:(id)arg1;
- (BOOL)isForWardToWeWork:(id)arg1;
- (void)forwardMsgListToWeWork:(id)arg1 isNeedMerge:(BOOL)arg2;
- (void)closeMultipleSelect;
- (void)stopForwardMessage;
- (void)startEncodeWaitTimer;
- (BOOL)decryptForwardMessage:(id)arg1;
- (BOOL)openWeWorkBySchema;
- (id)dealCannotSendMessageType:(id)arg1;
- (id)getWeWorkVersionFromSystem;
- (void)stopCurrentSeparateUpload;
- (void)stopCurrentForwardingOrUploadIng:(id)arg1;
- (void)tryNextUploadAndEncrypt:(id)arg1 isSuccess:(BOOL)arg2;
- (void)checkForEncrypt;
- (void)excuteUpload;
- (BOOL)checkAndEncryptMsgList:(id)arg1;
- (BOOL)checkAndEncryptSingleData:(id)arg1;
- (void)cleanTmpDir;
- (void)endForwardToWeWork;
- (BOOL)checkAndEncryptFavItemsSeparate:(id)arg1;
- (BOOL)checkAndEncryptMessageDataSeparate:(id)arg1;
- (BOOL)checkAndEncryptFilePathsSeparate:(id)arg1;
- (void)separateCheckAndEncryptMsgData:(id)arg1 isNeedUploadMsgType:(BOOL)arg2 mustUploadSource:(BOOL)arg3;
- (void)addMsgToEncryptQueue:(id)arg1;
- (void)addMsgToUploadQueue:(id)arg1;
- (BOOL)singleCheckAndEncryptMsgData:(id)arg1 mustUploadSource:(BOOL)arg2;
- (BOOL)checkAndEncryptSingleMessageData:(id)arg1 isSeparateForward:(BOOL)arg2 isNeedUploadMsgType:(BOOL)arg3 isSucess:(BOOL)arg4 mustUploadSource:(BOOL)arg5;
- (BOOL)checkAndEncryptSingleMessageData:(id)arg1 isSeparateForward:(BOOL)arg2 isNeedUploadMsgType:(BOOL)arg3 isSucess:(BOOL)arg4;
- (BOOL)checkAndEncryptMessageData:(id)arg1;
- (BOOL)checkAndEncryptMessageDatas:(id)arg1 useNewProtocol:(BOOL)arg2;
- (BOOL)checkForwardStatusAndVersion:(BOOL)arg1;
- (void)showVersionTooLowAlert;
- (void)showFordingAlert;
- (BOOL)checkAndEncryptMessageDatas:(id)arg1;
- (void)cleanAndInitSeparateDatas:(id)arg1 mustUploadSource:(BOOL)arg2 isSingle:(BOOL)arg3;
- (void)cleanAndInitAllData:(id)arg1;
- (void)resetHandleSizeAndProgress;
- (BOOL)requestMessageFromWeWork:(id)arg1;
- (BOOL)processForward:(id)arg1;
- (BOOL)isAcceptingForwardMessage;
- (BOOL)isForwardingMessage;
- (id)randomGeneratedKey;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

