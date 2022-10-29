//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "AVCaptureDeviceChangedExt-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"
#import "IVOIPExt-Protocol.h"
#import "IVOIPModeSwitchExt-Protocol.h"
#import "IVOIPVideoDeviceDelegate-Protocol.h"
#import "MMVoIPButtonDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class AVAudioPlayer, MMTimer, MMVoIPDeviceController, MMVoipBaseWindow, MessageData, NSImageView, NSPopover, NSString, NSToolbar, NSView, WCContactData;
@protocol MMVoipBaseWindowControllerDelegate;

@interface MMVoipBaseWindowController : NSWindowController <NSWindowDelegate, CAAnimationDelegate, NSPopoverDelegate, AVCaptureDeviceChangedExt, MMVoIPButtonDelegate, IVOIPExt, IVOIPModeSwitchExt, IVOIPVideoDeviceDelegate>
{
    BOOL _hasHanguped;
    BOOL _isSelfSwitchToVoice;
    BOOL _hasStopBellSound;
    BOOL _forceToVoice;
    BOOL _isConnectOK;
    BOOL _isMute;
    BOOL _isSpeaker;
    BOOL _isStick;
    BOOL _isEndCall;
    BOOL _isFromUN;
    BOOL _isAnswerFromUN;
    BOOL _isMultiTalk;
    BOOL _isCaller;
    BOOL _isOpenWithCamera;
    BOOL _isNeedRestartAudioInputDevice;
    BOOL _isNeedRestartAudioOutputDevice;
    BOOL _isFinishChangedVideoStatus;
    BOOL _closeCameraBeforeConnectOK;
    int _status;
    int _viewInitMode;
    unsigned int _mStartTalkingTime;
    int _orienOffset;
    int _currentMode;
    int _videoStatus;
    id <MMVoipBaseWindowControllerDelegate> _delegate;
    NSPopover *_popover;
    MMVoIPDeviceController *_deviceViewController;
    MessageData *_message;
    WCContactData *_contact;
    MMTimer *_actingTimer;
    MMTimer *_netStatusUpdateTimer;
    AVAudioPlayer *_player;
    double _forceToRotateDegrees;
    double _lastDegrees;
    NSToolbar *_toolBar;
    NSImageView *_maskHoverImageView;
    double _lastEnableHoverPopoverInterval;
    double _enableButtonClickInterval;
    NSView *_visualEffectContainerView;
    id _monitorMouseEvent;
    double _lastPopoverDismiss;
}

