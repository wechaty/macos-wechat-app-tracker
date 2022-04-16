//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString, WCFavoritesCdnInfoTableDataPackedInfo;

@interface WCFavoritesCdnInfoTableData : NSObject <WCTTableCoding>
{
    unsigned int _itemLocalId;
    unsigned int _uploadStatus;
    unsigned int _isThumb;
    unsigned int _totalLength;
    unsigned int _dataType;
    NSString *_dataLocalId;
    NSString *_md5;
    NSString *_head256Md5;
    NSString *_cdnUrl;
    NSString *_cdnKey;
    NSString *_streamId;
    NSString *_dataFmt;
    WCFavoritesCdnInfoTableDataPackedInfo *_m_packedInfo;
    NSString *_clientMsgID;
}

+ (id)infoTableDataWithFavoritesCDNInfo:(id)arg1;
+ (const void *)clientMsgID;
+ (const void *)m_packedInfo;
+ (const void *)dataFmt;
+ (const void *)streamId;
+ (const void *)dataType;
+ (const void *)isThumb;
+ (const void *)head256Md5;
+ (const void *)md5;
+ (const void *)cdnKey;
+ (const void *)uploadStatus;
+ (const void *)totalLength;
+ (const void *)cdnUrl;
+ (const void *)dataLocalId;
+ (const void *)itemLocalId;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *clientMsgID; // @synthesize clientMsgID=_clientMsgID;
@property(retain, nonatomic) WCFavoritesCdnInfoTableDataPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey=_cdnKey;
@property(nonatomic) unsigned int totalLength; // @synthesize totalLength=_totalLength;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *head256Md5; // @synthesize head256Md5=_head256Md5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) NSString *dataLocalId; // @synthesize dataLocalId=_dataLocalId;
@property(nonatomic) unsigned int uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(nonatomic) unsigned int itemLocalId; // @synthesize itemLocalId=_itemLocalId;
- (void)copyFieldFromOtherObject:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

