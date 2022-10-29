//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMCDNDownloadMgrExt-Protocol.h"
#import "MMCGIDelegate-Protocol.h"
#import "MMFavoriteFileServiceExt-Protocol.h"
#import "MMService-Protocol.h"

@class MMHandoffItem, MMThreadSafeDictionary, NSMutableArray, NSString;

@interface MMHandoffDownloadMgr : MMService <MMCGIDelegate, MMCDNDownloadMgrExt, MMFavoriteFileServiceExt, MMService>
{
    unsigned int _sessionId;
    unsigned int _m_startPos;
    unsigned int _m_totalLen;
    MMThreadSafeDictionary *_downloadList;
    MMThreadSafeDictionary *_favDownloadList;
    MMThreadSafeDictionary *_msgDownloadList;
    NSMutableArray *_cgiDownloadList;
    MMHandoffItem *_oItem;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_totalLen; // @synthesize m_totalLen=_m_totalLen;
@property(retain, nonatomic) MMHandoffItem *oItem; // @synthesize oItem=_oItem;
@property(nonatomic) unsigned int m_startPos; // @synthesize m_startPos=_m_startPos;
@property(retain, nonatomic) NSMutableArray *cgiDownloadList; // @synthesize cgiDownloadList=_cgiDownloadList;
@property(retain, nonatomic) MMThreadSafeDictionary *msgDownloadList; // @synthesize msgDownloadList=_msgDownloadList;
@property(retain, nonatomic) MMThreadSafeDictionary *favDownloadList; // @synthesize favDownloadList=_favDownloadList;
@property(retain, nonatomic) MMThreadSafeDictionary *downloadList; // @synthesize downloadList=_downloadList;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
- (void)favoriteFileService:(id)arg1 didFailDownloadWithFavItemData:(id)arg2 type:(int)arg3 taskID:(id)arg4;
- (void)favoriteFileService:(id)arg1 didFinishDownloadWithFavItemData:(id)arg2 type:(int)arg3 filePath:(id)arg4 taskID:(id)arg5;
- (void)favoriteFileService:(id)arg1 downloaded:(int)arg2 of:(int)arg3 WithFavItemData:(id)arg4 type:(int)arg5;
- (void)cdnDownloadMgrDidFailedDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDidFinishedDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3 type:(int)arg4 downloadType:(int)arg5;
- (void)cancelDownloadTaskByCdn:(id)arg1;
- (void)sendDownloadTaskByCdn:(id)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)onDownloadFailed;
- (void)onDownloadSuccess;
- (void)handleResponseFromCgi:(id)arg1;
- (void)doNextCgiTask;
- (void)sendDownloadTaskByCGI:(id)arg1;
- (void)cancelCgiTask:(id)arg1;
- (void)addItemToCgiTasks:(id)arg1;
- (BOOL)isCanUseCdn:(id)arg1;
- (void)cancleDownloadItem:(id)arg1;
- (void)startDownloadItem:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

