//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FavWeAppItem : NSObject
{
    unsigned int _appType;
    unsigned int _pkgType;
    unsigned int _version;
    unsigned int _disableForward;
    NSString *_userName;
    NSString *_iconUrl;
    NSString *_pagePath;
    NSString *_sourceDisplayName;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int disableForward; // @synthesize disableForward=_disableForward;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int pkgType; // @synthesize pkgType=_pkgType;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *sourceDisplayName; // @synthesize sourceDisplayName=_sourceDisplayName;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

