//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt-Protocol.h"
#import "JNWCollectionViewDataSource-Protocol.h"
#import "JNWCollectionViewDelegate-Protocol.h"
#import "JNWCollectionViewGridLayoutDelegate-Protocol.h"
#import "JNWCollectionViewListLayoutDelegate-Protocol.h"
#import "MMBoxSelectionViewDelegate-Protocol.h"
#import "MMFavoritesDetailCellDelegate-Protocol.h"
#import "MMFavoritesMgrExt-Protocol.h"
#import "MMFavoritesMultipleControlViewDelegate-Protocol.h"
#import "MMFavoritesViewControllerDetailProtocol-Protocol.h"
#import "MMNetExt-Protocol.h"
#import "MMViewerWindowDelegate-Protocol.h"
#import "NSDraggingSource-Protocol.h"
#import "NSSearchFieldDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class MMBoxSelectionView, MMDragEventView, MMDraggingOverlayView, MMFavoriteCollectionView, MMFavoriteTagEditLogic, MMFavoritesCollectionData, MMFavoritesDetailBaseCell, MMFavoritesMultipleControlView, MMMediumDivider, MMTimer, NSArray, NSMutableArray, NSMutableDictionary, NSResponder, NSString, NSTextField, NSView;
@protocol MMFavoriteDetailViewContollerDelegate;

