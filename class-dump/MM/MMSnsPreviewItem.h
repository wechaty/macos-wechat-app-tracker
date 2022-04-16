//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPreviewItem.h"

@class NSArray, NSImage, NSString, WCMPlayer;

@interface MMSnsPreviewItem : MMPreviewItem
{
    NSArray *_mediaItems;
    NSString *_fromUser;
    NSString *_appId;
    WCMPlayer *_player;
    NSImage *_capturedVideoFrame;
    long long _selected;
    long long _previewFrom;
    NSArray *_urlStrings;
    struct CGRect _showPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *urlStrings; // @synthesize urlStrings=_urlStrings;
@property(nonatomic) long long previewFrom; // @synthesize previewFrom=_previewFrom;
@property(nonatomic) long long selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSImage *capturedVideoFrame; // @synthesize capturedVideoFrame=_capturedVideoFrame;
@property(retain, nonatomic) WCMPlayer *player; // @synthesize player=_player;
@property(nonatomic) struct CGRect showPoint; // @synthesize showPoint=_showPoint;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
- (id)init;

@end

