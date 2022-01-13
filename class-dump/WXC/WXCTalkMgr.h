//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AUAudioDataSource-Protocol.h"
#import "AVAudioPlayerDelegate-Protocol.h"
#import "AccountServiceExt-Protocol.h"
#import "IAUAudioDeviceExt-Protocol.h"
#import "MMService-Protocol.h"
#import "WXCCNetworkStatusExt-Protocol.h"
#import "WXCNetWorkDelegate-Protocol.h"

@class MMTimer, NSMutableArray, NSMutableSet, NSObject, NSRecursiveLock, NSString, VoiceGroupChgMsgSeq, WXCTalkRoomData, WXTalkComponent;
@protocol IWXCVideoDataDelegate, OS_dispatch_queue;

@interface WXCTalkMgr : MMService <AUAudioDataSource, AVAudioPlayerDelegate, IAUAudioDeviceExt, WXCCNetworkStatusExt, AccountServiceExt, MMService, WXCNetWorkDelegate>
{
    NSMutableArray *_mLastInviteUuidList;
    BOOL _isDataConnected;
    BOOL _isAudioDeviceStarted;
    BOOL _isReceiveOtherData;
    BOOL _isSelfAndOtherEnter;
    BOOL _isFirstConnnected;
    struct OpaqueAudioConverter *mAudioConverter16IntTo32F;
    struct OpaqueAudioConverter *mAudioConverter32FTo16Int;
    NSObject<OS_dispatch_queue> *_taskQueue;
    BOOL mIsInTalking;
    BOOL mIsTalkingInterrupt;
    unsigned int mNextBannerClickTimeLimit;
    int _mNetSceneState;
    unsigned int _mSimpleRedirectSwitch;
    int _mCntTryStartAudioDev;
    int _mStartDevScene;
    unsigned int _heartbeatInterval;
    unsigned int _joinLimitInterval;
    WXCTalkRoomData *_roomData;
    WXTalkComponent *_component;
    NSRecursiveLock *_audioEncLock;
    NSRecursiveLock *_audioDecLock;
    NSRecursiveLock *_audioEngineLock;
    MMTimer *_wxTalkTimer;
    MMTimer *_wxCheckTalkStatusTimer;
    MMTimer *_wxCheckTalkStatusMoreSensitiveTimer;
    struct __sFILE *_recordDumpFile;
    MMTimer *_mSystemCallHoldTimer;
    MMTimer *_wxHeartbeatTimeoutTimer;
    MMTimer *_mFrequentEnterTimer;
    MMTimer *_mFrequentAckTimer;
    id <IWXCVideoDataDelegate> _m_delegate;
    NSMutableSet *_mReceiveMsgIdSet;
    VoiceGroupChgMsgSeq *_msgSeq;
}

