//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "MMPreviewWindowDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSPageControllerDelegate-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MMButton, MMCustomDisableButton, MMDragEventView, MMMediumDivider, MMPreviewEventView, MMPreviewPageController, MMPreviewToggleRestoreButton, MMPreviewViewController, MMPreviewWindow, MMTimer, MMView, NSArray, NSButton, NSImageView, NSString, NSTextField, NSTrackingArea, NSView, _TtC6WeChat15TrackButtonView;

@interface MMPreviewWindowController : MMWindowController <NSWindowDelegate, NSSharingServiceDelegate, MMPreviewWindowDelegate, NSMenuDelegate, NSPageControllerDelegate>
{
    BOOL _isUpdatingItemList;
    BOOL _isFullScreen;
    BOOL _useKeyNavigation;
    BOOL _useButtonNavigation;
    BOOL _useSwipeNavigation;
    BOOL _bAtCenterBeforeDownload;
    BOOL _touchEdge;
    BOOL _isAnimationOpening;
    BOOL _canResizeWindow;
    BOOL _initialOpening;
    BOOL _shouldPlayVideo;
    BOOL _isShowWindowResize;
    BOOL _isClosing;
    BOOL _isDoingRotating;
    MMPreviewEventView *_containerView;
    NSImageView *_animationThumbView;
    MMPreviewPageController *_pageController;
    MMPreviewViewController *_previewViewController;
    NSArray *_previewItemList;
    unsigned long long _previewType;
    unsigned long long _previewScene;
    unsigned long long _previewSubScene;
    unsigned long long _preIndex;
    NSView *_failedBgView;
    NSView *_failedImageViewContainer;
    NSImageView *_failedContrastView;
    NSImageView *_failedImageView;
    NSTextField *_errMsgLabel;
    NSView *_toolBarBgContainer;
    MMDragEventView *_toolBarContainer;
    NSButton *_mmCloseBtn;
    NSButton *_mmZoomButton;
    MMCustomDisableButton *_prevItemButton;
    MMCustomDisableButton *_nextItemButton;
    MMMediumDivider *_firstDivider;
    MMCustomDisableButton *_zoomOutButton;
    MMCustomDisableButton *_zoomInButton;
    MMPreviewToggleRestoreButton *_restoreButton;
    MMMediumDivider *_secondDivider;
    MMCustomDisableButton *_rotateButton;
    MMCustomDisableButton *_editButton;
    MMButton *_menuButton;
    MMTimer *_resizeTimer;
    MMView *_fullScreenToolbar;
    NSButton *_fullScreenCloseBtn;
    NSButton *_fullScreenZoomBtn;
    NSTrackingArea *_fullScreenTrackingArea;
    MMTimer *_fullScreenToolbarTimer;
    double _startLiveTransitionTime;
    _TtC6WeChat15TrackButtonView *_prevButton;
    _TtC6WeChat15TrackButtonView *_nextButton;
    NSTrackingArea *_leftTrackingArea;
    NSTrackingArea *_rightTrackingArea;
    struct CGRect _windowFrame;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isDoingRotating; // @synthesize isDoingRotating=_isDoingRotating;
@property(retain, nonatomic) NSTrackingArea *rightTrackingArea; // @synthesize rightTrackingArea=_rightTrackingArea;
@property(retain, nonatomic) NSTrackingArea *leftTrackingArea; // @synthesize leftTrackingArea=_leftTrackingArea;
@property(retain, nonatomic) _TtC6WeChat15TrackButtonView *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) _TtC6WeChat15TrackButtonView *prevButton; // @synthesize prevButton=_prevButton;
@property(nonatomic) double startLiveTransitionTime; // @synthesize startLiveTransitionTime=_startLiveTransitionTime;
@property(retain, nonatomic) MMTimer *fullScreenToolbarTimer; // @synthesize fullScreenToolbarTimer=_fullScreenToolbarTimer;
@property(retain, nonatomic) NSTrackingArea *fullScreenTrackingArea; // @synthesize fullScreenTrackingArea=_fullScreenTrackingArea;
@property(retain, nonatomic) NSButton *fullScreenZoomBtn; // @synthesize fullScreenZoomBtn=_fullScreenZoomBtn;
@property(retain, nonatomic) NSButton *fullScreenCloseBtn; // @synthesize fullScreenCloseBtn=_fullScreenCloseBtn;
@property(retain, nonatomic) MMView *fullScreenToolbar; // @synthesize fullScreenToolbar=_fullScreenToolbar;
@property(nonatomic) BOOL isClosing; // @synthesize isClosing=_isClosing;
@property(retain, nonatomic) MMTimer *resizeTimer; // @synthesize resizeTimer=_resizeTimer;
@property(retain, nonatomic) MMButton *menuButton; // @synthesize menuButton=_menuButton;
@property(retain, nonatomic) MMCustomDisableButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) MMCustomDisableButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) MMMediumDivider *secondDivider; // @synthesize secondDivider=_secondDivider;
@property(retain, nonatomic) MMPreviewToggleRestoreButton *restoreButton; // @synthesize restoreButton=_restoreButton;
@property(retain, nonatomic) MMCustomDisableButton *zoomInButton; // @synthesize zoomInButton=_zoomInButton;
@property(retain, nonatomic) MMCustomDisableButton *zoomOutButton; // @synthesize zoomOutButton=_zoomOutButton;
@property(retain, nonatomic) MMMediumDivider *firstDivider; // @synthesize firstDivider=_firstDivider;
@property(retain, nonatomic) MMCustomDisableButton *nextItemButton; // @synthesize nextItemButton=_nextItemButton;
@property(retain, nonatomic) MMCustomDisableButton *prevItemButton; // @synthesize prevItemButton=_prevItemButton;
@property(retain, nonatomic) NSButton *mmZoomButton; // @synthesize mmZoomButton=_mmZoomButton;
@property(retain, nonatomic) NSButton *mmCloseBtn; // @synthesize mmCloseBtn=_mmCloseBtn;
@property(retain, nonatomic) MMDragEventView *toolBarContainer; // @synthesize toolBarContainer=_toolBarContainer;
@property(retain, nonatomic) NSView *toolBarBgContainer; // @synthesize toolBarBgContainer=_toolBarBgContainer;
@property __weak NSTextField *errMsgLabel; // @synthesize errMsgLabel=_errMsgLabel;
@property __weak NSImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
@property __weak NSImageView *failedContrastView; // @synthesize failedContrastView=_failedContrastView;
@property __weak NSView *failedImageViewContainer; // @synthesize failedImageViewContainer=_failedImageViewContainer;
@property __weak NSView *failedBgView; // @synthesize failedBgView=_failedBgView;
@property(nonatomic) BOOL isShowWindowResize; // @synthesize isShowWindowResize=_isShowWindowResize;
@property(nonatomic) BOOL shouldPlayVideo; // @synthesize shouldPlayVideo=_shouldPlayVideo;
@property(nonatomic) struct CGRect windowFrame; // @synthesize windowFrame=_windowFrame;
@property(nonatomic) BOOL initialOpening; // @synthesize initialOpening=_initialOpening;
@property(nonatomic) BOOL canResizeWindow; // @synthesize canResizeWindow=_canResizeWindow;
@property(nonatomic) unsigned long long preIndex; // @synthesize preIndex=_preIndex;
@property(nonatomic) BOOL isAnimationOpening; // @synthesize isAnimationOpening=_isAnimationOpening;
@property(nonatomic) BOOL touchEdge; // @synthesize touchEdge=_touchEdge;
@property(nonatomic) BOOL bAtCenterBeforeDownload; // @synthesize bAtCenterBeforeDownload=_bAtCenterBeforeDownload;
@property(nonatomic) BOOL useSwipeNavigation; // @synthesize useSwipeNavigation=_useSwipeNavigation;
@property(nonatomic) BOOL useButtonNavigation; // @synthesize useButtonNavigation=_useButtonNavigation;
@property(nonatomic) BOOL useKeyNavigation; // @synthesize useKeyNavigation=_useKeyNavigation;
@property(nonatomic) BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) BOOL isUpdatingItemList; // @synthesize isUpdatingItemList=_isUpdatingItemList;
@property(nonatomic) unsigned long long previewSubScene; // @synthesize previewSubScene=_previewSubScene;
@property(nonatomic) unsigned long long previewScene; // @synthesize previewScene=_previewScene;
@property(nonatomic) unsigned long long previewType; // @synthesize previewType=_previewType;
@property(retain, nonatomic) NSArray *previewItemList; // @synthesize previewItemList=_previewItemList;
@property(retain, nonatomic) MMPreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(retain, nonatomic) MMPreviewPageController *pageController; // @synthesize pageController=_pageController;
@property(retain, nonatomic) NSImageView *animationThumbView; // @synthesize animationThumbView=_animationThumbView;
@property(retain, nonatomic) MMPreviewEventView *containerView; // @synthesize containerView=_containerView;
- (void)doAnimationForImageRotate;
- (void)doAnimationForImageRotateAfterResizeWindow;
- (void)doAnimationForImageRotateAndWindowFrame:(BOOL)arg1;
- (void)rotateFromMouseEvent:(BOOL)arg1;
- (struct CGRect)pageController:(id)arg1 frameForObject:(id)arg2;
- (void)pageControllerDidEndLiveTransition:(id)arg1;
- (void)pageControllerWillStartLiveTransition:(id)arg1;
- (id)pageController:(id)arg1 viewControllerForIdentifier:(id)arg2;
- (id)pageController:(id)arg1 identifierForObject:(id)arg2;
- (void)disableAllActions;
- (void)updateToolbarButtonWithRestoreEnabled:(BOOL)arg1;
- (void)updateToolbarButtonWithZoomInEnabled:(BOOL)arg1 zoomOutEnabled:(BOOL)arg2;
- (void)updateToolbarButtonWithPrevEnabled:(BOOL)arg1 isNextEnabled:(BOOL)arg2;
- (void)updateToolbarButtonWithLoading:(BOOL)arg1;
- (void)updateToolbarControls;
- (struct CGRect)toolbarFrame;
- (void)doSomethingWhenUserLogout;
- (void)doSomethingWhenUnLocked;
- (void)doSomethingWhenLocked;
- (void)_clickButtonSharingServiceAction:(id)arg1;
- (void)_rightMouseSharingServiceAction:(id)arg1;
- (void)_menuActionExport;
- (void)doAddFavItem:(id)arg1;
- (void)_menuActionFavorite;
- (void)forwardPreviewItem:(id)arg1 toContactsWithUserNames:(id)arg2 leavedMessage:(id)arg3;
- (void)sendPreviewItem:(id)arg1 toContactsWithUserNames:(id)arg2 leavedMessage:(id)arg3;
- (void)_menuActionForward;
- (void)_menuActionCopy;
- (void)_menuActionOpenWith;
- (void)_menuActionOpenMethods:(id)arg1;
- (void)_menuActionOpenFolder;
- (void)_menuActionLocateMessage;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (id)fakeSubMenu;
- (void)rightMouseMenuActionLocateMessage;
- (void)rightMouseMenuActionOpenMethods:(id)arg1;
- (void)rightMouseMenuActionOpenFolder;
- (void)rightMouseMenuActionExport;
- (void)rightMouseMenuActionFavorite;
- (void)rightMouseMenuActionForward;
- (void)rightMouseMenuActionCopy;
- (void)rightMouseMenuActionOpenWith;
- (id)makeRightContextMenu;
- (void)resetContextMenu;
- (void)setupContextMenu;
- (void)shortCutMenuActionCopy;
- (void)shortCutMenuActionExport;
- (void)shortCutCloseActionWithEscape;
- (void)shortCutCloseActionWithSpace;
- (void)makeSmaller:(id)arg1;
- (void)makeLarger:(id)arg1;
- (void)makeStandardSize:(id)arg1;
- (void)clickButtonMenuActionOpenMethods:(id)arg1;
- (void)clickButtonMenuActionOpenFolder;
- (void)clickButtonMenuActionExport;
- (void)clickButtonMenuActionFavorite;
- (void)clickButtonMenuActionForward;
- (void)clickButtonMenuActionCopy;
- (void)clickButtonMenuActionOpenWith;
- (void)clickButtonMenuActionLocateMessage;
- (id)makeButtonContextMenu;
- (void)menuMore:(id)arg1;
- (void)edit:(id)arg1;
- (void)rotate:(id)arg1;
- (void)restore:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)nextItem:(id)arg1;
- (void)prevItem:(id)arg1;
- (void)fullScreenWithBtn:(id)arg1;
- (void)closeWithBtn:(id)arg1;
- (void)setCanotResize;
- (void)nextItemWithKeyDown:(BOOL)arg1;
- (void)prevItemWithKeyDown:(BOOL)arg1;
- (void)showTextToastWithHead:(BOOL)arg1;
- (void)showTextToastWithText:(id)arg1 withDuration:(double)arg2;
- (void)showTextToastWithText:(id)arg1;
- (void)toggleErrorLoadingView:(id)arg1;
- (void)toggleShowLoadingView;
- (void)toggleHideLoadingView;
- (void)toggleLoadingView;
- (void)showLoadingToast;
- (void)hideLoadingToast;
- (void)showErrorSubviews;
- (void)hideErrorSubviews;
- (void)fadeOutWindowAnimation:(struct CGRect)arg1 toRect:(struct CGRect)arg2 complete:(CDUnknownBlockType)arg3;
- (void)fadeInWindowAnimation:(struct CGRect)arg1 toRect:(struct CGRect)arg2 complete:(CDUnknownBlockType)arg3;
- (void)refreshOnKeyOrButtonNavigationWithItem:(id)arg1;
- (struct CGRect)_getWindowFrameOnLoadedWithImageSize:(struct CGSize)arg1 withCenterFixed:(struct CGPoint)arg2;
- (struct CGRect)_getWindowFrameOnLoadedWithImageSize:(struct CGSize)arg1 withLeftTopFixed:(BOOL)arg2;
- (struct CGRect)getWindowFrameOnRestoredWithImageSize:(struct CGSize)arg1 withLeftTopFixed:(BOOL)arg2 withWindowFrame:(struct CGRect)arg3;
- (struct CGRect)getWindowFrameOnRestoredWithImageSize:(struct CGSize)arg1 withLeftTopFixed:(BOOL)arg2;
- (struct CGRect)getWindowFrameOnDownloadImage:(struct CGSize)arg1;
- (struct CGRect)getWindowFrameOnLoadedWithImageSize:(struct CGSize)arg1;
- (struct CGRect)initialWindowFrameWithImageSize:(struct CGSize)arg1 sourceFrame:(struct CGRect)arg2;
- (struct CGSize)handleFloatingSize:(struct CGSize)arg1;
- (void)closeWithMenu;
- (BOOL)shouldShowShareEntrance;
- (BOOL)shouldShowEditEntrance;
- (BOOL)shouldShowMainwindow;
- (void)setupThumbForAnimationWithItem:(id)arg1 targetFrame:(struct CGRect)arg2 isOpening:(BOOL)arg3;
- (id)currentWindow;
- (id)currentScreen;
- (double)screenScale;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setupNextPrevButtons;
- (void)relayoutButtons;
- (void)updateWindowResizeZooming;
- (void)updateDidExitFullScreenZooming;
- (void)updateWillEnterFullScreenZooming;
- (void)shouldHideToolBarContainer:(BOOL)arg1;
- (void)setupToolBarForImmersiveMode;
- (void)hideToolBarForImmersiveMode:(BOOL)arg1;
- (void)shouldHideFullScreenToolBar:(BOOL)arg1;
- (void)shouldHideFullScreenToolBarTiming;
- (void)removeFullScreenToolBarTimer;
- (void)removeFullScreenToolBarTracking;
- (void)resetFullScreenToolBarTracking;
- (void)setupFullScreenToolBarTimer;
- (void)setupFullScreenToolBarTracking;
- (void)onFullScreenZoomBtnClicked:(id)arg1;
- (void)onFullScreenCloseBtnClicked:(id)arg1;
- (void)toggleFullScreenWithSender:(id)arg1;
- (void)closeWindowForEdit;
- (void)closeWindowWithoutAnimation;
- (void)closeWindowWithAnimation;
- (void)closeWindowAnimated:(BOOL)arg1;
- (void)disableBeforeClosing;
- (void)close;
- (void)showPreviewItem:(id)arg1 targetFrame:(struct CGRect)arg2;
- (void)show;
- (void)setWindowFrame:(struct CGRect)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (void)setupTitle;
- (void)openWith;
- (id)getCurrentPreviewItem;
- (id)getInitialPreviewItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupPageController;
- (BOOL)isUpdatingPageController:(id)arg1;
- (void)preloadVideoOfInfo:(id)arg1;
- (void)setupFullScreenToolBar;
- (void)_layoutToolbarToolBtns;
- (void)_layoutToolbarControlBtns;
- (void)setupToolBarContainer;
- (void)_layoutFailedImageView:(BOOL)arg1;
- (void)setupFailedImageView;
- (void)setupKeyDownHandler;
- (BOOL)_dragFarEnough:(struct CGPoint)arg1 from:(struct CGPoint)arg2;
- (void)removeAnimationThumbView;
- (void)setupAnimationThumbView;
- (void)commonSetup;
- (void)windowWillClose:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)removeThumbWhenResizing;
- (void)changeFrameWhenResizing;
- (void)windowDidResize:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (void)windowDidChangedEffectiveAppearance;
- (void)windowDidLoad;
- (void)dealloc;
- (void)onApplicationDidResignActive:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) MMPreviewWindow *window; // @dynamic window;

@end

