//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageHandler.h"

@protocol VideoMessageHandlerDelegate;

@interface VideoMessageHandler : MessageHandler
{
    id <VideoMessageHandlerDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VideoMessageHandlerDelegate> delegate; // @synthesize delegate=m_delegate;
- (void)messageWillBeRevoked:(id)arg1 revokeContext:(id)arg2;
- (void)cancelUpload:(id)arg1 withMessage:(id)arg2;
- (void)stopMsgUpload:(id)arg1;
- (void)notifyUploadProgress:(id)arg1 msgData:(id)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onSendFinished:(id)arg1 taskId:(unsigned long long)arg2 msgData:(id)arg3 isSuccess:(BOOL)arg4;
- (void)addMsgToSendQueue:(id)arg1 msgData:(id)arg2;
- (id)init;

@end