+ (int)cpuCapacity;
+ (unsigned int)GetNetType;
- (void).cxx_destruct;
@property(retain, nonatomic) VoiceGroupChgMsgSeq *msgSeq; // @synthesize msgSeq=_msgSeq;
@property(retain, nonatomic) NSMutableSet *mReceiveMsgIdSet; // @synthesize mReceiveMsgIdSet=_mReceiveMsgIdSet;
@property(nonatomic) __weak id <IWXCVideoDataDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned int joinLimitInterval; // @synthesize joinLimitInterval=_joinLimitInterval;
@property(nonatomic) unsigned int heartbeatInterval; // @synthesize heartbeatInterval=_heartbeatInterval;
@property(nonatomic) int mStartDevScene; // @synthesize mStartDevScene=_mStartDevScene;
@property(nonatomic) int mCntTryStartAudioDev; // @synthesize mCntTryStartAudioDev=_mCntTryStartAudioDev;
@property(retain, nonatomic) MMTimer *mFrequentAckTimer; // @synthesize mFrequentAckTimer=_mFrequentAckTimer;
@property(retain, nonatomic) MMTimer *mFrequentEnterTimer; // @synthesize mFrequentEnterTimer=_mFrequentEnterTimer;
@property(nonatomic) unsigned int mSimpleRedirectSwitch; // @synthesize mSimpleRedirectSwitch=_mSimpleRedirectSwitch;
@property(retain, nonatomic) MMTimer *wxHeartbeatTimeoutTimer; // @synthesize wxHeartbeatTimeoutTimer=_wxHeartbeatTimeoutTimer;
@property(retain, nonatomic) MMTimer *mSystemCallHoldTimer; // @synthesize mSystemCallHoldTimer=_mSystemCallHoldTimer;
@property(nonatomic) struct __sFILE *recordDumpFile; // @synthesize recordDumpFile=_recordDumpFile;
@property(retain, nonatomic) MMTimer *wxCheckTalkStatusMoreSensitiveTimer; // @synthesize wxCheckTalkStatusMoreSensitiveTimer=_wxCheckTalkStatusMoreSensitiveTimer;
@property(retain, nonatomic) MMTimer *wxCheckTalkStatusTimer; // @synthesize wxCheckTalkStatusTimer=_wxCheckTalkStatusTimer;
@property(retain, nonatomic) MMTimer *wxTalkTimer; // @synthesize wxTalkTimer=_wxTalkTimer;
@property(retain, nonatomic) NSRecursiveLock *audioEngineLock; // @synthesize audioEngineLock=_audioEngineLock;
@property(retain, nonatomic) NSRecursiveLock *audioDecLock; // @synthesize audioDecLock=_audioDecLock;
@property(retain, nonatomic) NSRecursiveLock *audioEncLock; // @synthesize audioEncLock=_audioEncLock;
@property(retain, nonatomic) WXTalkComponent *component; // @synthesize component=_component;
@property(retain, nonatomic) WXCTalkRoomData *roomData; // @synthesize roomData=_roomData;
@property(nonatomic) int mNetSceneState; // @synthesize mNetSceneState=_mNetSceneState;
@property(nonatomic) unsigned int mNextBannerClickTimeLimit; // @synthesize mNextBannerClickTimeLimit;
@property(nonatomic) BOOL mIsTalkingInterrupt; // @synthesize mIsTalkingInterrupt;
@property(nonatomic) BOOL mIsInTalking; // @synthesize mIsInTalking;
- (void)handleGetGroupInfoBatchResponse:(id)arg1 retCode:(int)arg2 seqNo:(int)arg3;
- (void)handleVoiceMemberWhisperResponse:(id)arg1 retCode:(int)arg2;
- (BOOL)requestActiveGroupInfoItemList:(id)arg1;
- (void)doTalkStateReport;
- (BOOL)isTalkSessionActive;
- (void)onRespData:(id)arg1 taskId:(int)arg2 retCode:(int)arg3 retBuf:(id)arg4 backfillData:(id)arg5;
- (id)getTaskQueue;
- (void)engineDoMemberChanged:(id)arg1;
- (BOOL)judgeIsCurrSessionBanner:(id)arg1;
- (BOOL)judgeIsCurrSessionMsg:(id)arg1;
- (BOOL)isMultiTalkMsgWithType:(int)arg1;
- (void)handleMemberChangeMsgWithCurrSession:(id)arg1 memberChangeType:(int)arg2;
- (void)handleTalkMsgsWithNotFriend:(id)arg1;
- (void)handleBannerMsg:(id)arg1;
- (void)handleTalkMsgs:(id)arg1;
- (BOOL)isDuplicateMsg:(id)arg1;
- (void)handleTalkInfoWithSingle2MultiInfo:(id)arg1;
- (void)handleTalkInfoWithVoiceConf:(id)arg1;
- (void)handleTalkInfoWithUsrProfileList:(id)arg1;
- (void)handleTalkInfoWithGroupInfo:(id)arg1;
- (void)handleTalkInfoChangeWithMemberList:(id)arg1 memberChangeType:(int)arg2 needNotifyMemberChange:(BOOL)arg3;
- (BOOL)isCurrentRoom:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3 isOnlyCheckGroupId:(BOOL)arg4;
- (int)getRouteIdByGroupId:(id)arg1;
- (void)setNetSceneState:(int)arg1;
- (BOOL)getIsOnlyCheckGroupIdByEnterType:(int)arg1;
- (BOOL)isInTalkSession;
- (int)engineDoMemberSelectForView:(id)arg1;
- (int)setNeedBigVideo:(BOOL)arg1 forUser:(id)arg2;
- (id)getMemberQualityInfoList;
- (id)getCurTalkingMemberList;
- (BOOL)holdMultiTalk:(BOOL)arg1 holdType:(int)arg2;
- (void)doFrequentEnter;
- (void)doFrequentAck;
- (void)stopFrequentEnter;
- (void)stopFrequentAck;
- (void)handleClientSceneReportResponse:(id)arg1 retCode:(int)arg2;
- (void)handleRedirectResponse:(id)arg1 retCode:(int)arg2 backfillData:(id)arg3;
- (void)sendRedirectReq;
- (int)getMemberIdByUserName:(id)arg1;
- (int)getSelfRoomMemberId;
- (void)sendClientSeceneReport:(unsigned int)arg1;
- (void)notifyModifyGroupInfoResult:(BOOL)arg1 groupId:(id)arg2;
- (void)handleModifyGroupInfoResponse:(id)arg1 retCode:(int)arg2 groupId:(id)arg3;
- (void)handleHeartBeatResponse:(id)arg1 retCode:(int)arg2;
- (void)handleInviteWXTalkModeRequest:(id)arg1 retCode:(int)arg2 backfillData:(id)arg3;
- (BOOL)sendInviteWXTalkModeRequest:(id)arg1;
- (void)handleCreateWXTalkModeResponse:(id)arg1 retCode:(int)arg2 origReqData:(id)arg3;
- (BOOL)sendCreateWXTalkModeRequest:(id)arg1 clientGroupId:(id)arg2 uniqueSdkTalkID:(id)arg3 voiceGroupInfo:(id)arg4 single2MultiInfo:(id)arg5 routeId:(int)arg6;
- (void)handleWXTalkVideoModeRequest:(id)arg1 retCode:(int)arg2 origReqData:(id)arg3;
- (BOOL)sendWXTalkVideoModeRequest:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3 Action:(int)arg4;
- (void)handleSubscribeGeneralVideoResponse:(id)arg1 retCode:(int)arg2 backfillData:(id)arg3;
- (BOOL)sendWXTalkSubscribeGeneralVideoRequest:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3 SelfMemberId:(int)arg4 SubscribeMemberList:(id)arg5;
- (void)handleSubscribeVideoResponse:(id)arg1 retCode:(int)arg2 backfillData:(id)arg3;
- (BOOL)sendWXTalkSubscribeVideoRequest:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3 MemberId:(int)arg4 UserName:(id)arg5 SubscribeMemberId:(int)arg6;
- (BOOL)sendRejectEnterWXTalkModeRequest:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3 reason:(int)arg4;
- (void)handleExitTalkRoomResponse:(id)arg1 retCode:(int)arg2 backfillData:(id)arg3;
- (void)SendExitTalkRoomRequest:(int)arg1;
- (void)SendExitTalkRoomRequest:(int)arg1 groupId:(id)arg2 roomId:(unsigned int)arg3 roomKey:(unsigned long long)arg4 routeId:(int)arg5;
- (void)handleCancelCreateTalkRoomResponse:(id)arg1 retCode:(int)arg2 backFillData:(id)arg3;
- (void)sendCancelCreateRequest:(int)arg1;
- (void)handleEnterTalkRoomResponse:(id)arg1 retCode:(int)arg2 origReqData:(id)arg3;
- (BOOL)SendEnterTalkRoomRequestWithReqInfo:(id)arg1;
- (BOOL)SendEnterTalkRoomRequest:(int)arg1;
- (void)handleCreateNotifyAckResponse:(id)arg1 retCode:(int)arg2 origReqData:(id)arg3;
- (void)sendCreateNotifyAckRequest:(id)arg1 roomKey:(unsigned long long)arg2 roomId:(unsigned int)arg3;
- (void)sendCreateNotifyAckRequest:(id)arg1 roomKey:(unsigned long long)arg2 roomId:(unsigned int)arg3 isFrequent:(BOOL)arg4;
- (int)getRemoteQualityInfoList:(void *)arg1 qualityLen:(int)arg2;
- (id)getGroupInfo;
- (id)getLocalCapInfo;
- (void)reportClientScene:(unsigned int)arg1;
- (BOOL)sendResumeFriendOrSendPokerToFriend:(id)arg1 friendUserName:(id)arg2 extData:(id)arg3;
- (void)notifysendResumeFriendOrSendPokerToFriendResult:(BOOL)arg1 groupId:(id)arg2;
- (void)modifyGroupInfo:(id)arg1 newName:(id)arg2;
- (BOOL)rejectWXTalkMode:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3 reason:(int)arg4;
- (BOOL)inviteTalkMembers:(id)arg1 memberUuids:(id)arg2;
- (int)genSdkUniqueRouteId:(id)arg1;
- (int)genRouteId;
- (BOOL)createWXTalkMode:(id)arg1 voiceGroupInfo:(id)arg2 single2MultiInfo:(id)arg3 clientGroupId:(id)arg4 uniqueSdkTalkID:(id)arg5 routeId:(int)arg6;
- (BOOL)createWXTalkMode:(id)arg1;
- (id)getCreateVoiceGroupInfo:(int)arg1 togetherId:(unsigned long long)arg2;
- (id)prepareCreateWXTalkMode:(id)arg1 voiceGroupInfo:(id)arg2 single2MultiInfo:(id)arg3 uniqueSdkTalkID:(id)arg4 clientGroupId:(id)arg5;
- (void)closeWXTalkModeWithErrorType:(int)arg1 errorNo:(int)arg2 groupUserName:(id)arg3;
- (void)closeWXTalkMode;
- (void)exitWXTalkRoom:(int)arg1 groupId:(id)arg2;
- (void)exitWXTalkRoom:(int)arg1;
- (void)exitCurMutilTalkRoom:(id)arg1;
- (void)onInvitedTalkMode:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3;
- (BOOL)openWXTalkMode:(id)arg1 roomId:(unsigned int)arg2 roomKey:(unsigned long long)arg3 enterType:(int)arg4;
- (BOOL)canEnterThisRoom:(id)arg1;
- (BOOL)isOpenAnyWXTalkMode;
- (void)initAudioConverter;
- (void)resetData;
- (void)onServiceClearData;
- (void)onPreQuit;
- (void)onServiceInit;
- (void)dealloc;
- (void)registerNotifications;
- (void)UnInitAll;
- (void)InitAll;
- (void)HeadSetPlugin:(BOOL)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)audioDevicePluginHeadset:(id)arg1;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)OnAudioDeviceStartedSuccess;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)OnAudioDeviceStartedFail;
- (void)audioDeviceForceStop:(id)arg1;
- (void)ForceStop;
- (void)getMutilTalkTotalFlow:(int *)arg1 andWwanBytes:(int *)arg2;
- (int)VideoEncAndSend:(char *)arg1 Length:(unsigned int)arg2 Format:(void *)arg3 resolutionMode:(int)arg4 cameraMode:(int)arg5;
- (void)closeVideoRecvAndSend;
- (void)setVideoOn:(BOOL)arg1;
- (BOOL)subscribeGeneralVideoForUserList:(id)arg1;
- (void)subscribeVideoForUser:(id)arg1 isCancel:(BOOL)arg2;
- (void)setMicroPhoneMute:(BOOL)arg1;
- (void)keepSpeakerPhoneStatusWhenDeviceStart:(BOOL)arg1;
- (BOOL)getSpeakerPhoneStatus;
- (void)setSpeakerPhone:(BOOL)arg1;
- (void)restartMultiTalkAudioDeviceInMainThread;
- (void)delayRestartMultiTalkAudioDevice;
- (void)doRestartMultiTalkAudioDevice;
- (void)resumeVoiceTalkAfterSysCall:(BOOL)arg1;
- (void)beginAudioInterrupt:(BOOL)arg1;
- (void)delayRestartVoiceTalk;
- (void)stopSystemCallHoldTimer;
- (void)onSystemCallHoldTimeOut;
- (void)startSystemCallHoldTimer;
- (void)SysCallEndNotify;
- (void)BeginInterruption:(BOOL)arg1;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (BOOL)isGetDataReady;
- (void)DumpToRecordFile:(char *)arg1 withDataLen:(unsigned int)arg2;
- (BOOL)StartRecordAndPlayAudioForVoip:(int)arg1;
- (void)StopTalk;
- (void)StartTalk;
- (void)heartbeatTimeoutFire;
- (void)stopHeartbeatTimeoutTimer;
- (void)restartHeartbeatTimeoutTimer;
- (void)OnNotifyMP:(long long)arg1 Param:(int)arg2 ViewId:(int)arg3;
- (void)OnReportChannel:(id)arg1;
- (void)OnReportEngineSend:(id)arg1;
- (void)OnReportEngineRecv:(id)arg1 memberId:(int)arg2;
- (void)onReceOtherMemberData;
- (void)OnEngineError:(int)arg1;
- (void)OnOpenEngineSuccess;
- (void)OnNetworkChanged:(id)arg1;
- (void)NotifyMainThreadEngineError:(id)arg1;
- (void)NotifyMainThreadDataConnected;
- (void)EngineAudioConfig;
- (void)EngineMT3dParasConfig;
- (void)StopSession;
- (void)RedirectTo:(id)arg1 withEngineConf:(id)arg2 withHeadSignArray:(id)arg3 withIsEncode:(BOOL)arg4 withTCPSvrArr:(id)arg5 withTCPStartTime:(int)arg6 withAudioEncryptType:(int)arg7 withAudioEncodeType:(int)arg8 withEncryptKey:(id)arg9 withGeneralPolicys:(id)arg10 withVideoEncryptType:(int)arg11;
- (void)SimpleRedirecTo:(id)arg1 withTCPSvrArr:(id)arg2;
- (void)StartSession:(id)arg1 withEngineConf:(id)arg2 withHeadSignArray:(id)arg3 withIsEncode:(BOOL)arg4 withTCPSvrArr:(id)arg5 withTCPStartTime:(int)arg6 withAudioEncryptType:(int)arg7 withAudioEncodeType:(int)arg8 withEncryptKey:(id)arg9 withGeneralPolicys:(id)arg10 withVideoEncryptType:(int)arg11;
- (void)onAllNetworkChange:(id)arg1;
- (void)CloseRecordDumpFile;
- (void)CreateRecordDumpFile;
- (void)TimerCheck;
- (void)SendHeartBeatRequest;
- (BOOL)checkFriendHasEnterRoom;
- (void)WXCReachabilityChange:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

