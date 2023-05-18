//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IGroupMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "IMessageServiceFileExt-Protocol.h"
#import "MMCGIDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class MMAppMsgUploadDB, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMAppMsgUploadMgr : MMService <IGroupMgrExt, IMessageExt, MMCGIDelegate, IMessageServiceFileExt, MMService>
{
    NSMutableDictionary *_msgDataDict;
    MMAppMsgUploadDB *_m_db;
    NSRecursiveLock *_m_lock;
    NSMutableDictionary *_dictUploadInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictUploadInfo; // @synthesize dictUploadInfo=_dictUploadInfo;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock=_m_lock;
@property(retain, nonatomic) MMAppMsgUploadDB *m_db; // @synthesize m_db=_m_db;
@property(retain, nonatomic) NSMutableDictionary *msgDataDict; // @synthesize msgDataDict=_msgDataDict;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)onModMsg:(id)arg1 msgData:(id)arg2;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)onDelAllMsg:(id)arg1;
- (void)OnQuitGroup:(id)arg1;
- (void)onFileUploaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3;
- (double)getAppMsgApproximateRemainTime:(id)arg1;
- (unsigned long long)getAppMsgTransferStatus:(id)arg1;
- (BOOL)checkAppMsgUploadExceedTime:(id)arg1;
- (BOOL)checkAppMsgShowRevokeMenu:(id)arg1;
- (unsigned int)getAppMsgUploadPercent:(id)arg1;
- (void)appMsgUploadStop:(id)arg1;
- (void)appMsgUploadComplete:(id)arg1;
- (void)appMsgUploadPause:(id)arg1;
- (void)handleSendAppMsgResponse:(id)arg1 session:(unsigned int)arg2 ret:(BOOL)arg3;
- (BOOL)calcMd5ForMessage:(id)arg1;
- (BOOL)appMsgUploadStartInternal:(id)arg1;
- (BOOL)appMsgUploadStart:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

