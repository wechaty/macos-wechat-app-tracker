//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMSnsFinderShareAttachInfo, NSArray, NSString;

@interface MMSnsFinderShareToMomentsItem : NSObject <PBCoding>
{
    NSString *objectId;
    NSString *localId;
    NSString *timeLineThumbName;
    NSString *objectNonceId;
    NSString *feedType;
    NSString *nickname;
    NSString *avatar;
    NSString *desc;
    NSString *mediaCount;
    NSString *liveId;
    NSArray *mediaList;
    NSString *username;
    MMSnsFinderShareAttachInfo *megaVideo;
    NSString *bizUsername;
    unsigned long long authIconType;
    NSString *authIconUrl;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_authIconUrl;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_bizUsername;
+ (void)PBArrayAdd_megaVideo;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_mediaCount;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_feedType;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_timeLineThumbName;
+ (void)PBArrayAdd_localId;
+ (void)PBArrayAdd_objectId;
+ (id)itemFromJSApiDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *authIconUrl; // @synthesize authIconUrl;
@property(nonatomic) unsigned long long authIconType; // @synthesize authIconType;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername;
@property(retain, nonatomic) MMSnsFinderShareAttachInfo *megaVideo; // @synthesize megaVideo;
@property(copy, nonatomic) NSString *username; // @synthesize username;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId;
@property(copy, nonatomic) NSString *mediaCount; // @synthesize mediaCount;
@property(copy, nonatomic) NSString *desc; // @synthesize desc;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname;
@property(copy, nonatomic) NSString *feedType; // @synthesize feedType;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId;
@property(copy, nonatomic) NSString *timeLineThumbName; // @synthesize timeLineThumbName;
@property(copy, nonatomic) NSString *localId; // @synthesize localId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId;
- (id)getGallaryDesc;
- (id)getTimelineDesc;
- (BOOL)isPureText;
- (id)toXMLV2;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (BOOL)isValid;
- (id)path:(id)arg1;
- (id)dataUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

