//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCDBBackupUnFinishSessionObject : NSObject <WCTTableCoding>
{
    NSString *talker;
    long long EndTime;
    long long TotalSize;
    NSString *NickName;
    long long Reserved0;
    long long Reserved1;
    NSString *Reserved2;
    NSString *Reserved3;
    long long StartTime;
    NSString *Reserved5;
}

+ (const void *)Reserved5;
+ (const void *)StartTime;
+ (const void *)Reserved3;
+ (const void *)Reserved2;
+ (const void *)Reserved1;
+ (const void *)Reserved0;
+ (const void *)NickName;
+ (const void *)TotalSize;
+ (const void *)EndTime;
+ (const void *)talker;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *Reserved5; // @synthesize Reserved5;
@property(nonatomic) long long StartTime; // @synthesize StartTime;
@property(retain, nonatomic) NSString *Reserved3; // @synthesize Reserved3;
@property(retain, nonatomic) NSString *Reserved2; // @synthesize Reserved2;
@property(nonatomic) long long Reserved1; // @synthesize Reserved1;
@property(nonatomic) long long Reserved0; // @synthesize Reserved0;
@property(retain, nonatomic) NSString *NickName; // @synthesize NickName;
@property(nonatomic) long long TotalSize; // @synthesize TotalSize;
@property(nonatomic) long long EndTime; // @synthesize EndTime;
@property(retain, nonatomic) NSString *talker; // @synthesize talker;
- (id)description;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

