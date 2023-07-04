//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MessageBatchExportMgrExt-Protocol.h"

@class FFProcessReqsvrLogicZZ, MMToastView, NSString, NSWindow;
@protocol MMFileItemOPHandlerDelegate;

@interface MMFileListCellOPHandler : NSObject <MessageBatchExportMgrExt>
{
    id <MMFileItemOPHandlerDelegate> _delegate;
    NSWindow *_parentWindow;
    FFProcessReqsvrLogicZZ *_messageSendLogic;
    MMToastView *_toastView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) FFProcessReqsvrLogicZZ *messageSendLogic; // @synthesize messageSendLogic=_messageSendLogic;
@property(nonatomic) __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(nonatomic) __weak id <MMFileItemOPHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnBatchExportFinishedWithTotalFileCount:(unsigned long long)arg1 failedMsgList:(id)arg2 reasons:(id)arg3;
- (void)dismissSaveToast:(id)arg1;
- (void)showSaveToast;
- (void)showToast:(id)arg1 isSuccess:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)forwardToWeWorkDidConfirmed:(id)arg1;
- (void)sessionPickWindowDidConfirmed:(id)arg1;
- (void)forwardToWeWork:(id)arg1 isNeedMerge:(BOOL)arg2;
- (void)showSessionPickerWithSendMsgList:(id)arg1 isNeedMerge:(BOOL)arg2;
- (void)forwardMutipleSelect:(BOOL)arg1 withMsgList:(id)arg2 toWeWork:(BOOL)arg3;
- (void)contextMenuEdit:(id)arg1;
- (void)contextMenuLocation:(id)arg1;
- (void)contextMenuStopWaitDownload:(id)arg1;
- (void)contextMenuCancleDownload:(id)arg1;
- (void)realManualDownload:(id)arg1;
- (void)realNonManualDownload:(id)arg1;
- (void)contextMenuDownload:(id)arg1 isManual:(BOOL)arg2;
- (void)contextMenuCloseMultiSelect;
- (void)contextMenuShowMultiSelect;
- (void)contextMenuOpenWithDefault:(id)arg1;
- (void)contextMenuOpenFolder:(id)arg1;
- (void)contextMenuOpen:(id)arg1;
- (void)contextMenuDelete:(id)arg1;
- (void)sendAddFavoritesEvent:(id)arg1;
- (void)contextMenuFavorites:(id)arg1;
- (void)contextMenuSave:(id)arg1;
- (void)contextMenuMergeForwardToWeWork:(id)arg1;
- (void)contextMenuMergeForwad:(id)arg1;
- (void)contextMenuForward:(id)arg1;
- (void)contextMenuCopy:(id)arg1;
- (void)updateFileMessageOpTime:(id)arg1;
- (void)onContextMenuClick:(id)arg1 withMsgData:(id)arg2;
- (void)onMultiSelectViewClick:(long long)arg1;
- (void)onFileItemStopWaitDownload:(id)arg1;
- (void)onFileItemCancleDownload:(id)arg1;
- (void)onFileItemDownload:(id)arg1 isManual:(BOOL)arg2;
- (void)onFileItemCellSelected:(id)arg1;
- (int)getCurrentScene;
- (BOOL)isMsgDataAvailable:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

