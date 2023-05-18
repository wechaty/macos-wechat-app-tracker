//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt-Protocol.h"
#import "MMService-Protocol.h"
#import "NSUserNotificationCenterDelegate-Protocol.h"

@class AVAudioPlayer, NSString, NSUserDefaults;

@interface MMNotificationService : MMService <IMessageExt, NSUserNotificationCenterDelegate, MMService>
{
    AVAudioPlayer *_audioPlayer;
    NSUserDefaults *_notificationUserDefaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *notificationUserDefaults; // @synthesize notificationUserDefaults=_notificationUserDefaults;
@property(retain) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)deleteNotificationByID:(id)arg1;
- (void)deleteNotificationByChatName:(id)arg1;
- (id)getNotificationContentWithMsgData:(id)arg1;
- (id)getNotificationTitleWithContact:(id)arg1;
- (BOOL)playNewMsgNotificationVoice;
- (void)onDelAllMsg:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)onNewMsgNotification:(id)arg1 msgData:(id)arg2;
- (void)removeAllDeliveredNotifications;
- (void)postNotificationWithTitle:(id)arg1 content:(id)arg2;
- (void)dealloc;
- (void)onServiceTerminate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

