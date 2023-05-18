//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageSender.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMCGIDelegate-Protocol.h"

@class CdnTaskInfo, NSString;

@interface VideoMessageSender : MessageSender <ICdnComMgrExt, MMCGIDelegate>
{
    CdnTaskInfo *_curTaskInfo;
    NSString *m_nsMsgMd5;
    unsigned int m_uMsgCrc32;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnTaskInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
- (void)retryUploadAndNoHitCheck;
- (void)onUploadOrHitCheckSuccess:(id)arg1 nsAesKey:(id)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)setThumbImgSize;
- (BOOL)sendUploadVideoRequestWithFileExists:(BOOL)arg1 videoNewMd5:(id)arg2;
- (void)startSending;
- (void)uploadSuccessByCDN:(id)arg1;
- (void)uploadFailByCDN:(int)arg1;
- (void)onSendOK;
- (void)onSendFail;
- (void)startUploadVideoByCDNWithHitCheck:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

