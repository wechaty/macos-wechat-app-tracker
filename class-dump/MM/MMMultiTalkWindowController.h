//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMVoipBaseWindowController.h"

#import "MMVoIPShareScreenServiceExt-Protocol.h"
#import "MultiTalkMgrExt-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MMTimer, MultiTalkGroup, MultiTalkGroupMember, NSArray, NSDictionary, NSMutableDictionary, NSScrollView, NSString, NSTextField, NSView, WCContactData;
@protocol MMMultiTalkWindowDelegate;

@interface MMMultiTalkWindowController : MMVoipBaseWindowController <NSWindowDelegate, MultiTalkMgrExt, MMVoIPShareScreenServiceExt>
{
    BOOL _isFullScreen;
    BOOL _m_talkReady;
    BOOL _m_hasStartTimerView;
    BOOL _m_deviceLaunchSuccess;
    BOOL _m_closeWindowAnimating;
    unsigned int _m_messageId;
    id <MMMultiTalkWindowDelegate> _m_multiTalkDelegate;
    MultiTalkGroup *_m_group;
    NSString *_masterUserName;
    NSMutableDictionary *_dictForAvatarMemberView;
    NSArray *_columnInRow;
    NSView *_renderViewContainer;
    NSScrollView *_renderViewScrollView;
    NSView *_renderStackView;
    NSTextField *_tipsLabel;
    MMTimer *_m_checkTalkingTimer;
    MMTimer *_m_updateMessageTimer;
    MMTimer *_m_checkQualityTimer;
    MMTimer *_m_timeOutTimer;
    WCContactData *_m_contactInviteMe;
    MultiTalkGroupMember *_m_selfMember;
    NSDictionary *_m_videoMemberInfo;
    NSArray *_m_memberTalkArray;
    NSDictionary *_m_memberTalkingDic;
    NSArray *_m_memberWaitList;
    NSArray *_m_memberDisplayBigHeadList;
    NSArray *_m_contactWaitList;
    NSArray *_m_contactArrayOther;
    unsigned long long _m_mode;
    unsigned long long _m_layout;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_layout; // @synthesize m_layout=_m_layout;
@property(nonatomic) unsigned long long m_mode; // @synthesize m_mode=_m_mode;
@property(retain, nonatomic) NSArray *m_contactArrayOther; // @synthesize m_contactArrayOther=_m_contactArrayOther;
@property(retain, nonatomic) NSArray *m_contactWaitList; // @synthesize m_contactWaitList=_m_contactWaitList;
@property(retain, nonatomic) NSArray *m_memberDisplayBigHeadList; // @synthesize m_memberDisplayBigHeadList=_m_memberDisplayBigHeadList;
@property(retain, nonatomic) NSArray *m_memberWaitList; // @synthesize m_memberWaitList=_m_memberWaitList;
@property(retain, nonatomic) NSDictionary *m_memberTalkingDic; // @synthesize m_memberTalkingDic=_m_memberTalkingDic;
@property(retain, nonatomic) NSArray *m_memberTalkArray; // @synthesize m_memberTalkArray=_m_memberTalkArray;
@property(retain, nonatomic) NSDictionary *m_videoMemberInfo; // @synthesize m_videoMemberInfo=_m_videoMemberInfo;
@property(retain, nonatomic) MultiTalkGroupMember *m_selfMember; // @synthesize m_selfMember=_m_selfMember;
@property(nonatomic) unsigned int m_messageId; // @synthesize m_messageId=_m_messageId;
@property(retain, nonatomic) WCContactData *m_contactInviteMe; // @synthesize m_contactInviteMe=_m_contactInviteMe;
@property(retain, nonatomic) MMTimer *m_timeOutTimer; // @synthesize m_timeOutTimer=_m_timeOutTimer;
@property(retain, nonatomic) MMTimer *m_checkQualityTimer; // @synthesize m_checkQualityTimer=_m_checkQualityTimer;
@property(retain, nonatomic) MMTimer *m_updateMessageTimer; // @synthesize m_updateMessageTimer=_m_updateMessageTimer;
@property(retain, nonatomic) MMTimer *m_checkTalkingTimer; // @synthesize m_checkTalkingTimer=_m_checkTalkingTimer;
@property(nonatomic) BOOL m_closeWindowAnimating; // @synthesize m_closeWindowAnimating=_m_closeWindowAnimating;
@property(nonatomic) BOOL m_deviceLaunchSuccess; // @synthesize m_deviceLaunchSuccess=_m_deviceLaunchSuccess;
@property(nonatomic) BOOL m_hasStartTimerView; // @synthesize m_hasStartTimerView=_m_hasStartTimerView;
@property(nonatomic) BOOL m_talkReady; // @synthesize m_talkReady=_m_talkReady;
@property(retain, nonatomic) NSTextField *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) NSView *renderStackView; // @synthesize renderStackView=_renderStackView;
@property(retain, nonatomic) NSScrollView *renderViewScrollView; // @synthesize renderViewScrollView=_renderViewScrollView;
@property(retain, nonatomic) NSView *renderViewContainer; // @synthesize renderViewContainer=_renderViewContainer;
@property(retain, nonatomic) NSArray *columnInRow; // @synthesize columnInRow=_columnInRow;
@property(retain, nonatomic) NSMutableDictionary *dictForAvatarMemberView; // @synthesize dictForAvatarMemberView=_dictForAvatarMemberView;
@property(copy, nonatomic) NSString *masterUserName; // @synthesize masterUserName=_masterUserName;
@property(retain, nonatomic) MultiTalkGroup *m_group; // @synthesize m_group=_m_group;
@property(nonatomic) __weak id <MMMultiTalkWindowDelegate> m_multiTalkDelegate; // @synthesize m_multiTalkDelegate=_m_multiTalkDelegate;
- (void)realCloseShareScreen;
- (void)realOpenShareScreen;
- (void)didUserCancelScreenCapture:(unsigned int)arg1;
- (void)didUserPauseScreenCapture;
- (void)didUserSelectedScreenCaptureSourceInfo:(id)arg1;
- (void)onMultiTalkMgrChangeToUnReachable;
- (void)onMultiTalkMgrOpenVideoServerNotAllowed;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extDic:(id)arg2;
- (void)onAddMultiTalkMemberResult:(BOOL)arg1 groupInfo:(id)arg2;
- (void)onMultiTalkMgrSessionStartComplete:(unsigned long long)arg1;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onErr:(int)arg1;
- (void)onSpeakerStateChange:(BOOL)arg1;
- (void)onMuteStateChange:(BOOL)arg1;
- (void)onMultiTalkMsgMemberNil:(id)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkReady;
- (void)onMemberChange:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onInviteOrAcceptTimeout:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onInviteMultiTalk:(id)arg1;
- (void)clearTalkingWording;
- (void)checkTalkMember;
- (void)initCheckTalkingTimer;
- (void)getMemberQualityInfoList;
- (void)initCheckQualityTimer;
- (void)updateMessageDuration;
- (void)initUpdateMessageTimer;
- (void)timeOutLogic;
- (void)initTimeOutTimer;
- (void)tryStartTimerView;
- (void)onAddMemberBtnClick;
- (void)onShareScreenBtnClick;
- (void)closeLocalCameraForMultiTalk:(id)arg1;
- (void)realHandleCameraStatus;
- (void)updateLocalCameraStatus;
- (void)onOpenCameraButtonClick;
- (void)switchAudioOutput;
- (void)switchAudioInput;
- (void)switchCamera;
- (void)realCallHangupDelegate;
- (void)callHangupDelegate;
- (void)endCall;
- (void)endCallByCancel;
- (void)cancelCall;
- (void)fadeOutAndCloseWindow;
- (void)closeWindowAnimated:(BOOL)arg1;
- (void)updateVideoMemberInfo;
- (void)updateMemberDisplayBigHeadList;
- (void)updateMemberWaitList;
- (void)updateContactWaitList;
- (void)updateContactOtherList;
- (void)updateMemberTalkingList;
- (void)switchMasterGroupMember:(id)arg1;
- (void)switchToGridLayout:(id)arg1;
- (void)switchToFlowLayout:(id)arg1;
- (void)relayoutMemberViews:(BOOL)arg1 withMember:(id)arg2;
- (void)layoutFlowAvatarMemberRenderViewsWithAnimated:(BOOL)arg1;
- (void)layoutAvatarMemberRenderViewsWithAnimated:(BOOL)arg1;
- (void)relayoutWindowFrameAndRenderViewsIfNeeded:(BOOL)arg1;
- (void)reloadAvatarMemberRenderViews;
- (void)setUpAvatarMemberRenderViews;
- (void)layoutButtonContainer;
- (struct CGSize)getButtonSize;
- (void)layoutRenderViewContainer;
- (void)addEffectiveViewAboveRenderView;
- (void)layoutContentView;
- (id)getMemberRenderView:(id)arg1;
- (BOOL)isShareScreenMemberUserName:(id)arg1;
- (BOOL)isVideoMemberUserName:(id)arg1;
- (void)checkIfOnePerson;
- (BOOL)isMemberReachLimit;
- (BOOL)isTheSameWithGroup:(id)arg1;
- (void)timerFunction;
- (void)updateTipsLabel:(id)arg1 widthDuration:(double)arg2;
- (void)updateTipsLabel:(id)arg1;
- (void)showCurrentTips:(id)arg1;
- (void)updateGroupInfo:(id)arg1;
- (void)updateMessageId:(unsigned int)arg1;
- (id)groupInfo;
- (long long)getTotalCount;
- (void)setUpModel;
- (void)loadContent;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowDidResize:(id)arg1;
- (void)windowDidLoad;
- (void)windowWillEnterFullScreenAction:(id)arg1;
- (void)windowDidExitFullScreenAction:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)stopPlaySound;
- (void)playSound;
- (void)calAvatarViewsLayout;
- (struct CGSize)miniSize;
- (struct CGSize)maxSize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

