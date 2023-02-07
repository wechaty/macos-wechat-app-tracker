//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class MMOutlineButton, MMRoundedRectangleView, MMTextField, NSImageView, NSMutableArray, NSString, NSTextField, NSVisualEffectView, NSWindow, ShareExtLogic;

@interface ShareExtConfirmWindowController : NSWindowController
{
    NSWindow *m_mainWindow;
    NSMutableArray *m_invalidFileNames;
    NSMutableArray *m_invalidFileSizes;
    unsigned long long m_shareType;
    unsigned long long m_shareEntry;
    NSMutableArray *m_filePaths;
    NSString *m_webUrl;
    NSString *m_webTitle;
    NSString *m_webImgUrl;
    unsigned long long m_succNum;
    MMRoundedRectangleView *_contentContainer;
    NSVisualEffectView *_visualEffectView;
    MMOutlineButton *_confirmBtn;
    NSTextField *_mark;
    MMTextField *_desc;
    NSTextField *_confirmTitle;
    NSImageView *_wechatLogo;
    ShareExtLogic *_shareExtLogic;
    NSString *_markInfoContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *markInfoContent; // @synthesize markInfoContent=_markInfoContent;
@property(retain, nonatomic) ShareExtLogic *shareExtLogic; // @synthesize shareExtLogic=_shareExtLogic;
@property(retain, nonatomic) NSImageView *wechatLogo; // @synthesize wechatLogo=_wechatLogo;
@property(retain, nonatomic) NSTextField *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(retain, nonatomic) MMTextField *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSTextField *mark; // @synthesize mark=_mark;
@property(retain, nonatomic) MMOutlineButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) NSVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) MMRoundedRectangleView *contentContainer; // @synthesize contentContainer=_contentContainer;
- (id)invalidFileSizeString:(id)arg1;
- (BOOL)isDirectory:(id)arg1;
- (void)closeConfirmWindow;
- (void)showPopover;
- (void)onClickInvalidFileCount;
- (void)showConfirmWindow;
- (void)showToastViewOnSuccess;
- (void)didFinishPaperShareToWeWork:(id)arg1;
- (void)clearTmpFile;
- (void)didFinishShare;
- (void)favToWeChat;
- (id)wrapDataForSessionPicker;
- (void)sendToWeWork;
- (void)sendToFriend;
- (void)handleShareExt;
- (void)layoutLogo;
- (void)layoutTitle;
- (void)layoutDesc;
- (void)layoutMark;
- (void)layoutConfirmBtn;
- (void)layoutGeneral;
- (void)loadData;
- (void)windowDidLoad;
- (id)initWithMainWindow:(id)arg1;

@end

