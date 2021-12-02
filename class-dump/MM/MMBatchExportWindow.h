//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "AccountServiceExt-Protocol.h"
#import "MMPopTableViewDelegate-Protocol.h"

@class MMImageView, MMOutlineButton, MMProgressView, MMView, NSArray, NSDictionary, NSString;

@interface MMBatchExportWindow : NSWindowController <AccountServiceExt, MMPopTableViewDelegate>
{
    MMImageView *_multiFileIcon;
    MMProgressView *_progressView;
    MMOutlineButton *_batchExportProgressLabel;
    MMView *_whiteColorbgView;
    NSArray *_failedMsgList;
    NSDictionary *_reasons;
    struct CGPoint _initialOriginPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *reasons; // @synthesize reasons=_reasons;
@property(retain, nonatomic) NSArray *failedMsgList; // @synthesize failedMsgList=_failedMsgList;
@property(retain, nonatomic) MMView *whiteColorbgView; // @synthesize whiteColorbgView=_whiteColorbgView;
@property __weak MMOutlineButton *batchExportProgressLabel; // @synthesize batchExportProgressLabel=_batchExportProgressLabel;
@property __weak MMProgressView *progressView; // @synthesize progressView=_progressView;
@property __weak MMImageView *multiFileIcon; // @synthesize multiFileIcon=_multiFileIcon;
@property(nonatomic) struct CGPoint initialOriginPoint; // @synthesize initialOriginPoint=_initialOriginPoint;
- (void)doClear;
- (void)onUserLogout;
- (void)showBatchExportResultWithTotalCount:(unsigned long long)arg1 failedMsgList:(id)arg2 reasons:(id)arg3;
- (void)UpdateProgressWithTotalCount:(unsigned long long)arg1 finishedFileCount:(unsigned long long)arg2;
- (void)windowDidLoad;
- (void)showWindow:(id)arg1;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1 originPoint:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

