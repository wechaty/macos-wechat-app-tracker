//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, DeepLinkBitSet, GeneralControlBitSet, JSAPIPermissionBitSet, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetA8KeyResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasFullUrl:1;
    unsigned int hasA8Key:1;
    unsigned int hasActionCode:1;
    unsigned int hasTitle:1;
    unsigned int hasContent:1;
    unsigned int hasJsapipermission:1;
    unsigned int hasGeneralControlBitSet:1;
    unsigned int hasUserName:1;
    unsigned int hasShareUrl:1;
    unsigned int hasScopeCount:1;
    unsigned int hasAntispamTicket:1;
    unsigned int hasSsid:1;
    unsigned int hasMid:1;
    unsigned int hasDeepLinkBitSet:1;
    unsigned int hasJsapicontrolBytes:1;
    unsigned int hasHttpHeaderCount:1;
    unsigned int hasWording:1;
    unsigned int hasHeadImg:1;
    unsigned int hasCookie:1;
    unsigned int hasMenuWording:1;
    unsigned int hasVerifyPrefetchInfo:1;
    unsigned int hasWebComponentInfo:1;
    unsigned int hasSpamExtBuf:1;
    unsigned int actionCode;
    unsigned int scopeCount;
    unsigned int httpHeaderCount;
    BaseResponse *baseResponse;
    NSString *fullUrl;
    NSString *a8Key;
    NSString *title;
    NSString *content;
    JSAPIPermissionBitSet *jsapipermission;
    GeneralControlBitSet *generalControlBitSet;
    NSString *userName;
    NSString *shareUrl;
    NSMutableArray *mutableScopeListList;
    NSString *antispamTicket;
    NSString *ssid;
    NSString *mid;
    DeepLinkBitSet *deepLinkBitSet;
    SKBuiltinBuffer_t *jsapicontrolBytes;
    NSMutableArray *mutableHttpHeaderList;
    NSString *wording;
    NSString *headImg;
    SKBuiltinBuffer_t *cookie;
    NSString *menuWording;
    SKBuiltinBuffer_t *verifyPrefetchInfo;
    SKBuiltinBuffer_t *webComponentInfo;
    SKBuiltinBuffer_t *spamExtBuf;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetSpamExtBuf:) SKBuiltinBuffer_t *spamExtBuf; // @synthesize spamExtBuf;
