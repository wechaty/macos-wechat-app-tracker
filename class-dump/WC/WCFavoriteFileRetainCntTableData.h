//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString, WCFavoriteFileRetainCntTableDataPackedInfo;

@interface WCFavoriteFileRetainCntTableData : NSObject <WCTTableCoding>
{
    unsigned int _itemLocalId;
    NSString *_md5;
    WCFavoriteFileRetainCntTableDataPackedInfo *_m_packedInfo;
}

+ (const void *)m_packedInfo;
+ (const void *)itemLocalId;
+ (const void *)md5;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFavoriteFileRetainCntTableDataPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(nonatomic) unsigned int itemLocalId; // @synthesize itemLocalId=_itemLocalId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

