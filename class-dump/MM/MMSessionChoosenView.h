//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTraitsViewController.h"

#import "EmoticonDownloadMgrExt-Protocol.h"
#import "HistoryRecordUploadMgrExt-Protocol.h"
#import "MMSessionListViewDelegate-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "SDWebImageManagerDelegate-Protocol.h"

@class DataItemForSessionPicker, FavoritesItem, HistoryInfo, MMAppReferCoverView, MMHoyKeyTextView, MMOutlineButton, MMTableView, MessageData, MessageWrapForSessionPicker, NSArray, NSBox, NSImageView, NSMutableArray, NSScrollView, NSString, NSTextField, NSView, ShareHistorySelectionForSessionPicker, URLDataForSessionPicker;
@protocol MMSessionChoosenViewDelegate;

@interface MMSessionChoosenView : MMTraitsViewController <NSTableViewDataSource, NSTableViewDelegate, MMTableViewDelegate, SDWebImageManagerDelegate, EmoticonDownloadMgrExt, HistoryRecordUploadMgrExt, MMSessionListViewDelegate>
{
    BOOL _messageCannotBeOpened;
    id <MMSessionChoosenViewDelegate> _delegate;
    NSArray *_preSelectedUserNames;
    NSString *_confirmButtonText;
    NSString *_cancelButtonText;
    FavoritesItem *_favoritesItem;
    DataItemForSessionPicker *_dataItemForSessionPicker;
    URLDataForSessionPicker *_uRLDataForSessionPicker;
    MessageWrapForSessionPicker *_messageWrap;
    unsigned long long _customAppearance;
    ShareHistorySelectionForSessionPicker *_shareHistorySelection;
    HistoryInfo *_uploadedHistoryInfo;
    double _uploadBeginTime;
    NSTextField *_headingTitleField;
    NSTextField *_titleTextField;
    MMTableView *_stripeTableView;
    MMTableView *_squareTableView;
    MMTableView *_tableView;
    NSBox *_horizonLine;
    NSBox *_longHorizonLine;
    MMAppReferCoverView *_messageContainerView;
    MMHoyKeyTextView *_leaveMessageTextView;
    NSScrollView *_stripeScrollView;
    NSScrollView *_squareScrollView;
    NSScrollView *_scrollView;
    MessageData *_messageData;
    MMOutlineButton *_confirmButton;
    MMOutlineButton *_cancelButton;
    NSView *_messageShowView;
    NSImageView *_coverImageView;
    NSMutableArray *_tableContents;
    NSArray *_selectedRows;
    NSArray *_selectedUserNames;
    NSArray *_selectedResults;
    unsigned long long _sessionPickerType;
    CDUnknownBlockType _confirmCompletionHandler;
    CDUnknownBlockType _resultConfirmCompletionHandler;
    CDUnknownBlockType _didClickConfirmButtonBlock;
    CDUnknownBlockType _didClickCancelButtonBlock;
    CDUnknownBlockType _didClickBackButtonBlock;
    NSImageView *_verticalDivider;
    long long _overCount;
    NSString *_uploadingHistoryTaskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uploadingHistoryTaskId; // @synthesize uploadingHistoryTaskId=_uploadingHistoryTaskId;
@property(nonatomic) long long overCount; // @synthesize overCount=_overCount;
@property(retain, nonatomic) NSImageView *verticalDivider; // @synthesize verticalDivider=_verticalDivider;
@property(copy, nonatomic) CDUnknownBlockType didClickBackButtonBlock; // @synthesize didClickBackButtonBlock=_didClickBackButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickCancelButtonBlock; // @synthesize didClickCancelButtonBlock=_didClickCancelButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickConfirmButtonBlock; // @synthesize didClickConfirmButtonBlock=_didClickConfirmButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType resultConfirmCompletionHandler; // @synthesize resultConfirmCompletionHandler=_resultConfirmCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType confirmCompletionHandler; // @synthesize confirmCompletionHandler=_confirmCompletionHandler;
@property(nonatomic) BOOL messageCannotBeOpened; // @synthesize messageCannotBeOpened=_messageCannotBeOpened;
@property(nonatomic) unsigned long long sessionPickerType; // @synthesize sessionPickerType=_sessionPickerType;
@property(retain, nonatomic) NSArray *selectedResults; // @synthesize selectedResults=_selectedResults;
@property(retain, nonatomic) NSArray *selectedUserNames; // @synthesize selectedUserNames=_selectedUserNames;
@property(retain, nonatomic) NSArray *selectedRows; // @synthesize selectedRows=_selectedRows;
@property(retain, nonatomic) NSMutableArray *tableContents; // @synthesize tableContents=_tableContents;
@property(retain, nonatomic) NSImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) NSView *messageShowView; // @synthesize messageShowView=_messageShowView;
@property(retain, nonatomic) MMOutlineButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMOutlineButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MessageData *messageData; // @synthesize messageData=_messageData;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSScrollView *squareScrollView; // @synthesize squareScrollView=_squareScrollView;
@property(retain, nonatomic) NSScrollView *stripeScrollView; // @synthesize stripeScrollView=_stripeScrollView;
@property(retain, nonatomic) MMHoyKeyTextView *leaveMessageTextView; // @synthesize leaveMessageTextView=_leaveMessageTextView;
@property(retain, nonatomic) MMAppReferCoverView *messageContainerView; // @synthesize messageContainerView=_messageContainerView;
@property(retain, nonatomic) NSBox *longHorizonLine; // @synthesize longHorizonLine=_longHorizonLine;
@property(retain, nonatomic) NSBox *horizonLine; // @synthesize horizonLine=_horizonLine;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMTableView *squareTableView; // @synthesize squareTableView=_squareTableView;
@property(retain, nonatomic) MMTableView *stripeTableView; // @synthesize stripeTableView=_stripeTableView;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSTextField *headingTitleField; // @synthesize headingTitleField=_headingTitleField;
@property(nonatomic) double uploadBeginTime; // @synthesize uploadBeginTime=_uploadBeginTime;
@property(retain, nonatomic) HistoryInfo *uploadedHistoryInfo; // @synthesize uploadedHistoryInfo=_uploadedHistoryInfo;
@property(retain, nonatomic) ShareHistorySelectionForSessionPicker *shareHistorySelection; // @synthesize shareHistorySelection=_shareHistorySelection;
@property(nonatomic) unsigned long long customAppearance; // @synthesize customAppearance=_customAppearance;
@property(retain, nonatomic) MessageWrapForSessionPicker *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(retain, nonatomic) URLDataForSessionPicker *uRLDataForSessionPicker; // @synthesize uRLDataForSessionPicker=_uRLDataForSessionPicker;
@property(retain, nonatomic) DataItemForSessionPicker *dataItemForSessionPicker; // @synthesize dataItemForSessionPicker=_dataItemForSessionPicker;
@property(retain, nonatomic) FavoritesItem *favoritesItem; // @synthesize favoritesItem=_favoritesItem;
@property(retain, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(retain, nonatomic) NSString *confirmButtonText; // @synthesize confirmButtonText=_confirmButtonText;
@property(retain, nonatomic) NSArray *preSelectedUserNames; // @synthesize preSelectedUserNames=_preSelectedUserNames;
@property(nonatomic) __weak id <MMSessionChoosenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)onHistoryRecordUploadFailed:(id)arg1;
- (void)onHistoryRecordUploadSuccess:(id)arg1 historyInfo:(id)arg2;
- (void)emoticonDownloadFailed:(id)arg1;
- (void)emoticonDownloadFinished:(id)arg1;
- (void)keyDownBlock:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)setFirstResponder;
- (void)closeChoosenViewWithConfirm:(BOOL)arg1;
- (void)updateSessionChoosenViewWidthType:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)updateSessionChoosenView:(id)arg1 insertOrNot:(BOOL)arg2;
- (void)updateSessionChoosenText:(unsigned long long)arg1;
- (void)setupPickerType:(unsigned long long)arg1;
- (void)showAlert:(id)arg1;
- (void)setEnabledTextWithType:(unsigned long long)arg1 sessionCount:(long long)arg2;
- (void)setDisabledTextWithType:(unsigned long long)arg1 count:(long long)arg2;
- (void)setupBottomButtons;
- (void)setupTitleTextField;
- (void)setupHeadingtitleField;
- (void)setupTableView;
- (void)clearSelectedForNewAndForwardType;
- (void)clearAllSelectedUsers;
- (void)putSelectedUserToTableContents:(id)arg1;
- (void)setSelectedUserNames:(id)arg1 insertOrNot:(BOOL)arg2;
- (void)handleReferMouseUpEvent;
- (id)descTextViewAttrubutes;
- (id)appName;
- (id)bottomString;
- (struct CGColor *)getColorRef:(id)arg1;
- (void)showRevokeHistoryEntry;
- (void)showShareHistoryEntry;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2;
- (void)showAppFeedMessageView;
- (void)showAppBrandMessageView;
- (void)showTextMessageView:(id)arg1 emoji:(BOOL)arg2;
- (void)showTextMessageView:(id)arg1;
- (void)showImageMessageView:(id)arg1;
- (void)showImageMessageView;
- (void)showVideoMessageView:(id)arg1;
- (void)showVideoMessageView;
- (void)showEmojiMessageView:(id)arg1;
- (void)showEmojiMessageView;
- (void)showEmptyMessageView;
- (double)imageWidthScaleToX:(id)arg1;
- (id)genNewNSImageView;
- (id)msgReferSummary;
- (void)setShowsShareHistoryEntry:(BOOL)arg1;
- (void)setForwardSnsItemForSessionPicker:(id)arg1 messageCannotBeOpened:(BOOL)arg2;
- (void)setForwardMessageWrap:(id)arg1 messageCannotBeOpened:(BOOL)arg2;
- (void)setForwardURLDataForSessionPicker:(id)arg1 messageCannotBeOpened:(BOOL)arg2;
- (void)setForwardDataItemForSessionPicker:(id)arg1 messageCannotBeOpened:(BOOL)arg2;
- (void)setForwardFavoritesItem:(id)arg1 messageCannotBeOpened:(BOOL)arg2;
- (void)statusReset;
- (void)showAllForwardViews;
- (void)hideAllForwardViews;
- (void)updateSessionChoosenMessageView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)makeScrollViewConstraint:(double)arg1;
- (void)makeHistoryMessageContainerViewConstraint;
- (void)makeTextMessageContainerViewConstraint:(double)arg1;
- (void)makeMessageContainerViewConstraint:(double)arg1;
- (void)makeLongLineConstraint;
- (void)makeShortLineConstraint;
- (void)makeConstraint;
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