@property(readonly, nonatomic) BOOL hasSpamExtBuf; // @synthesize hasSpamExtBuf;
@property(retain, nonatomic, setter=SetWebComponentInfo:) SKBuiltinBuffer_t *webComponentInfo; // @synthesize webComponentInfo;
@property(readonly, nonatomic) BOOL hasWebComponentInfo; // @synthesize hasWebComponentInfo;
@property(retain, nonatomic, setter=SetVerifyPrefetchInfo:) SKBuiltinBuffer_t *verifyPrefetchInfo; // @synthesize verifyPrefetchInfo;
@property(readonly, nonatomic) BOOL hasVerifyPrefetchInfo; // @synthesize hasVerifyPrefetchInfo;
@property(retain, nonatomic, setter=SetMenuWording:) NSString *menuWording; // @synthesize menuWording;
@property(readonly, nonatomic) BOOL hasMenuWording; // @synthesize hasMenuWording;
@property(retain, nonatomic, setter=SetCookie:) SKBuiltinBuffer_t *cookie; // @synthesize cookie;
@property(readonly, nonatomic) BOOL hasCookie; // @synthesize hasCookie;
@property(retain, nonatomic, setter=SetHeadImg:) NSString *headImg; // @synthesize headImg;
@property(readonly, nonatomic) BOOL hasHeadImg; // @synthesize hasHeadImg;
@property(retain, nonatomic, setter=SetWording:) NSString *wording; // @synthesize wording;
@property(readonly, nonatomic) BOOL hasWording; // @synthesize hasWording;
@property(retain, nonatomic) NSMutableArray *mutableHttpHeaderList; // @synthesize mutableHttpHeaderList;
@property(nonatomic, setter=SetHttpHeaderCount:) unsigned int httpHeaderCount; // @synthesize httpHeaderCount;
@property(readonly, nonatomic) BOOL hasHttpHeaderCount; // @synthesize hasHttpHeaderCount;
@property(retain, nonatomic, setter=SetJsapicontrolBytes:) SKBuiltinBuffer_t *jsapicontrolBytes; // @synthesize jsapicontrolBytes;
@property(readonly, nonatomic) BOOL hasJsapicontrolBytes; // @synthesize hasJsapicontrolBytes;
@property(retain, nonatomic, setter=SetDeepLinkBitSet:) DeepLinkBitSet *deepLinkBitSet; // @synthesize deepLinkBitSet;
@property(readonly, nonatomic) BOOL hasDeepLinkBitSet; // @synthesize hasDeepLinkBitSet;
@property(retain, nonatomic, setter=SetMid:) NSString *mid; // @synthesize mid;
@property(readonly, nonatomic) BOOL hasMid; // @synthesize hasMid;
@property(retain, nonatomic, setter=SetSsid:) NSString *ssid; // @synthesize ssid;
@property(readonly, nonatomic) BOOL hasSsid; // @synthesize hasSsid;
@property(retain, nonatomic, setter=SetAntispamTicket:) NSString *antispamTicket; // @synthesize antispamTicket;
@property(readonly, nonatomic) BOOL hasAntispamTicket; // @synthesize hasAntispamTicket;
@property(retain, nonatomic) NSMutableArray *mutableScopeListList; // @synthesize mutableScopeListList;
@property(nonatomic, setter=SetScopeCount:) unsigned int scopeCount; // @synthesize scopeCount;
@property(readonly, nonatomic) BOOL hasScopeCount; // @synthesize hasScopeCount;
@property(retain, nonatomic, setter=SetShareUrl:) NSString *shareUrl; // @synthesize shareUrl;
@property(readonly, nonatomic) BOOL hasShareUrl; // @synthesize hasShareUrl;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetGeneralControlBitSet:) GeneralControlBitSet *generalControlBitSet; // @synthesize generalControlBitSet;
@property(readonly, nonatomic) BOOL hasGeneralControlBitSet; // @synthesize hasGeneralControlBitSet;
@property(retain, nonatomic, setter=SetJsapipermission:) JSAPIPermissionBitSet *jsapipermission; // @synthesize jsapipermission;
@property(readonly, nonatomic) BOOL hasJsapipermission; // @synthesize hasJsapipermission;
@property(retain, nonatomic, setter=SetContent:) NSString *content; // @synthesize content;
@property(readonly, nonatomic) BOOL hasContent; // @synthesize hasContent;
@property(retain, nonatomic, setter=SetTitle:) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL hasTitle; // @synthesize hasTitle;
@property(nonatomic, setter=SetActionCode:) unsigned int actionCode; // @synthesize actionCode;
@property(readonly, nonatomic) BOOL hasActionCode; // @synthesize hasActionCode;
@property(retain, nonatomic, setter=SetA8Key:) NSString *a8Key; // @synthesize a8Key;
@property(readonly, nonatomic) BOOL hasA8Key; // @synthesize hasA8Key;
@property(retain, nonatomic, setter=SetFullUrl:) NSString *fullUrl; // @synthesize fullUrl;
@property(readonly, nonatomic) BOOL hasFullUrl; // @synthesize hasFullUrl;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addHttpHeader:(id)arg1;
- (void)addHttpHeaderFromArray:(id)arg1;
- (void)addScopeList:(id)arg1;
- (void)addScopeListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *httpHeader; // @dynamic httpHeader;
- (id)httpHeaderList;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;
- (id)scopeListList;
- (id)init;

@end

