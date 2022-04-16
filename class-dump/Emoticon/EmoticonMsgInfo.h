//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface EmoticonMsgInfo : NSObject <PBCoding>
{
    BOOL _disableExtern;
    unsigned int msgStatus;
    unsigned int msgImgStatus;
    unsigned int msgCreateTime;
    int _m_uiStartPos;
    int _m_uiTotalLen;
    int _reDownloadCount;
    NSString *m_nsServerID;
    NSString *m_nsMD5;
    NSString *fromUsrName;
    long long mesSvrID;
    NSString *toUsrName;
    NSString *msgContent;
    NSString *msgPushContent;
    NSString *msgSource;
    NSString *cdnUrl;
    NSString *aesKey;
    NSString *encryptUrl;
    NSString *chatName;
    NSString *tpUrlString;
    NSString *authKey;
    NSString *externUrl;
    NSString *externMd5;
}

+ (void)initialize;
+ (void)PBArrayAdd_externMd5;
+ (void)PBArrayAdd_externUrl;
+ (void)PBArrayAdd_authKey;
+ (void)PBArrayAdd_tpUrlString;
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_encryptUrl;
+ (void)PBArrayAdd_aesKey;
+ (void)PBArrayAdd_cdnUrl;
+ (void)PBArrayAdd_msgSource;
+ (void)PBArrayAdd_msgPushContent;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_msgImgStatus;
+ (void)PBArrayAdd_msgStatus;
+ (void)PBArrayAdd_msgContent;
+ (void)PBArrayAdd_toUsrName;
+ (void)PBArrayAdd_mesSvrID;
+ (void)PBArrayAdd_fromUsrName;
+ (void)PBArrayAdd_m_nsMD5;
+ (void)PBArrayAdd_m_nsServerID;
- (void).cxx_destruct;
@property(nonatomic) BOOL disableExtern; // @synthesize disableExtern=_disableExtern;
@property(nonatomic) int reDownloadCount; // @synthesize reDownloadCount=_reDownloadCount;
@property(nonatomic) int m_uiTotalLen; // @synthesize m_uiTotalLen=_m_uiTotalLen;
@property(nonatomic) int m_uiStartPos; // @synthesize m_uiStartPos=_m_uiStartPos;
@property(retain, nonatomic) NSString *externMd5; // @synthesize externMd5;
@property(retain, nonatomic) NSString *externUrl; // @synthesize externUrl;
@property(copy, nonatomic) NSString *authKey; // @synthesize authKey;
@property(copy, nonatomic) NSString *tpUrlString; // @synthesize tpUrlString;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName;
@property(copy, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl;
@property(copy, nonatomic) NSString *aesKey; // @synthesize aesKey;
@property(copy, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(copy, nonatomic) NSString *msgSource; // @synthesize msgSource;
@property(copy, nonatomic) NSString *msgPushContent; // @synthesize msgPushContent;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime;
@property(nonatomic) unsigned int msgImgStatus; // @synthesize msgImgStatus;
@property(nonatomic) unsigned int msgStatus; // @synthesize msgStatus;
@property(copy, nonatomic) NSString *msgContent; // @synthesize msgContent;
@property(copy, nonatomic) NSString *toUsrName; // @synthesize toUsrName;
@property(nonatomic) long long mesSvrID; // @synthesize mesSvrID;
@property(copy, nonatomic) NSString *fromUsrName; // @synthesize fromUsrName;
@property(copy, nonatomic) NSString *m_nsMD5; // @synthesize m_nsMD5;
@property(copy, nonatomic) NSString *m_nsServerID; // @synthesize m_nsServerID;
- (BOOL)hasTpDownloadInfo;
- (BOOL)canCdnDownload;
- (BOOL)hasEncryptDownloadInfo;
- (BOOL)hasWxAMDownloadInfo;
- (id)emoticonPath;
- (id)clientMsgId;
- (void)parseForBaseDownloadInfoFromMessageData:(id)arg1;
@property(readonly, copy) NSString *description;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

