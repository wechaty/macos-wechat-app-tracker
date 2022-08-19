//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "AccountServiceExt-Protocol.h"
#import "IBetaMgrExt-Protocol.h"
#import "MMChatBackupInvitationExt-Protocol.h"

@class MMTextField, MMTrackingButton, MMView, NSImageView, NSString, NSView, RBLPopover, RBLPopoverBackgroundView;

@interface MMSettingMenuViewController : NSViewController <IBetaMgrExt, AccountServiceExt, MMChatBackupInvitationExt>
{
    RBLPopover *_rblPopover;
    RBLPopoverBackgroundView *_rblBackgroundView;
    MMTrackingButton *_chatBackupBtn;
    NSImageView *_chatBackupBadgeView;
    MMTrackingButton *_settingBtn;
    NSImageView *_settingBadgeView;
    MMTrackingButton *_feedbackBtn;
    MMTrackingButton *_lockBtn;
    MMTextField *_settingTitle;
    MMTextField *_chatBackupTitle;
    MMTextField *_feedbackTitle;
    MMTextField *_lockTitle;
    MMView *_overLayView;
    NSView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) MMView *overLayView; // @synthesize overLayView=_overLayView;
@property(retain, nonatomic) MMTextField *lockTitle; // @synthesize lockTitle=_lockTitle;
@property(retain, nonatomic) MMTextField *feedbackTitle; // @synthesize feedbackTitle=_feedbackTitle;
@property(retain, nonatomic) MMTextField *chatBackupTitle; // @synthesize chatBackupTitle=_chatBackupTitle;
@property(retain, nonatomic) MMTextField *settingTitle; // @synthesize settingTitle=_settingTitle;
@property(retain, nonatomic) MMTrackingButton *lockBtn; // @synthesize lockBtn=_lockBtn;
@property(retain, nonatomic) MMTrackingButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(retain, nonatomic) NSImageView *settingBadgeView; // @synthesize settingBadgeView=_settingBadgeView;
@property(retain, nonatomic) MMTrackingButton *settingBtn; // @synthesize settingBtn=_settingBtn;
@property(retain, nonatomic) NSImageView *chatBackupBadgeView; // @synthesize chatBackupBadgeView=_chatBackupBadgeView;
@property(retain, nonatomic) MMTrackingButton *chatBackupBtn; // @synthesize chatBackupBtn=_chatBackupBtn;
@property(retain, nonatomic) RBLPopoverBackgroundView *rblBackgroundView; // @synthesize rblBackgroundView=_rblBackgroundView;
@property(retain, nonatomic) RBLPopover *rblPopover; // @synthesize rblPopover=_rblPopover;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)onUserLogout;
- (void)onAcceptMigrateInvitation;
- (void)onRecvMigrateInvitation;
- (void)onClearUnreadBetaPackage;
- (void)onClearUnreadBetaInvitation;
- (void)onRecvBetaPackage:(id)arg1;
- (void)onRecvBetaInvitation:(id)arg1;
- (void)showFeedbackWindow:(id)arg1;
- (void)showChatBackupWindow:(id)arg1;
- (void)showSettingWindow:(id)arg1;
- (void)appResignedActive:(id)arg1;
- (void)close;
- (double)getAdjustContentLength;
- (id)generateTrackingButton;
- (id)generateTitleTextField;
- (void)showSettingRedDotIfNeeded;
- (void)relayoutSubViews;
- (void)layoutSubviews;
- (BOOL)isShown;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)setupPopoverView;
- (void)dealloc;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

