//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface LocalUserInfo : NSObject <PBCoding, NSCoding, NSCopying>
{
    unsigned int m_uiSex;
    unsigned int m_uiWeiboFlag;
    unsigned int m_uiFacebookFlag;
    unsigned int m_uiWCFlag;
    unsigned int m_iWCFlagExt;
    unsigned int grayscaleFlag;
    unsigned int teenagerModeFinderSetting;
    unsigned int teenagerModeBizAcctSetting;
    unsigned int teenagerModeMiniProgramSetting;
    unsigned int m_nsPluginInstallStatus;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsHDHeadImgMD5;
    NSString *m_nsHDImgStatus;
    NSString *m_nsWeiboAddress;
    NSString *m_nsWeiboNickName;
    NSString *m_nsFacebookID;
    NSString *m_nsFacebookName;
    NSString *m_nsFacebookToken;
    NSString *m_nsWCBGImgObjectID;
    NSString *m_pcWCBGImgID;
    NSString *m_username;
    NSString *m_alias;
    NSString *m_nickname;
    NSString *m_nsMobile;
    NSString *m_nsEmail;
    NSString *m_nsBigHeadImgUrl;
    NSString *m_nsSmallHeadImgUrl;
    NSString *m_nsSignature;
    NSString *m_nsWeiboUserName;
    unsigned long long extStatus;
    NSString *patSuffix;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_nsPluginInstallStatus;
+ (void)PBArrayAdd_teenagerModeMiniProgramSetting;
+ (void)PBArrayAdd_teenagerModeBizAcctSetting;
+ (void)PBArrayAdd_teenagerModeFinderSetting;
+ (void)PBArrayAdd_patSuffix;
+ (void)PBArrayAdd_extStatus;
+ (void)PBArrayAdd_grayscaleFlag;
+ (void)PBArrayAdd_m_nsWeiboUserName;
+ (void)PBArrayAdd_m_nsSignature;
+ (void)PBArrayAdd_m_nsSmallHeadImgUrl;
+ (void)PBArrayAdd_m_nsBigHeadImgUrl;
+ (void)PBArrayAdd_m_nsEmail;
+ (void)PBArrayAdd_m_nsMobile;
+ (void)PBArrayAdd_m_nickname;
+ (void)PBArrayAdd_m_alias;
+ (void)PBArrayAdd_m_username;
+ (void)PBArrayAdd_m_pcWCBGImgID;
+ (void)PBArrayAdd_m_nsWCBGImgObjectID;
+ (void)PBArrayAdd_m_iWCFlagExt;
+ (void)PBArrayAdd_m_uiWCFlag;
+ (void)PBArrayAdd_m_nsFacebookToken;
+ (void)PBArrayAdd_m_nsFacebookName;
+ (void)PBArrayAdd_m_nsFacebookID;
+ (void)PBArrayAdd_m_uiFacebookFlag;
+ (void)PBArrayAdd_m_uiWeiboFlag;
+ (void)PBArrayAdd_m_nsWeiboNickName;
+ (void)PBArrayAdd_m_nsWeiboAddress;
+ (void)PBArrayAdd_m_nsHDImgStatus;
+ (void)PBArrayAdd_m_nsHDHeadImgMD5;
+ (void)PBArrayAdd_m_nsCity;
+ (void)PBArrayAdd_m_nsProvince;
+ (void)PBArrayAdd_m_nsCountry;
+ (void)PBArrayAdd_m_uiSex;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_nsPluginInstallStatus; // @synthesize m_nsPluginInstallStatus;
@property(nonatomic) unsigned int teenagerModeMiniProgramSetting; // @synthesize teenagerModeMiniProgramSetting;
@property(nonatomic) unsigned int teenagerModeBizAcctSetting; // @synthesize teenagerModeBizAcctSetting;
@property(nonatomic) unsigned int teenagerModeFinderSetting; // @synthesize teenagerModeFinderSetting;
@property(retain, nonatomic) NSString *patSuffix; // @synthesize patSuffix;
@property(nonatomic) unsigned long long extStatus; // @synthesize extStatus;
@property(nonatomic) unsigned int grayscaleFlag; // @synthesize grayscaleFlag;
@property(retain, nonatomic) NSString *m_nsWeiboUserName; // @synthesize m_nsWeiboUserName;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(retain, nonatomic) NSString *m_nsSmallHeadImgUrl; // @synthesize m_nsSmallHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsBigHeadImgUrl; // @synthesize m_nsBigHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsEmail; // @synthesize m_nsEmail;
@property(retain, nonatomic) NSString *m_nsMobile; // @synthesize m_nsMobile;
@property(retain, nonatomic) NSString *m_nickname; // @synthesize m_nickname;
@property(retain, nonatomic) NSString *m_alias; // @synthesize m_alias;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username;
@property(retain, nonatomic) NSString *m_pcWCBGImgID; // @synthesize m_pcWCBGImgID;
@property(retain, nonatomic) NSString *m_nsWCBGImgObjectID; // @synthesize m_nsWCBGImgObjectID;
@property(nonatomic) unsigned int m_iWCFlagExt; // @synthesize m_iWCFlagExt;
@property(nonatomic) unsigned int m_uiWCFlag; // @synthesize m_uiWCFlag;
@property(retain, nonatomic) NSString *m_nsFacebookToken; // @synthesize m_nsFacebookToken;
@property(retain, nonatomic) NSString *m_nsFacebookName; // @synthesize m_nsFacebookName;
@property(retain, nonatomic) NSString *m_nsFacebookID; // @synthesize m_nsFacebookID;
@property(nonatomic) unsigned int m_uiFacebookFlag; // @synthesize m_uiFacebookFlag;
@property(nonatomic) unsigned int m_uiWeiboFlag; // @synthesize m_uiWeiboFlag;
@property(retain, nonatomic) NSString *m_nsWeiboNickName; // @synthesize m_nsWeiboNickName;
@property(retain, nonatomic) NSString *m_nsWeiboAddress; // @synthesize m_nsWeiboAddress;
@property(retain, nonatomic) NSString *m_nsHDImgStatus; // @synthesize m_nsHDImgStatus;
@property(retain, nonatomic) NSString *m_nsHDHeadImgMD5; // @synthesize m_nsHDHeadImgMD5;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)copyFromModUserInfoExt:(id)arg1;
- (void)copyFromModUserInfo:(id)arg1;
- (void)copyFromServerObj:(id)arg1;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

