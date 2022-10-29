//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IVOIPSyncExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSString, VOIPModeSwitchStateMachine;

@interface VOIPModeSwitchMgr : MMService <IVOIPSyncExt, MMService>
{
    BOOL mIsWeakSessionActive;
    BOOL mIsSessionActive;
    BOOL mIsLocalVideoClosed;
    BOOL mIsRemoteVideoClosed;
    BOOL mIsMicClosed;
    BOOL mIsVoiceMode;
    BOOL mIsTalkingWithOldVersion;
    int mRoomId;
    long long mRoomKey;
    BOOL m_isActiveByCaller;
    VOIPModeSwitchStateMachine *mStateMachine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VOIPModeSwitchStateMachine *mStateMachine; // @synthesize mStateMachine;
@property(nonatomic) BOOL m_isActiveByCaller; // @synthesize m_isActiveByCaller;
- (void)ChangeToAudioMode;
- (BOOL)isVoiceMode;
- (BOOL)isTalkingWithOldVersion;
- (BOOL)isMicClosed;
- (int)CurrentStatus;
- (void)setRemoteVideoClosed:(BOOL)arg1;
- (void)setLocalVideoClosed:(BOOL)arg1;
- (BOOL)isRemoteVideoClosed;
- (BOOL)isLocalVideoClosed;
- (void)StopSession;
- (void)VideoStatusChange:(BOOL)arg1 bSync:(BOOL)arg2;
- (void)VideoStatusChange:(BOOL)arg1;
- (void)CloseLocalMic;
- (void)OpenLocalMic;
- (void)OpenLocalVideoMode;
- (void)OpenLocalEarMode;
- (void)OpenLocalEarModeNotPush;
- (void)VideoSwitchToVoiceMode;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (void)OpenLocalEarModeForBadNetwork;
- (void)OpenLocalEarModeFor2G;
- (void)StartSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2;
- (void)StartWeakSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)SetRemoteVideoEnable:(BOOL)arg1;
- (void)SetLocalVideoEnable:(BOOL)arg1;
- (void)CallBackForModeStatus:(int)arg1;
- (void)SetAudioSpeakerPhone:(BOOL)arg1;
- (void)PushControlStatusToRemote:(unsigned int)arg1;
- (void)OnGotRemoteControlStatus:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

