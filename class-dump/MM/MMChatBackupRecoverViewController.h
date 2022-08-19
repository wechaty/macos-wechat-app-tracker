//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "MMChatBackupServerMgrExt-Protocol.h"
#import "MMChatBackupSessionLogicDelegate-Protocol.h"
#import "MMNetExt-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MMButton, MMChatBackupIndexDB, MMChatBackupSessionLogic, MMDatePickerInputView, MMImageView, MMOutlineButton, MMTableView, MMTextField, MMView, NSButton, NSString, NSView;

@interface MMChatBackupRecoverViewController : MMViewController <NSTableViewDelegate, NSTableViewDataSource, MMTableViewDelegate, MMChatBackupSessionLogicDelegate, MMChatBackupServerMgrExt, MMNetExt>
{
    MMChatBackupSessionLogic *m_sessionLogic;
    NSString *m_deviceId;
    MMChatBackupIndexDB *m_indexDB;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_speedString;
    unsigned long long m_freeSize;
    NSString *m_earliestMsgTime;
    NSString *m_latestMsgTime;
    int m_datePickerType;
    BOOL m_isTimeintervalValid;
    BOOL _isArrowUnfold;
    unsigned long long _notifyCode;
    unsigned long long _childrenNotifyCode;
    MMOutlineButton *_moreOptionsButton;
    MMImageView *_arrowIconImageView;
    NSButton *_selectTimeCheckbox;
    MMOutlineButton *_selectTimeButton;
    MMDatePickerInputView *_startTimeField;
    MMTextField *_toLabel;
    MMDatePickerInputView *_endTimeField;
    NSButton *_transferTxtMsgCheckbox;
    MMOutlineButton *_transferTxtMsgButton;
    double _unfoldHeight;
    MMTextField *_selectSessionLabel;
    MMTextField *_selectAllLabel;
    NSButton *_selectAllCheckbox;
    MMTextField *_hintLabel;
    MMTextField *_sessionTitleLabel;
    MMOutlineButton *_sessionConfirmButton;
    MMOutlineButton *_sessionCancelButton;
    MMTableView *_sessionTableView;
    MMView *_sessionListView;
    NSView *_sessionListBgView;
    MMImageView *_iconImageView;
    MMTextField *_titleLabel;
    MMTextField *_descriptionLabel;
    MMOutlineButton *_confirmButton;
    MMOutlineButton *_cancelButton;
    MMButton *_returnButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMButton *returnButton; // @synthesize returnButton=_returnButton;
@property(retain, nonatomic) MMOutlineButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMOutlineButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property __weak NSView *sessionListBgView; // @synthesize sessionListBgView=_sessionListBgView;
@property(retain, nonatomic) MMView *sessionListView; // @synthesize sessionListView=_sessionListView;
@property(retain, nonatomic) MMTableView *sessionTableView; // @synthesize sessionTableView=_sessionTableView;
@property(retain, nonatomic) MMOutlineButton *sessionCancelButton; // @synthesize sessionCancelButton=_sessionCancelButton;
@property(retain, nonatomic) MMOutlineButton *sessionConfirmButton; // @synthesize sessionConfirmButton=_sessionConfirmButton;
@property(retain, nonatomic) MMTextField *sessionTitleLabel; // @synthesize sessionTitleLabel=_sessionTitleLabel;
@property(retain, nonatomic) MMTextField *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) NSButton *selectAllCheckbox; // @synthesize selectAllCheckbox=_selectAllCheckbox;
@property(retain, nonatomic) MMTextField *selectAllLabel; // @synthesize selectAllLabel=_selectAllLabel;
@property(retain, nonatomic) MMTextField *selectSessionLabel; // @synthesize selectSessionLabel=_selectSessionLabel;
@property(nonatomic) double unfoldHeight; // @synthesize unfoldHeight=_unfoldHeight;
@property(retain, nonatomic) MMOutlineButton *transferTxtMsgButton; // @synthesize transferTxtMsgButton=_transferTxtMsgButton;
@property(retain, nonatomic) NSButton *transferTxtMsgCheckbox; // @synthesize transferTxtMsgCheckbox=_transferTxtMsgCheckbox;
@property(retain, nonatomic) MMDatePickerInputView *endTimeField; // @synthesize endTimeField=_endTimeField;
@property(retain, nonatomic) MMTextField *toLabel; // @synthesize toLabel=_toLabel;
@property(retain, nonatomic) MMDatePickerInputView *startTimeField; // @synthesize startTimeField=_startTimeField;
@property(retain, nonatomic) MMOutlineButton *selectTimeButton; // @synthesize selectTimeButton=_selectTimeButton;
@property(retain, nonatomic) NSButton *selectTimeCheckbox; // @synthesize selectTimeCheckbox=_selectTimeCheckbox;
@property(retain, nonatomic) MMImageView *arrowIconImageView; // @synthesize arrowIconImageView=_arrowIconImageView;
@property(nonatomic) BOOL isArrowUnfold; // @synthesize isArrowUnfold=_isArrowUnfold;
@property(retain, nonatomic) MMOutlineButton *moreOptionsButton; // @synthesize moreOptionsButton=_moreOptionsButton;
@property(nonatomic) unsigned long long childrenNotifyCode; // @synthesize childrenNotifyCode=_childrenNotifyCode;
@property(nonatomic) unsigned long long notifyCode; // @synthesize notifyCode=_notifyCode;
- (void)showPhoneNotSupportDialog;
- (BOOL)isSession:(id)arg1 containMsgFromSelectedStartTime:(long long)arg2 toSelectedEndTime:(long long)arg3;
- (void)checkStartTimeExceedEndTime;
- (id)dateFromFormattedStr:(id)arg1;
- (id)formattedStrFromDate:(id)arg1;
- (void)setFreeSize:(unsigned long long)arg1;
- (void)envKVReport;
- (BOOL)checkCurrentNetStatus;
- (void)onNetStatusChange:(int)arg1;
- (void)setWindowResizable:(BOOL)arg1;
- (void)doAnimationWithNewSize:(struct CGSize)arg1 origin:(struct CGPoint)arg2;
- (void)popToRootViewController;
- (void)onReturnBtnClicked;
- (void)hideAllButtons;
- (void)onCancelBtnClicked;
- (void)onConfirmBtnClicked;
- (void)updateButtonStatus:(BOOL)arg1;
- (void)layoutButtons;
- (void)layoutDescLabel;
- (void)layoutTitleLabel;
- (void)layoutIconImage;
- (void)layoutSubViews;
- (void)removeSubViews;
- (void)showSubViews;
- (void)setupSubViews;
- (void)rowToggled:(id)arg1;
- (void)_toggleChosennessOfRow:(long long)arg1;
- (void)tableView:(id)arg1 rowGotMouseUp:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)updateSessionChoosenView;
- (void)displayTimeSelectionViews:(BOOL)arg1;
- (void)setupTimeSelectionViews;
- (void)onSelectAllBtnClicked;
- (void)onSessionSelectCancelBtnClicked;
- (void)onSessionSelectConfirmBtnClicked;
- (void)returnToSelectSessionView;
- (void)_reselectSessionListView;
- (void)removeAndResizeSessionListView;
- (void)layoutSessionListView;
- (void)removeSessionListView;
- (void)setupSessionListView;
- (void)onArrowIconClicked;
- (void)onTransferTxtMsgCheckboxClicked;
- (void)onSelectTimeCheckboxClicked;
- (void)onEndTimeFieldClicked;
- (void)onStartTimeFieldClicked;
- (void)setupDatePicker;
- (BOOL)isValidMode;
- (void)onServerMgrCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onServerMgrTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 ratio:(double)arg3;
- (void)onServerMgrNotifyCode:(unsigned long long)arg1;
- (void)resetSubViews;
- (void)setBackupRecord:(id)arg1;
- (void)viewChangedEffectiveAppearance;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

