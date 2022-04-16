//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTraitsViewController.h"

#import "IContactMgrExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "IOpLogServiceExt-Protocol.h"
#import "IOpenIMOplogServiceExt-Protocol.h"
#import "MMChatDetailGroupMemberRowViewDelegate-Protocol.h"
#import "MMChatDetailLeftTextRightSwitchRowViewDelegate-Protocol.h"
#import "MMChatDetailStickyExpandMoreAndPackRowViewDelegate-Protocol.h"
#import "MMChatDetailSubtitleEditRowViewDelegate-Protocol.h"
#import "MMCustomSearchFieldDelegate-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "OpenIMResourceMgrExt-Protocol.h"

@class MMChatDetailEventView, MMChatDetailPanelLogic, MMChatDetailSearchRowView, MMChatDetailStickyExpandMoreAndPackRowView, MMGroupChatAnnounceWindow, MMMediumDivider, MMSessionPickerWindow, MMTableView, MMTextField, MMView, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSView, WCContactData;
@protocol MMComposeInputViewDelegate;

@interface MMChatMemberListViewController : MMTraitsViewController <NSTableViewDelegate, NSTableViewDataSource, MMTableViewDelegate, IGroupMgrExt, IContactMgrExt, IOpLogServiceExt, IOpenIMOplogServiceExt, OpenIMResourceMgrExt, MMCustomSearchFieldDelegate, MMChatDetailGroupMemberRowViewDelegate, MMChatDetailSubtitleEditRowViewDelegate, MMChatDetailStickyExpandMoreAndPackRowViewDelegate, MMChatDetailLeftTextRightSwitchRowViewDelegate>
{
    BOOL _isShown;
    BOOL _isAnimating;
    BOOL _hasOpenIMContact;
    BOOL _isSearching;
    BOOL _isFolding;
    WCContactData *_contact;
    CDUnknownBlockType _viewDidLoadBlock;
    CDUnknownBlockType _isAnimatingBlock;
    id <MMComposeInputViewDelegate> _composeInputViewDelegate;
    NSArray *_groupMemberList;
    NSMutableArray *_searchMemberList;
    MMSessionPickerWindow *_sessionPickerWindow;
    MMGroupChatAnnounceWindow *_announceWindow;
    MMView *_backgroundView;
    MMTextField *_noSearchResultHint;
    MMChatDetailEventView *_eventView;
    WCContactData *_localAddContactData;
    WCContactData *_localDeleteContactData;
    WCContactData *_delayContact;
    NSView *_contentView;
    MMTableView *_tableView;
    MMMediumDivider *_divider;
    MMChatDetailSearchRowView *_searchRowView;
    MMChatDetailStickyExpandMoreAndPackRowView *_inListStickyExpandMoreAndPackRowView;
    MMChatDetailStickyExpandMoreAndPackRowView *_bottomStickyPackRowView;
    MMView *_groupMemberBackgroudView;
    NSMutableArray *_rowDatas;
    id _monitorMouseEvent;
    MMChatDetailPanelLogic *_chatDetailPanelLogic;
    NSMutableDictionary *_updateGroupMemberDetailDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *updateGroupMemberDetailDic; // @synthesize updateGroupMemberDetailDic=_updateGroupMemberDetailDic;
@property(retain, nonatomic) MMChatDetailPanelLogic *chatDetailPanelLogic; // @synthesize chatDetailPanelLogic=_chatDetailPanelLogic;
@property(retain, nonatomic) id monitorMouseEvent; // @synthesize monitorMouseEvent=_monitorMouseEvent;
@property(retain, nonatomic) NSMutableArray *rowDatas; // @synthesize rowDatas=_rowDatas;
@property(retain, nonatomic) MMView *groupMemberBackgroudView; // @synthesize groupMemberBackgroudView=_groupMemberBackgroudView;
@property(retain, nonatomic) MMChatDetailStickyExpandMoreAndPackRowView *bottomStickyPackRowView; // @synthesize bottomStickyPackRowView=_bottomStickyPackRowView;
@property(retain, nonatomic) MMChatDetailStickyExpandMoreAndPackRowView *inListStickyExpandMoreAndPackRowView; // @synthesize inListStickyExpandMoreAndPackRowView=_inListStickyExpandMoreAndPackRowView;
@property(retain, nonatomic) MMChatDetailSearchRowView *searchRowView; // @synthesize searchRowView=_searchRowView;
@property(retain, nonatomic) MMMediumDivider *divider; // @synthesize divider=_divider;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WCContactData *delayContact; // @synthesize delayContact=_delayContact;
@property(retain, nonatomic) WCContactData *localDeleteContactData; // @synthesize localDeleteContactData=_localDeleteContactData;
@property(retain, nonatomic) WCContactData *localAddContactData; // @synthesize localAddContactData=_localAddContactData;
@property(nonatomic) BOOL isFolding; // @synthesize isFolding=_isFolding;
@property(retain, nonatomic) MMChatDetailEventView *eventView; // @synthesize eventView=_eventView;
@property(retain, nonatomic) MMTextField *noSearchResultHint; // @synthesize noSearchResultHint=_noSearchResultHint;
@property(retain, nonatomic) MMView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak MMGroupChatAnnounceWindow *announceWindow; // @synthesize announceWindow=_announceWindow;
@property(retain, nonatomic) MMSessionPickerWindow *sessionPickerWindow; // @synthesize sessionPickerWindow=_sessionPickerWindow;
@property(nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) BOOL hasOpenIMContact; // @synthesize hasOpenIMContact=_hasOpenIMContact;
@property(retain, nonatomic) NSMutableArray *searchMemberList; // @synthesize searchMemberList=_searchMemberList;
@property(retain, nonatomic) NSArray *groupMemberList; // @synthesize groupMemberList=_groupMemberList;
@property(nonatomic) __weak id <MMComposeInputViewDelegate> composeInputViewDelegate; // @synthesize composeInputViewDelegate=_composeInputViewDelegate;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) BOOL isShown; // @synthesize isShown=_isShown;
@property(copy, nonatomic) CDUnknownBlockType isAnimatingBlock; // @synthesize isAnimatingBlock=_isAnimatingBlock;
@property(copy, nonatomic) CDUnknownBlockType viewDidLoadBlock; // @synthesize viewDidLoadBlock=_viewDidLoadBlock;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
- (void)_resetSearch;
- (BOOL)onSearchFiledControl:(id)arg1 aCommandSelector:(SEL)arg2;
- (void)onSearchFiledDidEnd:(id)arg1;
- (void)onSearchFiledTextDidChange:(id)arg1;
- (void)handleAppFontSize;
- (void)deleteFromGroupChatWithSelectedUserNames:(id)arg1;
- (void)startAGroupChatWithSelectedUserNames:(id)arg1;
- (void)startANewSingleChatWithSelectedUserName:(id)arg1;
- (void)addGroupMembers:(id)arg1 andExamineString:(id)arg2;
- (void)addToGroupChatWithSelectedUserNames:(id)arg1;
- (void)menuActionDeleteGroupMember:(id)arg1;
- (void)menuActionMentionGroupMember:(id)arg1;
- (void)menuActionAddFriendWithGroupMember:(id)arg1;
- (void)menuActionChatWithGroupMember:(id)arg1;
- (void)buttonActionRemoveMember;
- (void)buttonActionAddMember;
- (id)makeDeleteMemberMenuItem:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (id)makeMemberListMenuItem:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)monitorMouseDownRightMouseDownMask;
- (void)didDoubleClickedWithContact:(id)arg1;
- (void)didRightClickOnMemberRowView:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)handleModifyGroupChatNameOplogRet:(int)arg1 errMsg:(id)arg2 groupName:(id)arg3;
- (void)onOpenImOplogRet:(int)arg1 errMsg:(id)arg2 openImlog:(id)arg3;
- (void)onOpLogRet:(int)arg1 errMsg:(id)arg2 oplog:(id)arg3;
- (void)OnModifyGroupMemberContact:(id)arg1;
- (void)OpenIMResourceWordingIds:(id)arg1 didFinish:(id)arg2;
- (void)updateGroupMemberOnModifyContacts:(id)arg1;
- (void)updateGroupChatOnModifyContacts:(id)arg1;
- (void)updateSingleChatOnModifyContacts:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)onSwitchChangedWithChecked:(BOOL)arg1 flag:(long long)arg2;
- (void)groupMemberView:(id)arg1 rowGotRightMouseDown:(long long)arg2;
- (void)groupMemberView:(id)arg1 rowGotRightMouseUp:(long long)arg2;
- (void)groupMemberView:(id)arg1 rowGotDoubleClicked:(long long)arg2;
- (void)groupMemberView:(id)arg1 rowGotMouseExist:(long long)arg2;
- (void)groupMemberView:(id)arg1 rowGotMouseEnter:(long long)arg2;
- (void)groupMemberView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (void)groupMemberView:(id)arg1 rowGotMouseUp:(long long)arg2;
- (void)removeGroupMemberBackgroudView;
- (void)addGroupMemberBackgroudViewRelativeTo:(id)arg1;
- (void)stickyExpandMoreAndPackRowViewMouseDown;
- (void)intputCancel:(id)arg1;
- (void)inputEnd:(id)arg1 content:(id)arg2;
- (void)tableView:(id)arg1 rowGotDoubleClicked:(long long)arg2;
- (void)tableView:(id)arg1 rowGotRightMouseUp:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseUp:(long long)arg2;
- (void)tableView:(id)arg1 rowGotRightMouseDown:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)prepareGroupContactDatas;
- (void)prepareContactDatas;
- (void)prepareRowDatas;
- (id)makeGroupMemberRowDataWithArr:(id)arg1;
- (id)makeDividerRowDataWithEdgeInsets:(struct NSEdgeInsets)arg1;
- (id)splitArray:(id)arg1;
- (void)tableviewFrameDidChange:(id)arg1;
- (void)tableviewBoundsDidChange:(id)arg1;
- (void)openAnnounceWindow;
- (void)openChatManagerWindow;
- (void)showStickyPackRowViewIfNeed;
- (void)hideStickyPackRowViewIfNeed;
- (void)updateStickyPackRowViewStatus;
- (void)hideToast;
- (void)showToast:(id)arg1 image:(id)arg2;
- (void)showToast:(id)arg1;
- (void)showSuccessToast;
- (BOOL)isSelfSession;
- (void)updateGroupMemberDetailIfNeed:(id)arg1;
- (void)updateGroupMemberList:(id)arg1;
- (void)delayReloadTableViewSelector;
- (void)delayReloadTableView;
- (void)reloadTableView;
- (BOOL)isPointInsideChatMemberListView:(struct CGPoint)arg1;
- (void)hideWithMouseEvent:(id)arg1;
- (void)hideWithAnimated:(BOOL)arg1 makeFirstResponder:(unsigned char)arg2;
- (void)showWithAnimated:(BOOL)arg1;
- (void)toggle;
- (void)setupContentView;
- (void)viewChangedEffectiveAppearance;
- (void)setupEventView;
- (void)initTableView;
- (void)initStickyExpandMoreAndPackRowView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)printFirstResponder;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

