//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MessageData;

@interface UploadMsgWrap : NSObject
{
    unsigned int _scene;
    MessageData *_msgData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MessageData *msgData; // @synthesize msgData=_msgData;
- (id)description;

@end

