//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MMBetaInviteData : NSObject <WCTTableCoding>
{
    BOOL _hasAccepted;
    BOOL _isRead;
    unsigned long long _commitCount;
    NSString *_clientVersion;
    unsigned long long _scene;
    unsigned long long _expire;
    NSString *_inviteLink;
}

+ (const void *)isRead;
+ (const void *)hasAccepted;
+ (const void *)inviteLink;
+ (const void *)expire;
+ (const void *)scene;
+ (const void *)clientVersion;
+ (const void *)commitCount;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) BOOL isRead; // @synthesize isRead=_isRead;
@property(nonatomic) BOOL hasAccepted; // @synthesize hasAccepted=_hasAccepted;
@property(retain, nonatomic) NSString *inviteLink; // @synthesize inviteLink=_inviteLink;
@property(nonatomic) unsigned long long expire; // @synthesize expire=_expire;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) unsigned long long commitCount; // @synthesize commitCount=_commitCount;
- (id)description;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

