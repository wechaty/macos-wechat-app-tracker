//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMBetaBeforeAuthPackageData : NSObject <PBCoding>
{
    unsigned long long commitCount;
    unsigned long long expire;
    NSString *linkBeforeAuth;
}

+ (void)initialize;
+ (void)PBArrayAdd_linkBeforeAuth;
+ (void)PBArrayAdd_expire;
+ (void)PBArrayAdd_commitCount;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *linkBeforeAuth; // @synthesize linkBeforeAuth;
@property(nonatomic) unsigned long long expire; // @synthesize expire;
@property(nonatomic) unsigned long long commitCount; // @synthesize commitCount;
@property(readonly, copy) NSString *description;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

