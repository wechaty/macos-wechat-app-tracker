//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IMMFriendRequestMgrExt-Protocol.h"
#import "MMContactListContactRowViewDelegate-Protocol.h"
#import "MMCustomSearchFieldDelegate-Protocol.h"
#import "MMFriendNewVerifyMessageWindowControllerExt-Protocol.h"
#import "MMFriendRequestRowViewDelegate-Protocol.h"
#import "MMSidebarRowViewDelegate-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "NSSearchFieldDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "OpenIMResourceMgrExt-Protocol.h"
#import "WeChatSearchProtocol-Protocol.h"

@class MMButton, MMContactListContactRowView, MMContactListLogic, MMCustomSearchField, MMDragEventView, MMSearchViewController, MMTableView, NSArray, NSButton, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMContactsViewController : MMViewController <NSTableViewDataSource, NSTableViewDelegate, MMTableViewDelegate, NSTextFieldDelegate, NSSearchFieldDelegate, IContactMgrExt, IMMFriendRequestMgrExt, AccountServiceExt, OpenIMResourceMgrExt, MMSidebarRowViewDelegate, MMContactListContactRowViewDelegate, MMFriendRequestRowViewDelegate, MMCustomSearchFieldDelegate, MMFriendNewVerifyMessageWindowControllerExt, WeChatSearchProtocol>
{
    MMContactListLogic *_logic;
    MMContactListContactRowView *_rowViewForContextMenu;
    NSObject<OS_dispatch_queue> *_asyncLoadDataQueue;
    BOOL _isSearching;
    BOOL _isOnlyVerifyScene;
    MMDragEventView *_topView;
    MMCustomSearchField *_searchField;
    NSButton *_searchFriendButton;
    MMButton *_cancelSearchButton;
    MMSearchViewController *_searchViewController;
    long long _lastSelectedRow;
    MMTableView *_listTableView;
    NSArray *_listTableViewDataSource;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isOnlyVerifyScene; // @synthesize isOnlyVerifyScene=_isOnlyVerifyScene;
@property(retain, nonatomic) NSArray *listTableViewDataSource; // @synthesize listTableViewDataSource=_listTableViewDataSource;
@property(nonatomic) __weak MMTableView *listTableView; // @synthesize listTableView=_listTableView;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(retain, nonatomic) MMSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property __weak MMButton *cancelSearchButton; // @synthesize cancelSearchButton=_cancelSearchButton;
@property __weak NSButton *searchFriendButton; // @synthesize searchFriendButton=_searchFriendButton;
@property __weak MMCustomSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak MMDragEventView *topView; // @synthesize topView=_topView;
- (void)onVerifyWindowWillOpen;
- (void)quitGroupActionReport;
- (void)reportMenuShowToKVWithMenuId:(unsigned int)arg1;
- (void)handleAppFontSize;
- (void)windowDidBecomeKeyAction:(id)arg1;
- (void)windowDidResignMainAction:(id)arg1;
- (void)_contextMenuDeleteFriendRequest:(id)arg1;
- (id)contextMenuForFriendRequestRow:(id)arg1;
- (void)_contextMenuChangeRemark:(id)arg1;
- (void)_contextMenuRemoveContactBook:(id)arg1;
- (void)_contextMenuDeleteContact:(id)arg1;
- (void)_contextMenuShareContact:(id)arg1;
- (void)_contextMenuMessageContact:(id)arg1;
- (void)openedContextMenuForContactRow:(id)arg1;
- (id)contextMenuForContactRow:(id)arg1;
- (void)_clearSearch;
- (void)performSearchAction;
- (void)showGlobalSearchWindowController:(id)arg1 withSession:(id)arg2;
- (void)delayReloadAllContacts;
- (void)reloadAllContacts;
- (BOOL)_isFirstOneOfFriendRequests:(id)arg1;
- (void)friendRequestMgr:(id)arg1 didDeleteFriendRequestMsgWithIndex:(unsigned long long)arg2;
- (void)friendRequestMgr:(id)arg1 didChangeFriendRequestUnreadCount:(unsigned long long)arg2;
- (void)OpenIMResourceWordingIds:(id)arg1 didFinish:(id)arg2;
- (void)onDeleteContacts:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)_DoGroupRowSelectedChanged:(id)arg1 rowInfo:(id)arg2 index:(long long)arg3;
- (void)siderbarGotMouseUp:(id)arg1;
- (void)setLastSelectedRowIfNeeded;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)title;
- (void)setTabbarItem:(id)arg1;
- (void)startShareContact:(id)arg1;
- (void)showContactWithUserName:(id)arg1;
- (void)onUserLogout;
- (BOOL)onSearchFiledControl:(id)arg1 textFiled:(id)arg2 aCommandSelector:(SEL)arg3;
- (void)onSearchFiledTextDidChange:(id)arg1;
- (void)doSearchEnd;
- (void)onSearchFiledDidEnd:(id)arg1;
- (void)onSearchFiledTextDidEndEditing:(id)arg1 info:(id)arg2;
- (void)onSearchFiledWillBegin:(id)arg1;
- (void)onClickStartSearchFriend;
- (void)onClickCancelSearchButton;
- (void)showTopViewSearchNewContactButton;
- (void)showTopViewCancelButton;
- (void)viewDidAppear;
- (void)viewChangedEffectiveAppearance;
- (void)layoutSubView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

