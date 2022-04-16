//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMSnsFinderShareMediaItem : NSObject <PBCoding>
{
    NSString *mediaType;
    NSString *url;
    NSString *thumbUrl;
    NSString *width;
    NSString *height;
    NSString *coverUrl;
    NSString *videoPlayDuration;
    NSString *fullCoverUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_fullCoverUrl;
+ (void)PBArrayAdd_videoPlayDuration;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_mediaType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fullCoverUrl; // @synthesize fullCoverUrl;
@property(copy, nonatomic) NSString *videoPlayDuration; // @synthesize videoPlayDuration;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl;
@property(copy, nonatomic) NSString *height; // @synthesize height;
@property(copy, nonatomic) NSString *width; // @synthesize width;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType;
- (id)getCoverUrl;
- (id)toXMLV2;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