- (void).cxx_destruct;
@property(nonatomic) double lastPopoverDismiss; // @synthesize lastPopoverDismiss=_lastPopoverDismiss;
@property(retain, nonatomic) id monitorMouseEvent; // @synthesize monitorMouseEvent=_monitorMouseEvent;
@property(nonatomic) BOOL closeCameraBeforeConnectOK; // @synthesize closeCameraBeforeConnectOK=_closeCameraBeforeConnectOK;
@property(retain, nonatomic) NSView *visualEffectContainerView; // @synthesize visualEffectContainerView=_visualEffectContainerView;
@property(nonatomic) double enableButtonClickInterval; // @synthesize enableButtonClickInterval=_enableButtonClickInterval;
@property(nonatomic) double lastEnableHoverPopoverInterval; // @synthesize lastEnableHoverPopoverInterval=_lastEnableHoverPopoverInterval;
@property(retain, nonatomic) NSImageView *maskHoverImageView; // @synthesize maskHoverImageView=_maskHoverImageView;
@property(nonatomic) BOOL isFinishChangedVideoStatus; // @synthesize isFinishChangedVideoStatus=_isFinishChangedVideoStatus;
@property(nonatomic) int videoStatus; // @synthesize videoStatus=_videoStatus;
@property(nonatomic) BOOL isNeedRestartAudioOutputDevice; // @synthesize isNeedRestartAudioOutputDevice=_isNeedRestartAudioOutputDevice;
@property(nonatomic) BOOL isNeedRestartAudioInputDevice; // @synthesize isNeedRestartAudioInputDevice=_isNeedRestartAudioInputDevice;
@property(nonatomic) BOOL isOpenWithCamera; // @synthesize isOpenWithCamera=_isOpenWithCamera;
@property(retain, nonatomic) NSToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(nonatomic) BOOL isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) int currentMode; // @synthesize currentMode=_currentMode;
@property(nonatomic) double lastDegrees; // @synthesize lastDegrees=_lastDegrees;
@property(nonatomic) int orienOffset; // @synthesize orienOffset=_orienOffset;
@property(nonatomic) double forceToRotateDegrees; // @synthesize forceToRotateDegrees=_forceToRotateDegrees;
@property(nonatomic) BOOL isMultiTalk; // @synthesize isMultiTalk=_isMultiTalk;
@property(nonatomic) BOOL isAnswerFromUN; // @synthesize isAnswerFromUN=_isAnswerFromUN;
@property(nonatomic) BOOL isFromUN; // @synthesize isFromUN=_isFromUN;
@property(nonatomic) unsigned int mStartTalkingTime; // @synthesize mStartTalkingTime=_mStartTalkingTime;
@property(nonatomic) BOOL isEndCall; // @synthesize isEndCall=_isEndCall;
@property(nonatomic) BOOL isStick; // @synthesize isStick=_isStick;
@property(nonatomic) BOOL isSpeaker; // @synthesize isSpeaker=_isSpeaker;
@property(nonatomic) BOOL isMute; // @synthesize isMute=_isMute;
@property(nonatomic) BOOL isConnectOK; // @synthesize isConnectOK=_isConnectOK;
@property(nonatomic) BOOL forceToVoice; // @synthesize forceToVoice=_forceToVoice;
@property(nonatomic) int viewInitMode; // @synthesize viewInitMode=_viewInitMode;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) BOOL hasStopBellSound; // @synthesize hasStopBellSound=_hasStopBellSound;
@property(nonatomic) BOOL isSelfSwitchToVoice; // @synthesize isSelfSwitchToVoice=_isSelfSwitchToVoice;
@property(nonatomic) BOOL hasHanguped; // @synthesize hasHanguped=_hasHanguped;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) MMTimer *netStatusUpdateTimer; // @synthesize netStatusUpdateTimer=_netStatusUpdateTimer;
@property(retain, nonatomic) MMTimer *actingTimer; // @synthesize actingTimer=_actingTimer;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MessageData *message; // @synthesize message=_message;
@property(retain, nonatomic) MMVoIPDeviceController *deviceViewController; // @synthesize deviceViewController=_deviceViewController;
@property(retain, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak id <MMVoipBaseWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupMouseEventMonitor;
- (void)delayDismissPopover;
- (void)delayShowPopover:(id)arg1;
- (void)trackStatusChanged:(BOOL)arg1 sender:(id)arg2;
- (void)onDeviceStatusChanged:(int)arg1;
- (void)showPopoverInView:(id)arg1;
- (BOOL)isPopoverShown;
- (void)hidePopover;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)openAudioOutputPopover;
- (void)onSwitchScreenButtonClick:(id)arg1;
- (void)openCameraPopover;
- (void)openAudioInputPopover;
- (void)closeAudioDeviceAuto:(id)arg1;
- (void)closeLocalCameraForMultiTalk:(id)arg1;
- (void)closePopover;
- (void)deviceCountChanged;
- (void)switchAudioOutput;
- (void)switchAudioInput;
- (void)switchCamera;
- (void)checkDeviceAuthorized;
- (void)updateAvatarAndNamelabel;
- (void)updateAvatarAndNamelabelFrame;
- (void)addEffectiveViewBelowRenderView;
- (BOOL)needAddEffectiveViewBelowRenderView;
- (void)relayoutRelateViewInVideoStatus;
- (void)checkVideoStatus;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)onVoIPExtRemoteCaptureResume;
- (void)onVoIPExtRemoteTerminate;
- (void)updateLocalCameraStatus;
- (void)closeLocalCamera;
- (void)onCurrentCaptureDeviceChanged:(id)arg1 withType:(int)arg2 withScene:(int)arg3;
- (void)onCaptureDeviceCountChanged;
- (void)onCaptureDeviceChanged:(id)arg1 withType:(int)arg2;
- (void)formVOIPUserNotification;
- (void)formVOIPMessageWhenCallFromMyself:(BOOL)arg1;
- (void)renderOnOppositeRenderLayer:(id)arg1 Degree:(float)arg2;
- (void)renderOnPreviewRenderLayerWith:(id)arg1;
- (void)rotateLayerToFillWindow;
- (int)getVideoOrientationWithDegrees:(double)arg1;
- (void)onOpenCameraButtonClick;
- (void)realHandleSpeakerButtonClick;
- (void)onSpeakerButtonClick:(id)arg1;
- (void)setAudioOutputStatus:(BOOL)arg1;
- (void)setAudioInputStatus:(BOOL)arg1;
- (void)realHandleMuteButtonClick;
- (void)onMuteButtonClick:(id)arg1;
- (void)setWindowStick:(id)arg1;
- (void)startCamera;
- (void)autoUpdateMainStatusStringAndDotViewImage;
- (void)acceptVoipInvite;
- (void)switchToVoiceChat;
- (void)endCall;
- (void)cancelCall;
- (void)cancelMakeControlViewSubViewVisiable;
- (void)delayMakeControlViewSubViewsHidden;
- (void)makeControlViewSubViewsHidden:(BOOL)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)isInitVideoMode;
- (BOOL)isVideoMode;
- (void)layoutDeviceButtonWithMode:(int)arg1;
- (void)layoutButtonContainerAnimate:(BOOL)arg1;
- (void)layoutVoiceModeAnimateDotViewWithMode:(int)arg1;
- (void)layoutCallTimeLabelWithMode:(int)arg1;
- (void)layoutNameLabelWithContact:(id)arg1 andMode:(int)arg2;
- (void)layoutHDAvatarWithContact:(id)arg1 andMode:(int)arg2;
- (void)LayoutNameLabelAndCallTimeLabelWithAnimateAvatar:(id)arg1 andMode:(int)arg2;
- (void)layoutAvatarWithContact:(id)arg1 andMode:(int)arg2;
- (void)layoutSwitchDeviceIndicator;
- (void)layoutActionBtnWithMode:(int)arg1;
- (void)updateNetStatus;
- (void)clearNetStatusUpdateTimer;
- (void)startNetStatusTimerToUpdateNetSatus;
- (void)clearActingTimer;
- (void)startActingTimerToUpdateStatusLabelAndDotView;
- (void)showCurrentTips:(id)arg1;
- (void)hidePreviousTips;
- (void)layoutTipsLabelWithMode:(int)arg1;
- (void)layoutRelatedControlsWithContact:(id)arg1 andSetCurrentMode:(int)arg2;
- (void)layoutToolbarContainer;
- (void)makeHangUpBtnUnavailable;
- (void)makeRotateBtnUnavailable:(BOOL)arg1;
- (void)bringSublayerToFront:(id)arg1;
- (void)swapPreviewRenderLayerAndOppsiteRenderLayer;
- (void)changeMovableLayerFrameWhenRotated;
- (void)changeRenderLayerDisplayFromW16H9ToW9H16OnFullScreen;
- (void)changeRenderLayerDisplayFromW9H16ToW16H9OnFullScreen;
- (void)changeRenderLayerDisplayNotOnFullScreen;
- (void)playEndingSound;
- (void)resumePlaySound;
- (void)pausePlaySound;
- (void)stopPlaySound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (struct CGSize)getButtonSize;
- (void)fadeOutWindow:(CDUnknownBlockType)arg1;
- (void)adjustFrameOriginDependOnWechatMainWindow;
- (void)setWindowAndContentFrame:(struct CGRect)arg1;
- (void)orderFrontWindow;
- (void)hideWindow;
- (void)didFinishClosing:(BOOL)arg1;
- (void)willStartClosing:(BOOL)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)closeWindowAnimated:(BOOL)arg1;
- (void)showWindowAnimated:(BOOL)arg1;
- (void)windowWillEnterFullScreenAction:(id)arg1;
- (void)windowDidExitFullScreenAction:(id)arg1;
- (void)loadContent;
- (id)title;
- (struct CGSize)minimumSize;
- (void)adjustTitleBarButtons:(BOOL)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) MMVoipBaseWindow *window; // @dynamic window;

@end

