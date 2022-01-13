//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t, VoipMultiRelayData;

@interface VoipAckResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRoomId:1;
    unsigned int hasRoomKey:1;
    unsigned int hasRoomMemberId:1;
    unsigned int hasRelayData:1;
    unsigned int hasPreConnect:1;
    unsigned int hasTcpCnt:1;
    unsigned int hasAudioEnableRmioAndS3A:1;
    unsigned int hasSwitchFlag:1;
    unsigned int hasWifiScanInterval:1;
    unsigned int hasIntStrategyIssued:1;
    unsigned int hasSwitchFlagExt:1;
    int roomId;
    int roomMemberId;
    int preConnect;
    unsigned int tcpCnt;
    int audioEnableRmioAndS3A;
    unsigned int switchFlag;
    unsigned int wifiScanInterval;
    BaseResponse *baseResponse;
    long long roomKey;
    VoipMultiRelayData *relayData;
    SKBuiltinBuffer_t *intStrategyIssued;
    unsigned long long switchFlagExt;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetSwitchFlagExt:) unsigned long long switchFlagExt; // @synthesize switchFlagExt;
@property(readonly, nonatomic) BOOL hasSwitchFlagExt; // @synthesize hasSwitchFlagExt;
@property(retain, nonatomic, setter=SetIntStrategyIssued:) SKBuiltinBuffer_t *intStrategyIssued; // @synthesize intStrategyIssued;
@property(readonly, nonatomic) BOOL hasIntStrategyIssued; // @synthesize hasIntStrategyIssued;
@property(nonatomic, setter=SetWifiScanInterval:) unsigned int wifiScanInterval; // @synthesize wifiScanInterval;
@property(readonly, nonatomic) BOOL hasWifiScanInterval; // @synthesize hasWifiScanInterval;
@property(nonatomic, setter=SetSwitchFlag:) unsigned int switchFlag; // @synthesize switchFlag;
@property(readonly, nonatomic) BOOL hasSwitchFlag; // @synthesize hasSwitchFlag;
@property(nonatomic, setter=SetAudioEnableRmioAndS3A:) int audioEnableRmioAndS3A; // @synthesize audioEnableRmioAndS3A;
@property(readonly, nonatomic) BOOL hasAudioEnableRmioAndS3A; // @synthesize hasAudioEnableRmioAndS3A;
@property(nonatomic, setter=SetTcpCnt:) unsigned int tcpCnt; // @synthesize tcpCnt;
@property(readonly, nonatomic) BOOL hasTcpCnt; // @synthesize hasTcpCnt;
@property(nonatomic, setter=SetPreConnect:) int preConnect; // @synthesize preConnect;
@property(readonly, nonatomic) BOOL hasPreConnect; // @synthesize hasPreConnect;
@property(retain, nonatomic, setter=SetRelayData:) VoipMultiRelayData *relayData; // @synthesize relayData;
@property(readonly, nonatomic) BOOL hasRelayData; // @synthesize hasRelayData;
@property(nonatomic, setter=SetRoomMemberId:) int roomMemberId; // @synthesize roomMemberId;
@property(readonly, nonatomic) BOOL hasRoomMemberId; // @synthesize hasRoomMemberId;
@property(nonatomic, setter=SetRoomKey:) long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

