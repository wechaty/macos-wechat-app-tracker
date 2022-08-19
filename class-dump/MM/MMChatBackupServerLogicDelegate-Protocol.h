//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BakChatCreateQRcodeResponse, GetConnectInfoResponse;

@protocol MMChatBackupServerLogicDelegate <NSObject>

@optional
- (void)onFirstPacketOK:(BOOL)arg1;
- (void)onGetConnectInfo:(GetConnectInfoResponse *)arg1;
- (void)onGetQRCode:(BakChatCreateQRcodeResponse *)arg1;
- (void)onServerLogicCurrentTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 ratio:(double)arg3;
- (void)onServerLogicCurrentProcessingSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onServerLogicAlertCode:(unsigned long long)arg1;
- (void)onServerLogicNotifyCode:(unsigned long long)arg1;
@end