@interface MMFavoriteDetailViewContoller : MMViewController <MMFavoritesDetailCellDelegate, NSTextFieldDelegate, NSDraggingSource, MMFavoritesMgrExt, AccountServiceExt, MMViewerWindowDelegate, MMFavoritesMultipleControlViewDelegate, NSSearchFieldDelegate, MMNetExt, JNWCollectionViewDelegate, JNWCollectionViewDataSource, JNWCollectionViewGridLayoutDelegate, JNWCollectionViewListLayoutDelegate, MMBoxSelectionViewDelegate, MMFavoritesViewControllerDetailProtocol>
{
    BOOL _isMultipleSelecting;
    BOOL _isControlViewAnimating;
    BOOL _clearSearchReload;
    id <MMFavoriteDetailViewContollerDelegate> _delegate;
    MMDragEventView *_headerView;
    NSTextField *_titleTextField;
    MMMediumDivider *_divider;
    MMDraggingOverlayView *_draggingOverlayView;
    id _mouseDraggedEvent;
    MMTimer *_timer;
    unsigned long long _lastCalledSearchTime;
    NSString *_searchingString;
    NSView *_noSearchResultView;
    NSTextField *_noSearchResultTextFiled;
    NSMutableDictionary *_viewerWindowDic;
    unsigned long long _currentLayoutStyle;
    MMFavoriteCollectionView *_collectionView;
    MMFavoritesCollectionData *_collectionData;
    MMFavoritesCollectionData *_originCollectionData;
    NSArray *_allPreviewItems;
    NSArray *_cellsBeingDragged;
    MMFavoritesDetailBaseCell *_cellShowSwipe;
    MMFavoriteTagEditLogic *_tagLogic;
    MMFavoritesMultipleControlView *_multipleControlView;
    NSMutableArray *_multipleSelectedItems;
    MMBoxSelectionView *_boxSelectionView;
    NSResponder *_lastFirstResponder;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL clearSearchReload; // @synthesize clearSearchReload=_clearSearchReload;
@property(nonatomic) BOOL isControlViewAnimating; // @synthesize isControlViewAnimating=_isControlViewAnimating;
@property(nonatomic) __weak NSResponder *lastFirstResponder; // @synthesize lastFirstResponder=_lastFirstResponder;
@property(retain, nonatomic) MMBoxSelectionView *boxSelectionView; // @synthesize boxSelectionView=_boxSelectionView;
@property(retain, nonatomic) NSMutableArray *multipleSelectedItems; // @synthesize multipleSelectedItems=_multipleSelectedItems;
@property(nonatomic) BOOL isMultipleSelecting; // @synthesize isMultipleSelecting=_isMultipleSelecting;
@property(retain, nonatomic) MMFavoritesMultipleControlView *multipleControlView; // @synthesize multipleControlView=_multipleControlView;
@property(retain, nonatomic) MMFavoriteTagEditLogic *tagLogic; // @synthesize tagLogic=_tagLogic;
@property(retain, nonatomic) MMFavoritesDetailBaseCell *cellShowSwipe; // @synthesize cellShowSwipe=_cellShowSwipe;
@property(retain, nonatomic) NSArray *cellsBeingDragged; // @synthesize cellsBeingDragged=_cellsBeingDragged;
@property(retain, nonatomic) NSArray *allPreviewItems; // @synthesize allPreviewItems=_allPreviewItems;
@property(retain, nonatomic) MMFavoritesCollectionData *originCollectionData; // @synthesize originCollectionData=_originCollectionData;
@property(retain, nonatomic) MMFavoritesCollectionData *collectionData; // @synthesize collectionData=_collectionData;
@property(retain, nonatomic) MMFavoriteCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long currentLayoutStyle; // @synthesize currentLayoutStyle=_currentLayoutStyle;
@property(retain, nonatomic) NSMutableDictionary *viewerWindowDic; // @synthesize viewerWindowDic=_viewerWindowDic;
@property __weak NSTextField *noSearchResultTextFiled; // @synthesize noSearchResultTextFiled=_noSearchResultTextFiled;
@property(nonatomic) __weak NSView *noSearchResultView; // @synthesize noSearchResultView=_noSearchResultView;
@property(retain, nonatomic) NSString *searchingString; // @synthesize searchingString=_searchingString;
@property(nonatomic) unsigned long long lastCalledSearchTime; // @synthesize lastCalledSearchTime=_lastCalledSearchTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id mouseDraggedEvent; // @synthesize mouseDraggedEvent=_mouseDraggedEvent;
@property(retain, nonatomic) MMDraggingOverlayView *draggingOverlayView; // @synthesize draggingOverlayView=_draggingOverlayView;
@property(retain, nonatomic) MMMediumDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) MMDragEventView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <MMFavoriteDetailViewContollerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cellViewOnClickTagButton:(id)arg1 tag:(id)arg2;
- (struct CGRect)_adjustRectForSelectedRect:(struct CGRect)arg1;
- (void)boxSelectionView:(id)arg1 didFinishSelecting:(struct CGRect)arg2;
- (void)boxSelectionView:(id)arg1 selectedRectChange:(struct CGRect)arg2;
- (BOOL)boxSelectionView:(id)arg1 shouldBeginDragging:(struct CGPoint)arg2;
- (void)multipleControlViewDidClickCloseButton:(id)arg1;
- (double)collectionView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)genBrowseDetailDataWithItem:(id)arg1;
- (id)genEnterDetailDataWithItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 mouseUpInItemAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)collectionView:(id)arg1 mouseExitedInItemAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)collectionView:(id)arg1 mouseDownInItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)shouldShowSectionHeader;
- (id)collectionView:(id)arg1 viewForSupplementaryViewOfKind:(id)arg2 inSection:(long long)arg3;
- (id)getFavItemWithLocalId:(unsigned int)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_doSingleMultipleSelectionForCell:(id)arg1;
- (void)_doShirtMultipleSelectionForCell:(id)arg1;
- (void)_selectGridInRect:(struct CGRect)arg1;
- (void)_selectListInRect:(struct CGRect)arg1;
- (void)_enableMultipleControlButtons:(BOOL)arg1;
- (void)_deselectedItem:(id)arg1;
- (BOOL)_selectedItem:(id)arg1;
- (void)_shareBySessionPickerWithItems:(id)arg1;
- (void)_showModelAlertWithStyle:(long long)arg1 title:(id)arg2 message:(id)arg3 confirm:(id)arg4 cancel:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_errorStringByTypeSet:(id)arg1;
- (id)_errorStringByCodeSet:(id)arg1 typeSet:(id)arg2;
- (void)setupMultipleControlViewButtons:(id)arg1;
- (void)registerCollectionViewCell;
- (void)setupCollectionViewLayout;
- (void)setupCollectionView;
- (void)handleAppFontSize;
- (void)windowDidBecomeKeyAction:(id)arg1;
- (void)windowDidResignKeyAction:(id)arg1;
- (void)onNetStatusChange:(int)arg1;
- (BOOL)cellSwipeDeleteButtonShown;
- (void)cellCleanSwipeEffect:(id)arg1;
- (void)cellShowSwipeEffect:(id)arg1;
- (void)cellSwipeDeleteConfirm:(id)arg1;
- (void)favoritesMgrDidProcessTagFromService:(id)arg1 updateTags:(id)arg2 deleteTags:(id)arg3;
- (void)favoritesMgrDidUpdateTagsWithLocalIDArray:(id)arg1;
- (void)onAddLocalNoteItem:(id)arg1 ErrCode:(int)arg2;
- (void)favoritesMgrDidUpdatedItemWithLocalID:(unsigned int)arg1;
- (void)favoritesMgrDidUpdatedItemsWithLocalIDArray:(id)arg1;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)favoritesMgrDidAddItems:(id)arg1 ErrCode:(int)arg2;
- (void)delaySearchOrReloadData;
- (BOOL)canReload:(id)arg1;
- (BOOL)isUnderCurrentSelectSiderBar:(id)arg1 currentSideItemType:(int)arg2;
- (void)onClickMultipleShare:(id)arg1;
- (void)onClickMultipleAddTag:(id)arg1;
- (void)onClickMultipleDelete:(id)arg1;
- (void)exitMultipleSelection;
- (void)setMultipleControlViewHidden:(BOOL)arg1;
- (void)exportFileItems:(id)arg1;
- (void)openItem:(id)arg1;
- (void)_downloadSelectedFiles;
- (void)_shareItems:(id)arg1;
- (void)_actuallyDeleteItems:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)editTagesItem:(id)arg1;
- (void)addTagesItem:(id)arg1;
- (void)paste:(id)arg1;
- (void)_copyFavoritesItems:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)clearSearch;
- (void)doSearch;
- (void)searchWithKeyword:(id)arg1;
- (BOOL)isSearching;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)cellDragged:(id)arg1 dragEvent:(id)arg2 originalPosition:(struct CGPoint)arg3;
- (void)_contextMenuMultipleSelect:(id)arg1;
- (void)_contextMenuShowSourceDebugTool;
- (void)_contextMenuShowInFinder:(id)arg1;
- (void)_contextMenuShowXML:(id)arg1;
- (void)_contextMenuEditTag:(id)arg1;
- (void)_contextMenuDelete:(id)arg1;
- (void)_contextMenuCopy:(id)arg1;
- (void)_contextMenuMuteToPlay:(id)arg1;
- (void)_contextMenuExport:(id)arg1;
- (void)_contextMenuShare:(id)arg1;
- (void)cellViewNeedsHeightRecalculated:(id)arg1;
- (void)closedContextMenuFromCell:(id)arg1;
- (void)openedContextMenuFromCell:(id)arg1;
- (id)contextMenuForCell:(id)arg1 forEvent:(id)arg2;
- (void)keyDown:(id)arg1;
- (void)windowDidColsed:(id)arg1;
- (struct CGRect)originScreenRectForAnimationForWindow:(id)arg1;
- (id)getCollectionView;
- (void)scrollToLatest:(BOOL)arg1;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)scrollToItem:(id)arg1;
- (void)_reloadData;
- (id)getCurrentSelectItem;
- (void)reloadData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadData:(CDUnknownBlockType)arg1;
- (void)reloadData;
- (void)setupDraggingOverlayView;
- (void)setupTitleText:(id)arg1;
- (void)setupHeaderView;
- (void)viewChangedEffectiveAppearance;
- (void)handleCellUpdateNotification;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)checkAsyncTask;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

