//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "AccountServiceExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMFavoritesMgrExt-Protocol.h"
#import "MMPreviewWindowDelegate-Protocol.h"
#import "NSPageControllerDelegate-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MMDragEventView, MMPreviewEventView, MMPreviewTitleButton, MMPreviewWindow, MMQLPreviewItem, NSArray, NSButton, NSImageView, NSPageController, NSProgressIndicator, NSString, NSTextField, NSView, NSVisualEffectView, QLPreviewView;

@interface MMBasePreviewPanelWindowController : NSWindowController <AccountServiceExt, NSWindowDelegate, MMPreviewWindowDelegate, NSSharingServiceDelegate, IMessageExt, MMFavoritesMgrExt, NSPageControllerDelegate>
{
    MMQLPreviewItem *m_currentPreviewingFileItem;
    BOOL _allowMultipleItems;
    BOOL _isFullScreen;
    BOOL _isKeyDownNavigation;
    unsigned long long _previewScene;
    unsigned long long _previewSubScene;
    MMPreviewEventView *_containerView;
    NSVisualEffectView *_vibrantView;
    NSPageController *_pageController;
    NSArray *_previewItemList;
    NSView *_loadingViewContarner;
    NSProgressIndicator *_loadingView;
    NSTextField *_loadingLabel;
    NSView *_failedImageViewContainer;
    NSImageView *_failedImageView;
    NSTextField *_errMsgLabel;
    MMDragEventView *_mmTitlebarView;
    NSView *_windowControlContainer;
    NSView *_operationContainer;
    MMPreviewTitleButton *_nextItemButton;
    MMPreviewTitleButton *_prevItemButton;
    MMPreviewTitleButton *_openWithButton;
    MMPreviewTitleButton *_showMoreButton;
    MMPreviewTitleButton *_zoomOutButton;
    MMPreviewTitleButton *_zoomInButton;
    MMPreviewTitleButton *_rotateButton;
    NSButton *_mmCloseButton;
    NSButton *_mmFullScreenButton;
    QLPreviewView *_filePreviewView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QLPreviewView *filePreviewView; // @synthesize filePreviewView=_filePreviewView;
@property(nonatomic) BOOL isKeyDownNavigation; // @synthesize isKeyDownNavigation=_isKeyDownNavigation;
@property(nonatomic) BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) NSButton *mmFullScreenButton; // @synthesize mmFullScreenButton=_mmFullScreenButton;
@property(retain, nonatomic) NSButton *mmCloseButton; // @synthesize mmCloseButton=_mmCloseButton;
@property(retain, nonatomic) MMPreviewTitleButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) MMPreviewTitleButton *zoomInButton; // @synthesize zoomInButton=_zoomInButton;
@property(retain, nonatomic) MMPreviewTitleButton *zoomOutButton; // @synthesize zoomOutButton=_zoomOutButton;
@property(retain, nonatomic) MMPreviewTitleButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(retain, nonatomic) MMPreviewTitleButton *openWithButton; // @synthesize openWithButton=_openWithButton;
@property(retain, nonatomic) MMPreviewTitleButton *prevItemButton; // @synthesize prevItemButton=_prevItemButton;
@property(retain, nonatomic) MMPreviewTitleButton *nextItemButton; // @synthesize nextItemButton=_nextItemButton;
@property(retain, nonatomic) NSView *operationContainer; // @synthesize operationContainer=_operationContainer;
@property(retain, nonatomic) NSView *windowControlContainer; // @synthesize windowControlContainer=_windowControlContainer;
@property(retain, nonatomic) MMDragEventView *mmTitlebarView; // @synthesize mmTitlebarView=_mmTitlebarView;
@property __weak NSTextField *errMsgLabel; // @synthesize errMsgLabel=_errMsgLabel;
@property __weak NSImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
@property __weak NSView *failedImageViewContainer; // @synthesize failedImageViewContainer=_failedImageViewContainer;
@property __weak NSTextField *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property __weak NSProgressIndicator *loadingView; // @synthesize loadingView=_loadingView;
@property __weak NSView *loadingViewContarner; // @synthesize loadingViewContarner=_loadingViewContarner;
@property(retain, nonatomic) NSArray *previewItemList; // @synthesize previewItemList=_previewItemList;
@property(retain, nonatomic) NSPageController *pageController; // @synthesize pageController=_pageController;
@property(retain, nonatomic) NSVisualEffectView *vibrantView; // @synthesize vibrantView=_vibrantView;
@property(retain, nonatomic) MMPreviewEventView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long previewSubScene; // @synthesize previewSubScene=_previewSubScene;
@property(nonatomic) unsigned long long previewScene; // @synthesize previewScene=_previewScene;
@property(nonatomic) BOOL allowMultipleItems; // @synthesize allowMultipleItems=_allowMultipleItems;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)shortCutMenuActionCopy;
- (void)shortCutMenuActionExport;
- (void)shortCutCloseActionWithEscape;
- (void)shortCutCloseActionWithSpace;
- (id)getPreviewTitle;
- (void)_sharingServiceAction:(id)arg1;
- (void)_menuActionExport:(id)arg1;
- (void)doAddFavItem:(id)arg1;
- (void)_menuActionFavorite:(id)arg1;
- (void)forwardPreviewItemToWeWork:(id)arg1;
- (void)forwardPreviewItem:(id)arg1 toContactsWithUserNames:(id)arg2 leavedMessage:(id)arg3;
- (void)sendPreviewItem:(id)arg1 toContactsWithUserNames:(id)arg2 leavedMessage:(id)arg3;
- (void)sendPreviewItemToWeWork:(id)arg1;
- (void)sendAndForwardPreviewItemToWeWork:(id)arg1;
- (void)_menuActionForward:(id)arg1;
- (void)_menuActionCopy;
- (void)_menuActionOpenMethods:(id)arg1;
- (void)_menuActionOpenFolder;
- (void)_menuActionLocateMessage;
- (void)rightMouseMenuActionLocateMessage;
- (void)buttonMenuActionLocateMessage;
- (void)rightMouseMenuActionOpenMethods:(id)arg1;
- (void)buttonMenuActionOpenMethods:(id)arg1;
- (void)rightMouseMenuActionOpenFolder;
- (void)buttonMenuActionOpenFolder;
- (void)rightMouseSharingServiceAction:(id)arg1;
- (void)buttonSharingServiceAction:(id)arg1;
- (void)rightMouseMenuActionExport:(id)arg1;
- (void)buttonMenuActionExport:(id)arg1;
- (void)rightMouseMenuActionFavorite:(id)arg1;
- (void)buttonMenuActionFavorite:(id)arg1;
- (void)rightMouseMenuActionForward:(id)arg1;
- (void)buttonMenuActionForward:(id)arg1;
- (void)rightMouseMenuActionCopy;
- (void)buttonMenuActionCopy;
- (id)rightMouseMakeContextMenu;
- (id)buttonMakeContextMenu;
- (void)onUserLogout;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)closeWithMenu;
- (void)showMoreMenuInView:(id)arg1;
- (void)openWith:(id)arg1;
- (void)copy:(id)arg1;
- (void)toggleFullScreenWithSender:(id)arg1;
- (void)closeWithSender:(id)arg1;
- (struct CGRect)windowFrameRectOnInitialWithImageSize:(struct CGSize)arg1 andSourceFrameRect:(struct CGRect)arg2;
- (BOOL)shouldShowShareEntrance;
- (BOOL)shouldUseCompactStyle;
- (void)openFileWithPath:(id)arg1 andIsByFolder:(BOOL)arg2;
- (id)getCurrentPreviewItem;
- (void)setupPageController;
- (void)close;
- (void)show;
- (void)setupPreviewView:(unsigned long long)arg1;
- (void)setupTitle;
- (void)setupOpenWithButton;
- (void)setupTitleBarView;
- (void)setupKeyDownHandler;
- (void)setupFailedImageView;
- (void)setupLoadingView;
- (void)setupContextualMenu;
- (void)setupNavigationButtons;
- (void)windowDidResize:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithPreviewItemList:(id)arg1 scene:(unsigned long long)arg2 subScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) MMPreviewWindow *window; // @dynamic window;

@end

