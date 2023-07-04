//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "IOCRTransMgrExt-Protocol.h"
#import "MMBasePreviewViewControllerDelegate-Protocol.h"
#import "MMImageTextRecognizeExt-Protocol.h"
#import "MMPageControllerDelegate-Protocol.h"
#import "MMPreviewWindowDelegate-Protocol.h"
#import "MMPreviewWindowOCRPluginDelegate-Protocol.h"
#import "MMPreviewWindowPluginDelegate-Protocol.h"
#import "MMQRCodeScannerExt-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MMBasePreviewViewController, MMButton, MMCustomDisableButton, MMDragEventView, MMFlatButton, MMMediumDivider, MMPageController, MMPreviewEventView, MMPreviewToggleRestoreButton, MMPreviewWindow, MMTimer, MMView, NSArray, NSButton, NSImageView, NSMutableArray, NSString, NSTextField, NSTrackingArea, NSView, _TtC6WeChat28PreviewTransitionTrackButton;
@protocol MMPreviewWindowControllerDelegate;

@interface MMPreviewWindowController : MMWindowController <NSSharingServiceDelegate, MMPreviewWindowDelegate, NSMenuDelegate, MMQRCodeScannerExt, IOCRTransMgrExt, MMImageTextRecognizeExt, MMPreviewWindowPluginDelegate, MMBasePreviewViewControllerDelegate, MMPreviewWindowOCRPluginDelegate, NSWindowDelegate, MMPageControllerDelegate>
{
    BOOL _isUpdatingItemList;
    BOOL _isFullScreen;
    BOOL _useKeyNavigation;
    BOOL _useButtonNavigation;
    BOOL _useSwipeNavigation;
    BOOL _bAtCenterBeforeDownload;
    BOOL _isAnimationOpening;
    BOOL _canResizeWindow;
    BOOL _initialOpening;
    BOOL _shouldPlayVideo;
    BOOL _isShowWindowResize;
    BOOL _isClosing;
    BOOL _isDoingRotating;
    BOOL _isDoingQRCode;
    BOOL _hasQRCodeInRect;
    BOOL _isDoingTranslate;
    BOOL _bDidResized;
    id <MMPreviewWindowControllerDelegate> _delegate;
    NSString *_uniqueID;
    MMPreviewEventView *_containerView;
    NSImageView *_animationThumbView;
    MMPageController *_pageController;
    MMBasePreviewViewController *_previewViewController;
    NSArray *_previewItemList;
    unsigned long long _previewType;
    unsigned long long _previewScene;
    unsigned long long _previewSubScene;
    NSView *_failedBgView;
    NSView *_failedImageViewContainer;
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
    MMButton *_qrButton;
    MMButton *_translateButton;
    MMCustomDisableButton *_textRecognizeButton;
    MMMediumDivider *_secondDivider;
    MMCustomDisableButton *_rotateButton;
    MMCustomDisableButton *_editButton;
    MMButton *_menuButton;
    MMFlatButton *_downloadOriginButton;
    MMButton *_downloadCancelBtn;
    MMTimer *_resizeTimer;
    NSView *_previewContainerView;
    NSView *_rightPluginContainer;
    MMView *_fullScreenToolbar;
    NSButton *_fullScreenCloseBtn;
    NSButton *_fullScreenZoomBtn;
    NSTrackingArea *_fullScreenTrackingArea;
    MMTimer *_fullScreenToolbarTimer;
    _TtC6WeChat28PreviewTransitionTrackButton *_prevButton;
    _TtC6WeChat28PreviewTransitionTrackButton *_nextButton;
    NSTrackingArea *_leftTrackingArea;
    NSTrackingArea *_rightTrackingArea;
    NSMutableArray *_windowPlugins;
    NSView *_invalidMaskView;
    unsigned long long _sessionId;
    struct CGRect _windowFrame;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSView *invalidMaskView; // @synthesize invalidMaskView=_invalidMaskView;
@property(retain, nonatomic) NSMutableArray *windowPlugins; // @synthesize windowPlugins=_windowPlugins;
@property(nonatomic) BOOL bDidResized; // @synthesize bDidResized=_bDidResized;
@property(nonatomic) BOOL isDoingTranslate; // @synthesize isDoingTranslate=_isDoingTranslate;
@property(nonatomic) BOOL hasQRCodeInRect; // @synthesize hasQRCodeInRect=_hasQRCodeInRect;
@property(nonatomic) BOOL isDoingQRCode; // @synthesize isDoingQRCode=_isDoingQRCode;
@property(nonatomic) BOOL isDoingRotating; // @synthesize isDoingRotating=_isDoingRotating;
@property(retain, nonatomic) NSTrackingArea *rightTrackingArea; // @synthesize rightTrackingArea=_rightTrackingArea;
@property(retain, nonatomic) NSTrackingArea *leftTrackingArea; // @synthesize leftTrackingArea=_leftTrackingArea;
@property(retain, nonatomic) _TtC6WeChat28PreviewTransitionTrackButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) _TtC6WeChat28PreviewTransitionTrackButton *prevButton; // @synthesize prevButton=_prevButton;
@property(retain, nonatomic) MMTimer *fullScreenToolbarTimer; // @synthesize fullScreenToolbarTimer=_fullScreenToolbarTimer;
@property(retain, nonatomic) NSTrackingArea *fullScreenTrackingArea; // @synthesize fullScreenTrackingArea=_fullScreenTrackingArea;
@property(retain, nonatomic) NSButton *fullScreenZoomBtn; // @synthesize fullScreenZoomBtn=_fullScreenZoomBtn;
@property(retain, nonatomic) NSButton *fullScreenCloseBtn; // @synthesize fullScreenCloseBtn=_fullScreenCloseBtn;
@property(retain, nonatomic) MMView *fullScreenToolbar; // @synthesize fullScreenToolbar=_fullScreenToolbar;
@property(retain, nonatomic) NSView *rightPluginContainer; // @synthesize rightPluginContainer=_rightPluginContainer;
@property(retain, nonatomic) NSView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
@property(nonatomic) BOOL isClosing; // @synthesize isClosing=_isClosing;
@property(retain, nonatomic) MMTimer *resizeTimer; // @synthesize resizeTimer=_resizeTimer;
@property(retain, nonatomic) MMButton *downloadCancelBtn; // @synthesize downloadCancelBtn=_downloadCancelBtn;
@property(retain, nonatomic) MMFlatButton *downloadOriginButton; // @synthesize downloadOriginButton=_downloadOriginButton;
@property(retain, nonatomic) MMButton *menuButton; // @synthesize menuButton=_menuButton;
@property(retain, nonatomic) MMCustomDisableButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) MMCustomDisableButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) MMMediumDivider *secondDivider; // @synthesize secondDivider=_secondDivider;
@property(retain, nonatomic) MMCustomDisableButton *textRecognizeButton; // @synthesize textRecognizeButton=_textRecognizeButton;
@property(retain, nonatomic) MMButton *translateButton; // @synthesize translateButton=_translateButton;
@property(retain, nonatomic) MMButton *qrButton; // @synthesize qrButton=_qrButton;
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
@property(retain, nonatomic) NSTextField *errMsgLabel; // @synthesize errMsgLabel=_errMsgLabel;
@property(retain, nonatomic) NSImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
@property(retain, nonatomic) NSView *failedImageViewContainer; // @synthesize failedImageViewContainer=_failedImageViewContainer;
@property(retain, nonatomic) NSView *failedBgView; // @synthesize failedBgView=_failedBgView;
@property(nonatomic) BOOL isShowWindowResize; // @synthesize isShowWindowResize=_isShowWindowResize;
@property(nonatomic) BOOL shouldPlayVideo; // @synthesize shouldPlayVideo=_shouldPlayVideo;
@property(nonatomic) struct CGRect windowFrame; // @synthesize windowFrame=_windowFrame;
@property(nonatomic) BOOL initialOpening; // @synthesize initialOpening=_initialOpening;
@property(nonatomic) BOOL canResizeWindow; // @synthesize canResizeWindow=_canResizeWindow;
@property(nonatomic) BOOL isAnimationOpening; // @synthesize isAnimationOpening=_isAnimationOpening;
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
@property(retain, nonatomic) MMBasePreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(retain, nonatomic) MMPageController *pageController; // @synthesize pageController=_pageController;
@property(retain, nonatomic) NSImageView *animationThumbView; // @synthesize animationThumbView=_animationThumbView;
@property(retain, nonatomic) MMPreviewEventView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) __weak id <MMPreviewWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRecognizedTextSelectedRangeChange:(struct _NSRange)arg1;
- (id)recognizedText;
- (id)windowPluginWithProtocol:(id)arg1;
- (id)topWindowPlugin;
- (void)removeWindowPlugin:(id)arg1;
- (void)addWindowPlugin:(id)arg1;
- (void)onTranslateFinish:(id)arg1 ret:(unsigned int)arg2;
- (void)onTextRecognizeFinish:(id)arg1;
- (void)reportOcr:(unsigned long long)arg1;
- (void)hideRecognizeText;
- (void)showRecognizeText;
- (void)showAllRecognizeText;
- (void)onTextRecognizeButtonClick:(id)arg1;
- (void)rightMouseTextRecognize;
- (BOOL)isOcrPluginActive;
- (void)doAnimationForImageRotate;
- (void)doAnimationForImageRotateAfterResizeWindow;
- (void)doAnimationForImageRotateAndWindowFrame:(BOOL)arg1;
- (void)rotateFromMouseEvent:(BOOL)arg1;
- (void)pageController:(id)arg1 didTransitionToObject:(id)arg2;
- (void)pageControllerDidEndLiveTransition:(id)arg1 isForward:(BOOL)arg2;
- (void)pageControllerWillStartLiveTransition:(id)arg1 isForward:(BOOL)arg2;
- (void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3;
- (id)pageController:(id)arg1 viewControllerForIdentifier:(id)arg2;
- (id)pageController:(id)arg1 identifierForObject:(id)arg2;
- (void)showQRBarButton;
- (void)hiddenQRBarButton;
- (void)recoverAllActions;
- (void)disableAllActions;
- (void)updateQRCodeStatusWhenFinishLoad;
- (void)updateToolbarButtonWithRestoreEnabled:(BOOL)arg1;
- (void)updateToolbarButtonWithZoomInEnabled:(BOOL)arg1 zoomOutEnabled:(BOOL)arg2;
- (void)updateToolbarButtonWithPrevEnabled:(BOOL)arg1 isNextEnabled:(BOOL)arg2;
- (void)updateToolbarButtonWithLoading:(BOOL)arg1;
- (void)updateContentViewPrevNextButton;
- (void)showDownloadOriginFailHint;
- (void)updateDownloadOriginProgress:(unsigned int)arg1;
- (void)updateToolbarControls;
- (void)resetToolbarControls;
- (struct CGRect)toolbarFrame;
- (void)hideTranslateImage;
- (void)willShowTranslateImage;
- (void)successToParseQRCodeResult:(id)arg1;
- (void)unknownForParseQRCodeResult:(id)arg1;
- (void)failToParseQRCodeResult:(id)arg1 errorInfo:(id)arg2;
- (void)startParseQRCodeResult:(id)arg1;
- (void)didHiddenQRCodeDotButtons;
- (void)willShowQRCodeDotButtons;
- (void)doSomethingWhenUserLogout;
- (void)doSomethingWhenUnLocked;
- (void)doSomethingWhenLocked;
- (void)_searchRecognizedText;
- (void)rightMouseSearchRecognizedText;
- (BOOL)_favoriteRecognizedText;
- (void)rightMouseFavoriteRecognizedText;
- (BOOL)_forwardRecognizedText;
- (void)rightMouseForwardRecognizedText;
- (BOOL)_copyRecognizedText;
- (void)rightMouseCopyRecognizedText;
- (void)_clickButtonSharingServiceAction:(id)arg1;
- (void)_rightMouseSharingServiceAction:(id)arg1;
- (void)_menuActionExport;
- (void)doAddFavItem:(id)arg1;
- (void)_menuActionFavorite;
- (void)forwardPreviewItemToWeWork:(id)arg1;
- (void)forwardPreviewItem:(id)arg1 toContactsWithUserNames:(id)arg2 leavedMessage:(id)arg3;
- (void)sendPreviewItemToWeWork:(id)arg1;
- (void)sendPreviewItem:(id)arg1 toContactsWithUserNames:(id)arg2 leavedMessage:(id)arg3;
- (void)sendAndForWardPreviewItemToWeWork:(id)arg1;
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
- (void)shortCutMenuActionSelectAllText;
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
- (void)cancelDownloadOrigin:(id)arg1;
- (void)downloadOrigin:(id)arg1;
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
- (void)onTranslateButtonClick:(id)arg1;
- (void)onQRCodeButtonClick:(id)arg1;
- (void)onPageDidTransition:(id)arg1;
- (void)nextPageWithKeyDown;
- (void)prevPageWithKeyDown;
- (void)nextItemWithKeyDown:(unsigned long long)arg1;
- (void)prevItemWithKeyDown:(unsigned long long)arg1;
- (void)resetNaviActionParameter:(unsigned long long)arg1;
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
- (unsigned int)reportIsCollection;
- (BOOL)shouldShowTextRecognizeEntrance;
- (BOOL)shouldShowImageTranlateEntrance;
- (unsigned long long)QRCodeResultCount;
- (BOOL)shouldShowQRCodeEntrance;
- (BOOL)shouldShowShareEntrance;
- (BOOL)shouldShowEditEntrance;
- (BOOL)shouldEnableNextButton;
- (BOOL)shouldEnablePrevButton;
- (BOOL)shouldShowMainwindow;
- (void)setupThumbForAnimationWithItem:(id)arg1 targetFrame:(struct CGRect)arg2 isOpening:(BOOL)arg3;
- (id)currentWindow;
- (id)currentScreen;
- (double)screenScale;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)nextItemFromTrackButton:(id)arg1;
- (void)prevItemFromTrackButton:(id)arg1;
- (void)setupNextPrevButtons;
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
- (void)onPreviewInvalid:(id)arg1;
- (void)setupFullScreenToolBar;
- (void)updateButtonsAnimator;
- (void)updateImageOperateBtnStatus:(BOOL)arg1;
- (void)resetImageOperateBtnSetting:(BOOL)arg1;
- (void)resetPrevNextBtn:(BOOL)arg1;
- (void)_layoutToolbarToolBtns;
- (void)_showDownloadCancelBtn:(BOOL)arg1;
- (void)_showDownloadOriginBtn:(id)arg1 needsLayout:(BOOL)arg2;
- (void)_layoutDownloadOriginBtn;
- (void)_resetDownloadOriginBtn;
- (void)_setupDownloadOriginBtn;
- (void)_layoutToolbarControlBtns;
- (void)setupToolBarContainer;
- (void)_layoutFailedImageView:(BOOL)arg1;
- (void)setupFailedImageView;
- (void)setupKeyDownHandler;
- (BOOL)_dragFarEnough:(struct CGPoint)arg1 from:(struct CGPoint)arg2;
- (void)removeAnimationThumbView;
- (void)setupAnimationThumbView;
- (void)initViews;
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
- (void)handleOpenPreview:(id)arg1;
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

