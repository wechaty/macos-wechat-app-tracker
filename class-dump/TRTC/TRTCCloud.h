//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ScreenCaptureDelegate-Protocol.h"
#import "TRTCAudioFrameDelegate-Protocol.h"
#import "TXBeautyManagerTraitControl-Protocol.h"
#import "TXCAudioEventDelegate-Protocol.h"
#import "TXIAudioCorePlayDelegate-Protocol.h"
#import "TXIAudioFileWriteDelegate-Protocol.h"
#import "TXIAudioMixedAllDataDelegate-Protocol.h"
#import "TXICaptureAndEncDelegate-Protocol.h"
#import "TXICustomPreprocessDelegate-Protocol.h"
#import "TXICustomRenderDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"
#import "TXIRenderAndDecDelegate-Protocol.h"

@class NSDateFormatter, NSHashTable, NSMutableDictionary, NSString, NSView, TRTCConfig, TRTCDashBoard, TRTCEncodeTypeDecision, TRTCParams, TRTCRoomInfo, TRTCVideoEncParam, TRTCVideoFrame, TXAudioEffectManager, TXCAudioVolumeEvaluator, TXCCaptureAndEnc, TXCScreenAndEnc, TXDeviceManager;
@protocol OS_dispatch_queue, OS_dispatch_source, TRTCAudioFrameDelegate, TRTCCloudDelegate, TRTCVideoFrameDelegate, TRTCVideoRenderDelegate;

@interface TRTCCloud : NSObject <TXINotifyDelegate, TXICaptureAndEncDelegate, TXIRenderAndDecDelegate, TXBeautyManagerTraitControl, ScreenCaptureDelegate, TXICustomRenderDelegate, TXICustomPreprocessDelegate, TRTCAudioFrameDelegate, TXIAudioCorePlayDelegate, TXCAudioEventDelegate, TXIAudioMixedAllDataDelegate, TXIAudioFileWriteDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    TRTCParams *_param;
    TRTCConfig *_config;
    TRTCConfig *_subStreamConfig;
    BOOL _startedPreview;
    BOOL _startedLocalAudio;
    BOOL _startedScreenCapture;
    BOOL _isNetworkModuleReady;
    unsigned long long _roomState;
    BOOL _isSwitchingRoom;
    BOOL _connectLost;
    struct shared_ptr<txliteav::TRTCEngineAdapter> _trtcNetworkCallbackAdpt;
    TRTCDashBoard *_dashBoard;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _isCollecting;
    struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> _members;
    unsigned long long _enterStartingTime;
    long long _lastFPS;
    unsigned long long _lastTS;
    NSObject<OS_dispatch_source> *_statisticTimer;
    NSObject<OS_dispatch_queue> *_statisticTimerQueue;
    struct TXCopyOnWriteBuffer _0x0Token;
    struct TXCStatusModule _selfIDStatusModule;
    int _remoteAudioMute;
    int _remoteVideoMute;
    unsigned int _volumeCallbackIntervalMs;
    int _remotePriorStreamType;
    unsigned long long _lastSendMsgTimeMs;
    long long _sendMsgCount;
    long long _sendMsgSize;
    struct vector<TrtcStreamType, std::__1::allocator<TrtcStreamType>> _streamsTypes;
    NSView *_localPreviewView;
    NSObject<OS_dispatch_source> *_audioDeviceTimer;
    long long _lastAudioDeviceCaptureVolume;
    BOOL _lastAudioDeviceCaptureMuted;
    long long _lastAudioDevicePlayoutVolume;
    BOOL _lastAudioDevicePlayoutMuted;
    BOOL _enableSmallVideo;
    TRTCVideoEncParam *_smallVideoEncParam;
    struct CGSize _smallVideoSize;
    struct shared_ptr<txliteav::AudioMixedAllDataCallbackAdapter> _audioEngineCallbackAdapter;
    CDUnknownBlockType _speedTestCompletion;
    int _netType;
    NSString *_strRoomId;
    BOOL _enableAudioEosMode;
    unsigned long long _captureFrameCount;
    unsigned long long _lastCaptureFrameCount;
    unsigned long long _lastCaptureCalculateTS;
    unsigned long long _subStreamCaptureFrameCount;
    unsigned long long _subStreamLastCaptureFrameCount;
    unsigned long long _subStreamLastCaptureCalculateTS;
    NSDateFormatter *_dashboardDateFormatter;
    int _recvMode;
    BOOL _enableBlackStream;
    int _framework;
    int _existsFramewrokType;
    unsigned int _cameraMaxCaptureFps;
    NSHashTable *_subClouds;
    NSMutableDictionary *_currentPublishClouds;
    long long _qosMode;
    long long _qosPreference;
    unsigned int _roomType;
    id <TRTCAudioFrameDelegate> _audioFrameDelegate;
    struct shared_ptr<txliteav::audio::AudioSubStreamApple> _audioSubStream;
    BOOL _autoSetScreenParam;
    BOOL _enableCustomVideoCapture;
    BOOL _enableSubCustomVideoCapture;
    BOOL _enableCustomAudioCapture;
    BOOL _enterRoomOptionKeepAVCapture;
    BOOL _requestQuitRoomWhenTerminated;
    BOOL _isAutoFaceFoucs;
    BOOL _isVideoMuted;
    BOOL _publishesScreenInBigStream;
    id <TRTCCloudDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    TXDeviceManager *_deviceManager;
    TXCCaptureAndEnc *_capture;
    TXCCaptureAndEnc *_subStreamCapture;
    TXCScreenAndEnc *_screenCapture;
    id <TRTCVideoRenderDelegate> _localRenderDelegate;
    id <TRTCVideoFrameDelegate> _preprocessDelegate;
    TRTCRoomInfo *_roomInfo;
    long long _currentRole;
    long long _targetRole;
    long long _exitedRoomFlags;
    long long _captureVolume;
    long long _playoutVolume;
    CDUnknownBlockType _videoSendLogger;
    TRTCEncodeTypeDecision *_mEncodeDecision;
    TXAudioEffectManager *_audioEffectManager;
    TXCAudioVolumeEvaluator *_volumeEvaluator;
    TRTCVideoFrame *_srcVideoFrame;
    TRTCVideoFrame *_dstVideoFrame;
    shared_ptr_84c2d62d _trtcNetWork;
    shared_ptr_b0e20bcb _audioEventCallback;
    shared_ptr_c81f36a2 _audioPlayoutCallback;
    shared_ptr_234b9748 _audioFileWriteCallback;
    struct CGRect _screenFrame;
}

