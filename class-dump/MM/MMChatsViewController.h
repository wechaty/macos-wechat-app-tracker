//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseChatsViewController.h"

#import "IMMSessionMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "NSSearchFieldDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "OpenIMResourceMgrExt-Protocol.h"

@class MMBrandChatsViewController, MMChatDetailSplitViewController, MMChatMessageViewController, MMChatNavigationController, MMComposeInputViewController, MMSessionListViewController, MMView, NSButton, NSProgressIndicator, NSString, _TtC6WeChat18ChatListBannerView;

@interface MMChatsViewController : MMBaseChatsViewController <NSTextFieldDelegate, NSSearchFieldDelegate, IMMSessionMgrExt, IMessageExt, OpenIMResourceMgrExt>
{
    long long _lastSelectedRow;
    NSString *_selectedUserName;
    MMChatDetailSplitViewController *_chatDetailSplitViewController;
    MMBrandChatsViewController *_brandChatsViewController;
    _TtC6WeChat18ChatListBannerView *_bannerView;
    MMSessionListViewController *_sessionListViewController;
    MMChatNavigationController *_ccNavigationController;
    NSProgressIndicator *_loadingView;
    NSButton *_startNewChatButton;
    MMView *_containerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSButton *startNewChatButton; // @synthesize startNewChatButton=_startNewChatButton;
@property(nonatomic) __weak NSProgressIndicator *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMChatNavigationController *ccNavigationController; // @synthesize ccNavigationController=_ccNavigationController;
@property(retain, nonatomic) MMSessionListViewController *sessionListViewController; // @synthesize sessionListViewController=_sessionListViewController;
@property(retain, nonatomic) _TtC6WeChat18ChatListBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) MMBrandChatsViewController *brandChatsViewController; // @synthesize brandChatsViewController=_brandChatsViewController;
@property(retain, nonatomic) MMChatDetailSplitViewController *chatDetailSplitViewController; // @synthesize chatDetailSplitViewController=_chatDetailSplitViewController;
@property(retain, nonatomic) NSString *selectedUserName; // @synthesize selectedUserName=_selectedUserName;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
- (void)OpenIMResourceWordingIds:(id)arg1 didFinish:(id)arg2;
- (void)onSessionScrollRowToVisible:(id)arg1;
- (void)onSessionReordered;
- (void)onSessionsUnfolded:(id)arg1 isAnimated:(BOOL)arg2;
- (void)onSessionsFolded:(id)arg1 isAnimated:(BOOL)arg2;
- (void)onSessionDeletedWithUserName:(id)arg1 inSessions:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)onSessionTotalUnreadCountChanged;
- (void)onSessionUpdated:(id)arg1;
- (void)onSessionSynced;
- (void)switchTopSessionListIfNeedWithType:(unsigned long long)arg1;
- (void)switchTopSessionListIfNeedWithUserName:(id)arg1;
- (void)hideToast;
- (void)showToast:(id)arg1;
- (void)hideChatMemberListWithAnimate:(unsigned char)arg1;
- (void)goToChatAndTwinkleWithUserName:(id)arg1;
- (void)goToNextUnreadChat;
- (void)scrollToNextUnreadChat;
- (void)scrollToFirstUnreadChat;
- (void)windowDidResize:(id)arg1;
- (void)windowDidBecomeKeyAction;
- (void)resumeFirstResponderIfNeeded:(BOOL)arg1;
- (BOOL)reloadIfNeedUpdateTimeLabel;
- (void)newChat:(id)arg1;
- (void)onFastSyncStop;
- (void)onFastSyncStart;
- (void)hideBanner;
- (void)showBanner;
- (void)startANewGroupChatWithUserNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startANewChatWithContact:(id)arg1;
- (void)startNewChatButtonPress:(id)arg1;
- (void)selectChatWithUserName:(id)arg1;
- (void)showChats;
- (void)telMeSearchViewWillHide;
- (id)detailViewController;
- (id)topSessionListViewController;
- (id)tableView;
@property(readonly, nonatomic) __weak MMComposeInputViewController *composeInputViewController;
@property(readonly, nonatomic) __weak MMChatMessageViewController *chatMessageViewController;
- (void)viewChangedEffectiveAppearance;
- (void)dealloc;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)layoutSubViews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

