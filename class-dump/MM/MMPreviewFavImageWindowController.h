//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPreviewWindowController.h"

#import "MMCDNDownloadMgrExt-Protocol.h"
#import "MMFavoritesMgrExt-Protocol.h"

@class MMQLPreviewItem, NSString;

@interface MMPreviewFavImageWindowController : MMPreviewWindowController <MMCDNDownloadMgrExt, MMFavoritesMgrExt>
{
    MMQLPreviewItem *m_currentPreviewingItem;
    BOOL _setupStatus;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL setupStatus; // @synthesize setupStatus=_setupStatus;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)cdnDownloadMgrDidFinishedDownloadWithFavCdnTask:(id)arg1;
- (void)pageController:(id)arg1 didTransitionToObject:(id)arg2;
- (void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3;
- (void)openWith;
- (id)getCurrentPreviewItem;
- (id)getInitialPreviewItem;
- (void)setupPageController;
- (void)showPreviewItem:(id)arg1 targetFrame:(struct CGRect)arg2;
- (void)show;
- (void)_preloadVideoOfPreviewItem:(id)arg1;
- (unsigned long long)_indexOfPreviewItemWithFavItem:(id)arg1;
- (void)_updatePreviewItem:(id)arg1;
- (void)_removePreviewItemWithLocalDataID:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithFavItemList:(id)arg1 favItem:(id)arg2 scene:(unsigned long long)arg3 subScene:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

