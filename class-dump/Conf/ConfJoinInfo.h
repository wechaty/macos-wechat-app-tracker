//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ConfJoinInfo : PBGeneratedMessage
{
    unsigned int hasImroomid:1;
    unsigned int hasGroupid:1;
    unsigned int hasRoomType:1;
    unsigned int hasMuteAudio:1;
    unsigned int muteAudio_:1;
    unsigned int hasMuteVideo:1;
    unsigned int muteVideo_:1;
    unsigned int hasNetType:1;
    unsigned int hasBusinessInfo:1;
    unsigned int hasToken:1;
    unsigned int roomType;
    unsigned int netType;
    unsigned long long imroomid;
    NSString *groupid;
    NSString *businessInfo;
    NSString *token;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetToken:) NSString *token; // @synthesize token;
@property(readonly, nonatomic) BOOL hasToken; // @synthesize hasToken;
@property(retain, nonatomic, setter=SetBusinessInfo:) NSString *businessInfo; // @synthesize businessInfo;
@property(readonly, nonatomic) BOOL hasBusinessInfo; // @synthesize hasBusinessInfo;
@property(nonatomic, setter=SetNetType:) unsigned int netType; // @synthesize netType;
@property(readonly, nonatomic) BOOL hasNetType; // @synthesize hasNetType;
@property(readonly, nonatomic) BOOL hasMuteVideo; // @synthesize hasMuteVideo;
@property(readonly, nonatomic) BOOL hasMuteAudio; // @synthesize hasMuteAudio;
@property(nonatomic, setter=SetRoomType:) unsigned int roomType; // @synthesize roomType;
@property(readonly, nonatomic) BOOL hasRoomType; // @synthesize hasRoomType;
@property(retain, nonatomic, setter=SetGroupid:) NSString *groupid; // @synthesize groupid;
@property(readonly, nonatomic) BOOL hasGroupid; // @synthesize hasGroupid;
@property(nonatomic, setter=SetImroomid:) unsigned long long imroomid; // @synthesize imroomid;
@property(readonly, nonatomic) BOOL hasImroomid; // @synthesize hasImroomid;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(nonatomic, setter=SetMuteVideo:) BOOL muteVideo; // @synthesize muteVideo=muteVideo_;
@property(nonatomic, setter=SetMuteAudio:) BOOL muteAudio; // @synthesize muteAudio=muteAudio_;
- (id)init;

@end