+ (unsigned long long)generateCustomPTS;
+ (void)setLogDelegate:(id)arg1;
+ (void)setLogDirPath:(id)arg1;
+ (void)setLogCompressEnabled:(BOOL)arg1;
+ (void)setConsoleEnabled:(BOOL)arg1;
+ (void)setLogLevel:(long long)arg1;
+ (id)getSDKVersion;
+ (void)destroySharedIntance;
+ (id)sharedInstance;
+ (void)setNetEnv:(int)arg1;
+ (void)load;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) TRTCVideoFrame *dstVideoFrame; // @synthesize dstVideoFrame=_dstVideoFrame;
@property(retain, nonatomic) TRTCVideoFrame *srcVideoFrame; // @synthesize srcVideoFrame=_srcVideoFrame;
@property(retain, nonatomic) TXCAudioVolumeEvaluator *volumeEvaluator; // @synthesize volumeEvaluator=_volumeEvaluator;
@property(retain, nonatomic) TXAudioEffectManager *audioEffectManager; // @synthesize audioEffectManager=_audioEffectManager;
@property(nonatomic) shared_ptr_234b9748 audioFileWriteCallback; // @synthesize audioFileWriteCallback=_audioFileWriteCallback;
@property(nonatomic) shared_ptr_c81f36a2 audioPlayoutCallback; // @synthesize audioPlayoutCallback=_audioPlayoutCallback;
@property(nonatomic) shared_ptr_b0e20bcb audioEventCallback; // @synthesize audioEventCallback=_audioEventCallback;
@property(nonatomic) struct CGRect screenFrame; // @synthesize screenFrame=_screenFrame;
@property(nonatomic) BOOL publishesScreenInBigStream; // @synthesize publishesScreenInBigStream=_publishesScreenInBigStream;
@property(retain, nonatomic) TRTCEncodeTypeDecision *mEncodeDecision; // @synthesize mEncodeDecision=_mEncodeDecision;
@property(readonly, copy, nonatomic) CDUnknownBlockType videoSendLogger; // @synthesize videoSendLogger=_videoSendLogger;
@property(nonatomic) BOOL isVideoMuted; // @synthesize isVideoMuted=_isVideoMuted;
@property(nonatomic) shared_ptr_84c2d62d trtcNetWork; // @synthesize trtcNetWork=_trtcNetWork;
@property long long playoutVolume; // @synthesize playoutVolume=_playoutVolume;
@property long long captureVolume; // @synthesize captureVolume=_captureVolume;
@property BOOL isAutoFaceFoucs; // @synthesize isAutoFaceFoucs=_isAutoFaceFoucs;
@property(nonatomic) BOOL requestQuitRoomWhenTerminated; // @synthesize requestQuitRoomWhenTerminated=_requestQuitRoomWhenTerminated;
@property(nonatomic) BOOL enterRoomOptionKeepAVCapture; // @synthesize enterRoomOptionKeepAVCapture=_enterRoomOptionKeepAVCapture;
@property long long exitedRoomFlags; // @synthesize exitedRoomFlags=_exitedRoomFlags;
@property(nonatomic) long long targetRole; // @synthesize targetRole=_targetRole;
@property(nonatomic) long long currentRole; // @synthesize currentRole=_currentRole;
@property(retain) TRTCRoomInfo *roomInfo; // @synthesize roomInfo=_roomInfo;
@property(nonatomic) BOOL enableCustomAudioCapture; // @synthesize enableCustomAudioCapture=_enableCustomAudioCapture;
@property(nonatomic) BOOL enableSubCustomVideoCapture; // @synthesize enableSubCustomVideoCapture=_enableSubCustomVideoCapture;
@property(nonatomic) BOOL enableCustomVideoCapture; // @synthesize enableCustomVideoCapture=_enableCustomVideoCapture;
@property(nonatomic) __weak id <TRTCAudioFrameDelegate> audioFrameDelegate; // @synthesize audioFrameDelegate=_audioFrameDelegate;
@property __weak id <TRTCVideoFrameDelegate> preprocessDelegate; // @synthesize preprocessDelegate=_preprocessDelegate;
@property __weak id <TRTCVideoRenderDelegate> localRenderDelegate; // @synthesize localRenderDelegate=_localRenderDelegate;
@property BOOL autoSetScreenParam; // @synthesize autoSetScreenParam=_autoSetScreenParam;
@property(retain) TXCScreenAndEnc *screenCapture; // @synthesize screenCapture=_screenCapture;
@property(retain) TXCCaptureAndEnc *subStreamCapture; // @synthesize subStreamCapture=_subStreamCapture;
@property(retain) TXCCaptureAndEnc *capture; // @synthesize capture=_capture;
@property(retain, nonatomic) TXDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <TRTCCloudDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startPushingForSubCloud;
- (void)checkAudioDeviceStatus;
- (void)stopAudioDeviceStatusCheckTimer;
- (void)startAudioDeviceStatusCheckTimer;
- (int)getSubStreamVideoFPS;
- (int)getSmallStreamVideoFPS;
- (int)getBigStreamVideoFPS;
- (void)destroyClean;
- (void)onAudioEngineError:(id)arg1 code:(int)arg2 message:(id)arg3 params:(id)arg4;
- (void)onAudioEngineWarning:(id)arg1 code:(int)arg2 message:(id)arg3 params:(id)arg4;
- (void)onAudioEngineEventInternal:(id)arg1 code:(int)arg2 message:(id)arg3 params:(id)arg4;
- (void)onAudioEngineEvent:(id)arg1 code:(int)arg2 message:(id)arg3 params:(id)arg4;
- (void)onPlayData:(id)arg1 timestamp:(unsigned long long)arg2 sampleRate:(int)arg3 channels:(int)arg4;
- (void)onAudioEngineMixedAllAudioFrame:(const struct AudioFrame *)arg1;
- (void)onRemoteUserAudioFrame:(id)arg1 userId:(id)arg2;
- (void)onRecordPcmData:(id)arg1 timeStamp:(unsigned long long)arg2 sampleRate:(int)arg3 channels:(int)arg4;
- (void)onRecordRawPcmData:(id)arg1 timeStamp:(unsigned long long)arg2 sampleRate:(int)arg3 channels:(int)arg4 withBgm:(BOOL)arg5;
- (void)onRecvAudioServerConfig:(const struct TRTCAudioServerConfig *)arg1;
- (void)applyAudioCaptureServerConfig:(const struct TRTCAudioServerConfig *)arg1;
- (void)onRecvEnterRoomVideoConfig:(BOOL)arg1;
- (void)onRecvVideoServerConfig:(const struct TRTCVideoServerConfig *)arg1;
- (void)applyVideoCaptureServerConfig:(const struct TRTCVideoServerConfig *)arg1;
- (void)onLocalAudioWriteFail;
- (void)onSendFirstLocalAudioFrame;
- (void)onSendFirstLocalVideoFrame:(int)arg1;
- (void)onChangeRole:(int)arg1 msg:(basic_string_23d93216)arg2;
- (void)onStopPublishing:(int)arg1 msg:(id)arg2;
- (void)onStartPublishing:(int)arg1 msg:(id)arg2;
- (void)onCancelTranscoding:(int)arg1 msg:(id)arg2;
- (void)onTranscodingUpdated:(int)arg1 msg:(id)arg2;
- (void)onStreamUnpublished:(int)arg1 msg:(id)arg2;
- (void)onStreamPublished:(int)arg1 msg:(id)arg2;
- (void)sendWarningToDelegate:(int)arg1 message:(id)arg2 extInfo:(id)arg3;
- (void)sendWarningToDelegate:(int)arg1 message:(id)arg2;
- (void)sendErrorToDelegate:(int)arg1 message:(id)arg2 extInfo:(id)arg3;
- (void)sendErrorToDelegate:(int)arg1 message:(id)arg2;
- (BOOL)isPublishingInCloud:(id)arg1 streamType:(unsigned int)arg2;
- (void)pushVideo:(id)arg1;
- (void)enableNetworkSmallStream:(BOOL)arg1;
- (void)enableNetworkBlackStream:(BOOL)arg1;
- (void)setNetworkAudioEncodeConfig;
- (void)removeUpStream:(int)arg1;
- (void)addUpStream:(int)arg1;
- (void)muteUpStream:(int)arg1 mute:(BOOL)arg2;
- (void)flushVideoEncodeConfig:(int)arg1 encodeParam:(struct _TRTCEncodeConfigParam)arg2;
- (struct _TRTCEncodeConfigParam)encodeConfigFrom:(struct CGRect)arg1;
- (void)flushSubStreamVideoEncodeConfig;
- (void)flushScreenCaptureVideoEncodeConfig;
- (void)flushSmallVideoEncodeConfig;
- (void)flushBigVideoEncodeConfig;
- (void)setVideoQuality:(long long)arg1 preference:(long long)arg2;
- (void)sendCustomAudioData:(id)arg1;
- (void)enableCustomAudioCapture:(BOOL)arg1;
- (void)sendCustomVideoData:(id)arg1;
- (void)sendCustomVideoData:(long long)arg1 frame:(id)arg2;
- (void)mixExternalAudioFrame:(id)arg1;
- (void)enableMixExternalAudioFrame:(BOOL)arg1 playout:(BOOL)arg2;
- (void)enableSubCustomVideoCapture:(BOOL)arg1;
- (void)enableCustomVideoCapture:(BOOL)arg1;
- (void)enableCustomVideoCapture:(long long)arg1 enable:(BOOL)arg2;
- (void)callExperimentalAPI:(id)arg1;
- (void)setCustom3aImplement:(id)arg1;
- (void)setVideoEncodeParamEx:(id)arg1;
- (int)setRemoteVideoRenderDelegate:(id)arg1 delegate:(id)arg2 pixelFormat:(long long)arg3 bufferType:(long long)arg4;
- (int)setLocalVideoProcessDelegete:(id)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (int)setLocalVideoRenderDelegate:(id)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (void)onScreenShareResume:(int)arg1;
- (void)onScreenSharePause:(int)arg1;
- (void)onScreenShareStop:(int)arg1;
- (void)onScreenShareStart;
- (void)onScreenCaptureEncNAL:(id)arg1;
- (void)volumeCallbackWithMicVolume:(long long)arg1 totalVolume:(long long)arg2;
- (void)onEncNAL:(id)arg1;
- (void)apiLog:(id)arg1 toKibana:(BOOL)arg2;
- (void)apiLog:(id)arg1;
- (void)setDebugViewMargin:(id)arg1 margin:(struct NSEdgeInsets)arg2;
- (void)showDebugView:(long long)arg1;
- (void)onLog:(id)arg1 LogLevel:(int)arg2 WhichModule:(id)arg3;
- (void)collectDeviceInfo;
- (void)collectCustomCaptureFps;
- (void)collectStatus;
- (void)stopCollectStatus;
- (void)startCollectStatus;
- (void)appendDashboardLogForUID:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (id)_dateStringForDashboard:(id)arg1;
- (void)sendNotifyEventWithCurrentEncodeType:(unsigned long long)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onTextureDestoryed;
- (void)onCustomPreprocessFrame:(id)arg1 dstFrame:(id)arg2 format:(long long)arg3;
- (void)onRenderVideoFrame:(id)arg1 steamType:(int)arg2;
- (BOOL)onCustomRender:(id)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 rotation:(long long)arg3 pts:(unsigned long long)arg4;
- (id)_userIDFromTinyID:(id)arg1;
- (void)onRequestKeyFrame:(id)arg1 streamType:(int)arg2;
- (BOOL)isStreamForScreenShare:(int)arg1;
- (void)handleStateChange:(id)arg1 newUserInfo:(id)arg2;
- (void)onRecvFirstVideo:(const unsigned long long *)arg1 stream:(int)arg2;
- (void)onRecvFirstAudio:(const unsigned long long *)arg1;
- (void)onVideoConfigChanged:(id)arg1 config:(const struct TXVideoConfig *)arg2;
- (void)onVideoConfigChanged:(const struct TXVideoConfig *)arg1;
- (void)onRecvSEIMsg:(unsigned long long)arg1 streamType:(int)arg2 msg:(const struct TXCopyOnWriteBuffer *)arg3;
- (void)onRecvCustomCmdMsg:(const struct TXSMsgItem *)arg1;
- (void)onSendCustomCmdMsgResult:(unsigned int)arg1 seq:(unsigned int)arg2 errCode:(int)arg3 errMsg:(basic_string_23d93216)arg4;
- (void)onConnectionRecovery;
- (void)onTryToReconnect;
- (void)onConnectionLost;
- (void)onAVMemberExit:(id)arg1;
- (void)onAVMemberEnter:(id)arg1;
- (void)onVideoBlockThresholdChanged:(unsigned int)arg1;
- (void)onIdrFpsChanged:(id)arg1 idrFps:(int)arg2;
- (void)onIdrFpsChanged:(int)arg1;
- (BOOL)setupH265EnabledByServerConfig:(BOOL)arg1;
- (void)onVideoQosChange:(id)arg1 qos:(const struct VideoQosPara *)arg2;
- (void)onVideoQosChange:(const struct VideoQosPara *)arg1;
- (void)onAudioQosChange:(id)arg1 qos:(const struct AudioQosPara *)arg2;
- (void)onAudioQosChange:(const struct AudioQosPara *)arg1;
- (void)onWholeUserListChange:(id)arg1 userExit:(id)arg2;
- (void)onAVUserListChange:(id)arg1 userExit:(id)arg2 userChange:(id)arg3;
- (void)onNetworkTestCallback:(id)arg1 finishedCount:(unsigned int)arg2 totalCount:(unsigned int)arg3;
- (void)onNotify:(unsigned long long)arg1 streamType:(int)arg2 errCode:(int)arg3 errMsg:(basic_string_23d93216)arg4;
- (void)onRequestDownStream:(int)arg1 errMsg:(basic_string_23d93216)arg2 TinyId:(unsigned long long)arg3 Type:(int)arg4;
- (void)onRemoveUpStream:(int)arg1 errMsg:(basic_string_23d93216)arg2 type:(int)arg3;
- (void)onAddUpStream:(int)arg1 errMsg:(basic_string_23d93216)arg2 type:(int)arg3;
- (void)onSwitchRoom:(int)arg1 errMsg:(basic_string_23d93216)arg2;
- (void)onDisconnectOtherRoom:(int)arg1 errMsg:(basic_string_23d93216)arg2;
- (void)onConnectOtherRoom:(basic_string_23d93216)arg1 errCode:(int)arg2 errMsg:(basic_string_23d93216)arg3;
- (void)onKickOut:(int)arg1 errMsg:(basic_string_23d93216)arg2;
- (void)onExitRoom:(int)arg1 errMsg:(basic_string_23d93216)arg2;
- (void)onEnterRoom:(int)arg1 errMsg:(basic_string_23d93216)arg2;
- (void)onRequestAccIP:(int)arg1 errMsg:(basic_string_23d93216)arg2 isAcc:(_Bool)arg3;
- (void)onRequestToken:(int)arg1 errMsg:(basic_string_23d93216)arg2 tinyId:(unsigned long long)arg3 token:(const struct TXCopyOnWriteBuffer *)arg4;
- (void)initNetwork:(unsigned int)arg1 UserID:(basic_string_23d93216)arg2 UserSig:(basic_string_23d93216)arg3;
- (void)asyncRunOnDelegateQueue:(CDUnknownBlockType)arg1;
- (void)runAfter:(int)arg1 block:(CDUnknownBlockType)arg2;
- (void)syncRun:(CDUnknownBlockType)arg1;
- (void)asyncRun:(CDUnknownBlockType)arg1;
- (BOOL)rpsAvailableWithScene:(long long)arg1 encodeSize:(struct CGSize)arg2;
- (void)setScreenVideoSizeWithParam:(id)arg1 customVideoSize:(struct CGSize)arg2;
- (void)setScreenVideoSize:(long long)arg1;
- (void)setEncVideoSizeWithParam:(id)arg1 customVideoSize:(struct CGSize)arg2;
- (struct CGSize)getEncVideoSizeWithParam:(id)arg1 customVideoSize:(struct CGSize)arg2;
- (void)setSmallEncVideoSize;
- (struct CGSize)getSmallEncVideoSize;
- (void)setSubStreamEncVideoSize;
- (void)setEncVideoSize;
- (struct CGSize)getSubStreamEncVideoSize;
- (struct CGSize)getEncVideoSize;
- (void)applyScreenConfig;
- (void)applySubStreamCaptureConfig;
- (void)applyCaptureConfig;
- (void)applyRenderConfig:(id)arg1;
- (long long)captureResolutionForVideoResolution:(long long)arg1;
- (long long)convertRotation:(long long)arg1;
- (void)setVoiceChangerType:(long long)arg1;
- (void)setReverbType:(long long)arg1;
- (void)setBGMPublishVolume:(long long)arg1;
- (void)setBGMPlayoutVolume:(long long)arg1;
- (void)setBGMVolume:(long long)arg1;
- (void)setMicVolumeOnMixing:(long long)arg1;
- (int)setBGMPosition:(long long)arg1;
- (long long)getBGMDuration:(id)arg1;
- (void)resumeBGM;
- (void)pauseBGM;
- (void)stopBGM;
- (void)playBGM:(id)arg1 withBeginNotify:(CDUnknownBlockType)arg2 withProgressNotify:(CDUnknownBlockType)arg3 andCompleteNotify:(CDUnknownBlockType)arg4;
- (long long)legacyBGMID;
- (id)getAudioEffectManager;
- (void)resumeAudioEffect:(int)arg1;
- (void)pauseAudioEffect:(int)arg1;
- (void)setAllAudioEffectsVolume:(int)arg1;
- (void)setAudioEffectVolume:(int)arg1 volume:(int)arg2;
- (void)stopAllAudioEffects;
- (void)stopAudioEffect:(int)arg1;
- (void)playAudioEffect:(id)arg1;
- (long long)newEffectIDFrom:(long long)arg1;
- (void)onAudioEffectFinished:(int)arg1 code:(int)arg2;
- (void)setMixTranscodingConfig:(id)arg1;
- (void)getScreenResolution:(struct TRTCTranscodingConfigInternal *)arg1;
- (void)calcScreenResolutionWidth:(int *)arg1 height:(int *)arg2;
- (void)stopPublishCDNStream;
- (void)startPublishCDNStream:(id)arg1;
- (void)stopPublishing;
- (void)startPublishing:(id)arg1 type:(long long)arg2;
- (void)stopSpeakerDeviceTest;
- (void)startSpeakerDeviceTest:(id)arg1 onVolumeChanged:(CDUnknownBlockType)arg2;
- (void)stopMicDeviceTest;
- (void)startMicDeviceTest:(long long)arg1 testEcho:(CDUnknownBlockType)arg2;
- (BOOL)getCurrentSpeakerDeviceMute;
- (void)setCurrentSpeakerDeviceMute:(BOOL)arg1;
- (int)setCurrentSpeakerDeviceVolume:(long long)arg1;
- (float)getCurrentSpeakerDeviceVolume;
- (int)setCurrentSpeakerDevice:(id)arg1;
- (id)getCurrentSpeakerDevice;
- (id)getSpeakerDevicesList;
- (BOOL)getCurrentMicDeviceMute;
- (void)setCurrentMicDeviceMute:(BOOL)arg1;
- (float)getCurrentMicDeviceVolume;
- (void)setCurrentMicDeviceVolume:(long long)arg1;
- (int)setCurrentMicDevice:(id)arg1;
- (id)getCurrentMicDevice;
- (id)getMicDevicesList;
- (id)getDeviceManager;
- (void)setPriorRemoteVideoStreamType:(long long)arg1;
- (void)setRemoteVideoStreamType:(id)arg1 type:(long long)arg2;
- (void)doSetSmallVideoEncParam:(id)arg1 enable:(BOOL)arg2 customVideoSize:(struct CGSize)arg3;
- (int)enableEncSmallVideoStream:(BOOL)arg1 withQuality:(id)arg2;
- (void)enableAudioInbandFEC:(unsigned int)arg1;
- (void)enableAudioDeviceAutoRestart:(unsigned int)arg1;
- (void)applyAudioServerConfigByUserDefaults;
- (void)enableAudioEarMonitoring:(BOOL)arg1;
- (void)setSystemVolumeType:(long long)arg1;
- (void)setAudioQualityByScene:(long long)arg1;
- (void)stopAudioRecording;
- (int)startAudioRecording:(id)arg1;
- (void)setAVSyncPlaySources:(id)arg1;
- (void)setHeartBeatTimeoutSec:(id)arg1;
- (void)setEncodedDataProcessingListener:(id)arg1;
- (int)setMixedPlayAudioFrameDelegateFormat:(id)arg1;
- (int)setLocalProcessedAudioFrameDelegateFormat:(id)arg1;
- (int)setCapturedRawAudioFrameDelegateFormat:(id)arg1;
- (void)stopAudioVolumeEvaluation;
- (void)startAudioVolumeEvaluation;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (long long)getAudioPlayoutVolume;
- (void)setAudioPlayoutVolume:(long long)arg1;
- (long long)getAudioCaptureVolume;
- (void)setAudioCaptureVolume:(long long)arg1;
- (void)setRemoteAudioVolume:(id)arg1 volume:(int)arg2;
- (void)muteAllRemoteAudio:(BOOL)arg1;
- (void)muteRemoteAudioInternal:(id)arg1 mute:(BOOL)arg2;
- (void)muteRemoteAudio:(id)arg1 mute:(BOOL)arg2;
- (void)setAudioRoute:(long long)arg1;
- (void)muteLocalAudio:(id)arg1 mute:(BOOL)arg2;
- (void)muteLocalAudio:(BOOL)arg1;
- (BOOL)stopLocalAudioInternal;
- (void)stopLocalAudio;
- (void)startLocalAudio;
- (void)startLocalAudio:(long long)arg1;
- (void)setAudioQuality:(long long)arg1;
- (void)onCallExperimentalAPI:(int)arg1 errMsg:(basic_string_23d93216)arg2;
- (void)onDeviceWasDisconnected:(id)arg1;
- (void)onDeviceWasConnected:(id)arg1;
- (long long)_typeOfDevice:(id)arg1;
- (void)stopSpeedTest;
- (void)startSpeedTest:(unsigned int)arg1 userId:(id)arg2 userSig:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (int)resetScreenCaptureRect:(struct CGRect)arg1;
- (int)resumeScreenCapture;
- (int)pauseScreenCapture;
- (int)stopScreenCaptureInternalWithRemoveUpstream:(BOOL)arg1;
- (int)stopScreenCapture;
- (void)startScreenCaptureInternal:(id)arg1 inBigStream:(BOOL)arg2;
- (void)startScreenCapture:(id)arg1 streamType:(long long)arg2 encParam:(id)arg3;
- (void)startScreenCapture:(id)arg1;
- (void)flushScreenCaptureEncodeConfig;
- (void)selectScreenCaptureTarget:(id)arg1 rect:(struct CGRect)arg2 capturesCursor:(BOOL)arg3 highlight:(BOOL)arg4;
- (id)getScreenCaptureSourcesWithThumbnailSize:(struct CGSize)arg1 iconSize:(struct CGSize)arg2;
- (int)setCurrentCameraDevice:(id)arg1;
- (id)getCurrentCameraDevice;
- (id)getCameraDevicesList;
- (void)handleAppStateChangeToBackground:(BOOL)arg1;
- (void)onAppEnterForeground:(id)arg1;
- (void)onAppEnterBackground:(id)arg1;
- (void)setWatermark:(id)arg1 streamType:(long long)arg2 rect:(struct CGRect)arg3;
- (void)setFilterConcentration:(float)arg1;
- (void)setFilter:(id)arg1;
- (void)setBeautyStyle:(long long)arg1 beautyLevel:(long long)arg2 whitenessLevel:(long long)arg3 ruddinessLevel:(long long)arg4;
- (void)setGSensorMode:(long long)arg1;
- (void)setVideoEncoderRotation:(long long)arg1;
- (void)setRemoteSubStreamViewRotation:(id)arg1 rotation:(long long)arg2;
- (void)setRemoteViewRotation:(id)arg1 rotation:(long long)arg2;
- (void)snapshotScreenFrom:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)snapshotRemoteVideo:(id)arg1 isMainStream:(BOOL)arg2 from:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)snapshotLocalVideoFrom:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flushVideoCodec:(unsigned int)arg1 currentVideoCodec:(unsigned int)arg2;
- (void)snapshotVideo:(id)arg1 type:(long long)arg2 sourceType:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)snapshotVideo:(id)arg1 type:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setVideoEncoderMirror:(BOOL)arg1;
- (void)_setLocalViewMirror:(long long)arg1;
- (void)setLocalViewMirror:(BOOL)arg1;
@property(readonly, nonatomic) BOOL slidingFilterEnabled;
@property(readonly, nonatomic) BOOL enterprisePituEnabled;
- (id)getBeautyManager;
- (BOOL)shouldMuteVideo;
- (void)enableH265EncodeByPrivateAPI:(BOOL)arg1;
- (BOOL)enableH265EncodeByParams:(id)arg1;
- (void)enableBlackStream:(BOOL)arg1;
- (BOOL)enableBlackStreamByParams:(id)arg1;
- (void)setupBlackStreamSize:(struct CGSize)arg1;
- (void)setLocalViewRotation:(long long)arg1;
- (void)setRemoteSubStreamViewFillMode:(id)arg1 mode:(long long)arg2;
- (void)setRemoteViewFillMode:(id)arg1 mode:(long long)arg2;
- (void)setLocalViewFillMode:(long long)arg1;
- (void)enableLocalVideoInternal:(BOOL)arg1;
- (void)resetFeelingBlockReport;
- (void)muteAllRemoteVideoStreams:(BOOL)arg1;
- (void)muteRemoteVideoStreamInternal:(id)arg1 mute:(BOOL)arg2;
- (void)muteRemoteVideoStream:(id)arg1 mute:(BOOL)arg2;
- (void)muteLocalVideo:(id)arg1 mute:(BOOL)arg2;
- (void)setVideoMuteImage:(id)arg1 fps:(long long)arg2;
- (void)muteLocalVideo:(BOOL)arg1;
- (void)setNetworkQosParam:(id)arg1;
- (void)setSubStreamMixVolume:(long long)arg1;
- (void)setSystemAudioLoopbackVolume:(unsigned int)arg1;
- (void)stopSystemAudioLoopback;
- (void)startSystemAudioLoopback;
- (void)removeAllIncludedShareWindows;
- (void)removeIncludedShareWindow:(long long)arg1;
- (void)addIncludedShareWindow:(long long)arg1;
- (void)removeAllExcludedShareWindows;
- (void)removeExcludedShareWindow:(long long)arg1;
- (void)addExcludedShareWindow:(long long)arg1;
- (void)dosetSubStreamEncoderParam:(id)arg1 customVideoSize:(struct CGSize)arg2;
- (void)setSubStreamEncoderParam:(id)arg1;
- (void)doSetVideoEncoderParam:(id)arg1 customVideoSize:(struct CGSize)arg2;
- (void)setVideoEncoderParam:(id)arg1;
- (void)stopAllRemoteView;
- (BOOL)stopRemoteRenderInternal:(id)arg1 onlyVideo:(BOOL)arg2;
- (void)cancelSubVideoDownStream:(id)arg1 muteStream:(_Bool)arg2;
- (void)cancelMainVideoDownStream:(id)arg1 muteStream:(_Bool)arg2;
- (void)stopRemoteView:(id)arg1;
- (void)updateRemoteView:(id)arg1 streamType:(long long)arg2 forUser:(id)arg3;
- (BOOL)stopRemoteScreenRenderInternal:(id)arg1 onlyVideo:(BOOL)arg2;
- (void)stopRemoteSubStreamView:(id)arg1;
- (BOOL)startRemoteScreenRenderInternal:(id)arg1 view:(id)arg2;
- (void)startRemoteSubStreamView:(id)arg1 view:(id)arg2;
- (void)_requestDownStream:(id)arg1 streamType:(int)arg2 setReqTick:(BOOL)arg3;
- (BOOL)startRemoteRenderInternal:(id)arg1 view:(id)arg2;
- (id)createDefaultRemoteSubRender;
- (id)createDefaultRemoteRender;
- (id)createDefaultUserInfo:(id)arg1;
- (void)startRemoteView:(id)arg1 view:(id)arg2;
- (void)setRemoteRenderParams:(id)arg1 streamType:(long long)arg2 params:(id)arg3;
- (void)stopRemoteView:(id)arg1 streamType:(long long)arg2;
- (void)startRemoteView:(id)arg1 streamType:(long long)arg2 view:(id)arg3;
- (void)setLocalRenderParams:(id)arg1;
- (void)stopPreviewInternal;
- (void)stopLocalPreview;
- (void)updateLocalView:(id)arg1;
- (void)stopCameraDeviceTest;
- (void)startCameraDeviceTestInView:(id)arg1;
- (void)startLocalPreview:(id)arg1;
- (void)switchRoom:(id)arg1;
- (BOOL)isNumericRoom:(unsigned int)arg1;
- (void)destroySubCloud:(id)arg1;
- (id)createSubCloud;
- (void)setDefaultStreamRecvMode:(BOOL)arg1 video:(BOOL)arg2;
- (void)disconnectOtherRoom;
- (void)connectOtherRoom:(id)arg1;
- (void)clearMuteStates;
- (void)exitRoomInternalWithStopCapture:(BOOL)arg1 reqExit:(BOOL)arg2 reason:(id)arg3;
- (void)exitRoom;
- (void)onTerminate:(id)arg1;
- (void)switchRole:(long long)arg1;
- (void)makeStreamsEffectiveAfterNetworkInited;
- (void)enterRoom:(id)arg1 appScene:(long long)arg2;
- (void)extractBizInfoAndProcess:(id *)arg1 key:(id)arg2 value:(id *)arg3 remove:(BOOL)arg4;
- (long long)calcNetworkQualityWithLoss:(unsigned int)arg1 rtt:(unsigned int)arg2;
- (id)remoteStatistcsWithStreamType:(int)arg1 tinyId:(id)arg2;
- (id)locaStatisticsWithStreamType:(int)arg1;
- (void)_onStatisticsTimer;
- (void)startStatistics;
- (void)stopStatistics;
- (void)tryStartStatistics;
- (BOOL)sendSEIMsg:(id)arg1 repeatCount:(int)arg2;
- (BOOL)sendCustomCmdMsg:(long long)arg1 data:(id)arg2 reliable:(BOOL)arg3 ordered:(BOOL)arg4;
@property(readonly, nonatomic) struct AudioEngine *audioEngine;
- (void)updateExistsTRTCFrameworkType;
- (void)identifyTRTCFrameworkType;
- (id)createCollectStatisticTimerQueue;
- (id)createStatisticTimerQueue;
- (id)createQueue;
- (void)dealloc;
- (void)releaseAudioCapture;
- (id)initInternal:(id)arg1;
- (id)initInternal;
- (void)init:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

