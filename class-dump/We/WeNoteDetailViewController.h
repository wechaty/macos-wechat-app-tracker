//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "CAAnimationDelegate-Protocol.h"
#import "IMMFavRecordDownloadMgrExt-Protocol.h"
#import "IMMRecordDownloadMgrExt-Protocol.h"
#import "MMFavoritesMgrExt-Protocol.h"
#import "MMRichAttachmentTextViewDelegate-Protocol.h"
#import "MMRichTextViewToolBarDelegate-Protocol.h"
#import "MMRichTextViewToolbarDataSource-Protocol.h"
#import "MMTokenFieldDelegate-Protocol.h"
#import "MMVoiceAttachmentViewDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"
#import "NSTokenFieldDelegate-Protocol.h"
#import "WeNoteArticleToolBarDelegate-Protocol.h"

@class FavoritesItem, MMNoteEditorTagBar, MMRichAttachmentClipView, MMRichAttachmentTextStorage, MMRichAttachmentTextView, MMTextAttachmentCell, MMTimer, MMToastView, MMTokenField, MessageData, NSMutableArray, NSScrollView, NSString, WeNoteAudioMgr, WeNoteParagraphInfo, WeNoteWindowController;

@interface WeNoteDetailViewController : NSViewController <MMRichAttachmentTextViewDelegate, NSTextViewDelegate, MMVoiceAttachmentViewDelegate, NSTokenFieldDelegate, MMTokenFieldDelegate, IMMRecordDownloadMgrExt, IMMFavRecordDownloadMgrExt, MMFavoritesMgrExt, CAAnimationDelegate, WeNoteArticleToolBarDelegate, MMRichTextViewToolBarDelegate, MMRichTextViewToolbarDataSource>
{
    MMTextAttachmentCell *highlightedCell;
    BOOL _editing;
    BOOL _edited;
    BOOL _waitingFirstSynUpdatedFinish;
    BOOL _waitingUserSelectedSyncActionFinish;
    BOOL _tagBarIsAnimating;
    BOOL _justDeletedBackward;
    BOOL _isReported;
    int _noteState;
    int _plainTextMaxLength;
    int _attachmentMaxNum;
    int _saveStatus;
    unsigned int _originalVersion;
    unsigned int _backupCount;
    WeNoteWindowController *_weakWindowController;
    NSScrollView *_scrollView;
    MMRichAttachmentTextView *_wenoteRichTextView;
    MMRichAttachmentClipView *_clipView;
    MMRichAttachmentTextStorage *_customTextStorage;
    FavoritesItem *_tagEditItem;
    MessageData *_parentMsg;
    FavoritesItem *_currentFavItem;
    WeNoteParagraphInfo *_editingParaInfo;
    NSMutableArray *_paragraphArray;
    MMToastView *_toastView;
    MMTimer *_backupTimer;
    unsigned long long _totalAttachmentSizeLimit;
    NSString *_htmlDataID;
    long long _layout;
    WeNoteAudioMgr *_audioMgr;
    MMNoteEditorTagBar *_noteTagBar;
    MMTokenField *_tagTokenField;
    NSString *_originalDeviceID;
    MMTimer *_textDidChangeTimeOutTimer;
    NSString *_dragImgPath;
    double _openNoteTimeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isReported; // @synthesize isReported=_isReported;
@property(nonatomic) double openNoteTimeInterval; // @synthesize openNoteTimeInterval=_openNoteTimeInterval;
@property(nonatomic) BOOL justDeletedBackward; // @synthesize justDeletedBackward=_justDeletedBackward;
@property(retain, nonatomic) NSString *dragImgPath; // @synthesize dragImgPath=_dragImgPath;
@property(nonatomic) BOOL tagBarIsAnimating; // @synthesize tagBarIsAnimating=_tagBarIsAnimating;
@property(retain, nonatomic) MMTimer *textDidChangeTimeOutTimer; // @synthesize textDidChangeTimeOutTimer=_textDidChangeTimeOutTimer;
@property(nonatomic) BOOL waitingUserSelectedSyncActionFinish; // @synthesize waitingUserSelectedSyncActionFinish=_waitingUserSelectedSyncActionFinish;
@property(nonatomic) BOOL waitingFirstSynUpdatedFinish; // @synthesize waitingFirstSynUpdatedFinish=_waitingFirstSynUpdatedFinish;
@property(nonatomic) unsigned int backupCount; // @synthesize backupCount=_backupCount;
@property(retain, nonatomic) NSString *originalDeviceID; // @synthesize originalDeviceID=_originalDeviceID;
@property(nonatomic) unsigned int originalVersion; // @synthesize originalVersion=_originalVersion;
@property(nonatomic) int saveStatus; // @synthesize saveStatus=_saveStatus;
@property(retain) MMTokenField *tagTokenField; // @synthesize tagTokenField=_tagTokenField;
@property(retain) MMNoteEditorTagBar *noteTagBar; // @synthesize noteTagBar=_noteTagBar;
@property(retain, nonatomic) WeNoteAudioMgr *audioMgr; // @synthesize audioMgr=_audioMgr;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSString *htmlDataID; // @synthesize htmlDataID=_htmlDataID;
@property(nonatomic) unsigned long long totalAttachmentSizeLimit; // @synthesize totalAttachmentSizeLimit=_totalAttachmentSizeLimit;
@property(nonatomic) int attachmentMaxNum; // @synthesize attachmentMaxNum=_attachmentMaxNum;
@property(nonatomic) int plainTextMaxLength; // @synthesize plainTextMaxLength=_plainTextMaxLength;
@property(retain, nonatomic) MMTimer *backupTimer; // @synthesize backupTimer=_backupTimer;
@property(retain, nonatomic) MMToastView *toastView; // @synthesize toastView=_toastView;
@property(nonatomic) BOOL edited; // @synthesize edited=_edited;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSMutableArray *paragraphArray; // @synthesize paragraphArray=_paragraphArray;
@property(nonatomic) int noteState; // @synthesize noteState=_noteState;
@property(retain, nonatomic) WeNoteParagraphInfo *editingParaInfo; // @synthesize editingParaInfo=_editingParaInfo;
@property(retain, nonatomic) FavoritesItem *currentFavItem; // @synthesize currentFavItem=_currentFavItem;
@property(retain, nonatomic) MessageData *parentMsg; // @synthesize parentMsg=_parentMsg;
@property(retain, nonatomic) FavoritesItem *tagEditItem; // @synthesize tagEditItem=_tagEditItem;
@property(retain, nonatomic) MMRichAttachmentTextStorage *customTextStorage; // @synthesize customTextStorage=_customTextStorage;
@property(retain, nonatomic) MMRichAttachmentClipView *clipView; // @synthesize clipView=_clipView;
@property(retain, nonatomic) MMRichAttachmentTextView *wenoteRichTextView; // @synthesize wenoteRichTextView=_wenoteRichTextView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak WeNoteWindowController *weakWindowController; // @synthesize weakWindowController=_weakWindowController;
- (void)currentScrollViewBoundsChange:(id)arg1;
- (void)showToastViewOnForwardedNote;
- (void)updateSyncBtnWithSyncStatus:(int)arg1;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)onAddFailed:(unsigned int)arg1;
- (void)onAddSuccess:(unsigned int)arg1;
- (void)onFavItem:(unsigned int)arg1 syncStatusChange:(int)arg2;
- (void)favoritesMgrDidAddItems:(id)arg1 ErrCode:(int)arg2;
- (void)favoritesMgrDidUpdatedItemsWithLocalIDArray:(id)arg1;
- (void)onDownloadMsgRecordHtmlFile;
- (void)onDownloadFavHtmlFile;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadFavItemRecordOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)tokenFieldDoShow:(BOOL)arg1 diffHeight:(double)arg2;
- (long long)tagDeleteCount:(id)arg1;
- (long long)tagAddedCount:(id)arg1;
- (BOOL)tagHasChanged:(id)arg1;
- (void)tokenFieldEscDidKeyUp:(id)arg1;
- (void)tokenFieldSizeDidChange:(struct CGRect)arg1 oldSize:(struct CGRect)arg2;
- (void)parseTagTokens:(id)arg1;
- (void)tokenFieldDidChange:(id)arg1;
- (id)urlEncodeString:(id)arg1;
- (void)updateTagField;
- (void)textView:(id)arg1 draggedCell:(id)arg2 inRect:(struct CGRect)arg3 event:(id)arg4 atIndex:(unsigned long long)arg5;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (BOOL)textView:(id)arg1 formatAllToolBarStatus:(int)arg2;
- (BOOL)textView:(id)arg1 shouldUpdateToolBarWithBulletType:(id)arg2;
- (BOOL)textView:(id)arg1 shouldUpdateToolBarWithAttribtues:(id)arg2;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (id)textView:(id)arg1 willChangeSelectionFromCharacterRanges:(id)arg2 toCharacterRanges:(id)arg3;
- (void)textDidChange:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)superDeleteBackward;
- (BOOL)superDeleteNote;
- (BOOL)superShareToFriends;
- (BOOL)superSaveNote;
- (BOOL)superHandlePickFile;
- (BOOL)superHandleEscapeEvent;
- (BOOL)textView:(id)arg1 shouldAcceptFileAttachment:(id)arg2;
- (BOOL)textView:(id)arg1 shouldAcceptPastedAttributedString:(id)arg2;
- (id)textView:(id)arg1 attachmentViewWithAttachment:(id)arg2;
- (void)textView:(id)arg1 attachmentView:(id)arg2 didClick:(id)arg3;
- (void)textView:(id)arg1 attachmentView:(id)arg2 didLoadImage:(id)arg3 withSize:(struct CGSize)arg4;
- (void)textView:(id)arg1 attachmentView:(id)arg2 didChangeLayout:(int)arg3;
- (void)attachmentView:(id)arg1 didChangeLayout:(int)arg2 canUndo:(BOOL)arg3;
- (void)textView:(id)arg1 attachmentView:(id)arg2 menuAction:(int)arg3;
- (id)getAlertMessage:(long long)arg1;
- (void)stopPlayingAudio;
- (id)getPlayingObjectId;
- (void)startPlayVoiceAnyway:(id)arg1 lastPlayTime:(double)arg2;
- (void)startPlayVoice:(id)arg1 lastPlayTime:(double)arg2;
- (void)redoSwitchLayout:(id)arg1;
- (void)cleanWeNoteDragFolder;
- (void)draggingEnded:(id)arg1;
- (struct CGRect)draggingFrameForEvent:(id)arg1 withShowSize:(struct CGSize)arg2;
- (id)getForwardFavItem;
- (BOOL)operationOutOfSingleAttachmentSizeLimit:(unsigned long long)arg1 withType:(long long)arg2;
- (BOOL)operationOutOfTotalSizeLimit:(unsigned long long)arg1;
- (void)forwardMsgContentToContactsWithUserNames:(id)arg1 leavedMessage:(id)arg2;
- (void)forwardFavContentToContactsWithUserNames:(id)arg1 leavedMessage:(id)arg2;
- (void)favContent;
- (void)forwardContent:(id)arg1;
- (id)selectedRangeFontForRichTextEditorToolbar;
- (int)infoTypeToFailedInsertIdKey:(int)arg1;
- (int)infoTypeToSuccessInsertIdKey:(int)arg1;
- (void)onPreprocessFilesDidFinish;
- (void)onPreprocessFilesWillStart;
- (void)richTextViewToolbarShouldAnimatedUpdateSynsStatusTipsLabel:(int)arg1 dotCount:(unsigned int)arg2;
- (void)richTextViewToolbarDidSelectShowMore:(int)arg1;
- (void)richTextViewToolbarDidSelectDeleteNote;
- (void)richTextViewToolbarDidSelectPickFiles:(id)arg1;
- (void)richTextViewToolbarDidSelectTagNote;
- (void)richTextViewToolbarDidSelectSyncNote;
- (void)richTextViewToolbarDidSelectFontSize:(id)arg1;
- (void)richTextViewToolbarDidSelectInsertSeparateLine;
- (void)richTextViewToolbarDidSelectTodoBulletPoint;
- (void)richTextViewToolbarDidSelectOrderBulletPoint;
- (void)richTextViewToolbarDidSelectBulletPoint;
- (void)richTextViewToolbarDidSelectHighlight;
- (void)richTextViewToolbarDidSelectUnderline;
- (void)richTextViewToolbarDidSelectItalic;
- (void)richTextViewToolbarDidSelectBold;
- (int)featuresEnabledForMMRichTextViewToolbar;
- (void)onTextDidChangeTimeOut;
- (BOOL)canForceSave;
- (void)resetParentFavItemOnConflict;
- (void)onWindowReisze;
- (BOOL)isFirstInitialSyningFavItem:(id)arg1;
- (BOOL)isEmpty;
- (void)saveWNArticleWithTagList:(id)arg1 action:(int)arg2;
- (void)backupOnAppTerminate;
- (void)backup;
- (void)scheduleBackup;
- (void)saveNoteWithAction:(int)arg1;
- (void)saveNoteOnCreateNew;
- (void)insertNewlineIfNeededWhenTextChanged;
- (void)insertNewlineIfNeededWhenDeletedBackward:(unsigned long long)arg1 lastIndex:(unsigned long long)arg2 isMediaObj:(BOOL)arg3;
- (void)insertNewlineIfNeededWhenInsertText:(unsigned long long)arg1 lastIndex:(unsigned long long)arg2 isMediaObj:(BOOL)arg3;
- (void)reloadTextViewWhenContentChanged:(int)arg1;
- (void)logAllInvalidDataField;
- (void)loadAttributedStringToTextView:(id)arg1;
- (id)parseParagrapsToAttributedString;
- (BOOL)shouldPreLoadingHtml:(id)arg1;
- (void)setupParentFavItem:(id)arg1 isOnWindowDidLoad:(BOOL)arg2;
- (void)setupParentMsg:(id)arg1;
- (void)updateLayout;
- (id)genReportNoteID;
- (id)genOPBaseReporter;
- (BOOL)isWaitingSyncFinish;
- (void)msgSendToSetupParentFavItem:(id)arg1;
- (void)checkItemUploadStatus;
- (void)updateLoadingWording:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)initTagBar;
- (void)fontSizeClassChanged:(id)arg1;
- (void)initRichTextView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWindowController:(id)arg1 noteState:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

