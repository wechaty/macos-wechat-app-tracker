//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMSnsMusicInfo : NSObject <PBCoding>
{
    NSString *title;
    NSString *singer;
    NSString *webUrl;
    NSString *dataUrl;
    NSString *lowBandUrl;
    NSString *appId;
    NSString *nsCoverImg;
    NSString *nsCoverImgHD;
    NSString *lyric;
}

+ (void)initialize;
+ (void)PBArrayAdd_lyric;
+ (void)PBArrayAdd_nsCoverImgHD;
+ (void)PBArrayAdd_nsCoverImg;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_lowBandUrl;
+ (void)PBArrayAdd_dataUrl;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lyric; // @synthesize lyric;
@property(retain, nonatomic) NSString *nsCoverImgHD; // @synthesize nsCoverImgHD;
@property(retain, nonatomic) NSString *nsCoverImg; // @synthesize nsCoverImg;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *lowBandUrl; // @synthesize lowBandUrl;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl;
@property(retain, nonatomic) NSString *singer; // @synthesize singer;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

