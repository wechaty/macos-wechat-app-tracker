//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAttachmentReusableView.h"

#import "GroupNoticeDownloadExt-Protocol.h"
#import "IMMFavRecordDownloadMgrExt-Protocol.h"
#import "IMMRecordDownloadMgrExt-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class MMButton, MMImageView, NSImage, NSString;

@interface MMVideoAttachmentView : MMAttachmentReusableView <IMMFavRecordDownloadMgrExt, IMMRecordDownloadMgrExt, GroupNoticeDownloadExt, NSMenuDelegate>
{
    NSImage *_displayImage;
    MMImageView *_thumbnailImageView;
    MMButton *_playBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) NSImage *displayImage; // @synthesize displayImage=_displayImage;
- (id)menuForEvent:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)onGroupNoticeDownloadData:(id)arg1 retCode:(int)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadFavItemRecordOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)reloadImage;
- (void)onClickPlay;
- (void)layoutThumb;
- (void)setAttachmentCell:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

