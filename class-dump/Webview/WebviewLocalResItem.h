//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WebviewLocalResItem : NSObject <PBCoding>
{
    NSString *_localResId;
    NSString *_savePath;
    NSString *_svrId;
    NSString *_appId;
    NSString *_cdnUrl;
    NSString *_cdnAESKey;
    unsigned int _fileSize;
    NSString *_mediaType;
    NSString *_fileExt;
    BOOL needMediaId;
    BOOL _bNeedStorage;
    unsigned int fileSize;
    NSString *localResId;
    NSString *savePath;
    NSString *svrId;
    NSString *appId;
    NSString *cdnUrl;
    NSString *cdnAESKey;
    NSString *mediaType;
    NSString *fileExt;
    NSString *fileUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_needMediaId;
+ (void)PBArrayAdd_fileUrl;
+ (void)PBArrayAdd_fileExt;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_cdnAESKey;
+ (void)PBArrayAdd_cdnUrl;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_svrId;
+ (void)PBArrayAdd_savePath;
+ (void)PBArrayAdd_localResId;
- (void).cxx_destruct;
@property(nonatomic) BOOL bNeedStorage; // @synthesize bNeedStorage=_bNeedStorage;
@property(nonatomic) BOOL needMediaId; // @synthesize needMediaId;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl;
@property(retain, nonatomic) NSString *fileExt; // @synthesize fileExt;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize;
@property(retain, nonatomic) NSString *cdnAESKey; // @synthesize cdnAESKey;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *svrId; // @synthesize svrId;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath;
@property(retain, nonatomic) NSString *localResId; // @synthesize localResId;
- (id)init;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

