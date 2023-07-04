//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSPasteboardItemDataProvider-Protocol.h"

@class FavLocationItem, FavProductItem, FavTVItem, FavURLItem, FavWeAppItem, NSArray, NSDate, NSMutableArray, NSString, WCFinderMessageShareNameCard, WCFinderShareItem;

@interface FavoritesItem : NSObject <NSPasteboardItemDataProvider, NSCoding>
{
    BOOL _isFromFavToChat;
    BOOL _isChatRoom;
    unsigned int _favId;
    unsigned int _version;
    int _type;
    int _status;
    unsigned int _updateSeq;
    unsigned int _localUpdateSeq;
    unsigned int _updateTime;
    int _sourceType;
    unsigned int _editTime;
    unsigned int _ctrlFlag;
    unsigned int _srcCreateTime;
    unsigned int _totalDataSize;
    unsigned int _remarkTime;
    int _localStatus;
    unsigned int _localId;
    int _countMd5Status;
    int _retryTimes;
    unsigned int _m_uiFromScene;
    unsigned int _m_favcreateTime;
    unsigned int _m_preMsgIndex;
    NSString *_deviceid;
    NSDate *_updateDateTime;
    NSString *_editUsr;
    NSString *_title;
    NSString *_descriptionStr;
    NSString *_link;
    NSString *_sourceId;
    NSString *_fromUsr;
    NSString *_toUsr;
    NSString *_realChatName;
    long long _n64MsgID;
    NSString *_eventId;
    NSString *_appId;
    NSString *_brandId;
    NSMutableArray *_dataList;
    FavLocationItem *_locItem;
    FavURLItem *_urlItem;
    FavProductItem *_productItem;
    FavTVItem *_tvItem;
    NSString *_remark;
    NSArray *_tagList;
    NSArray *_tagSvrIdList;
    NSArray *_recommendTagList;
    NSDate *_startUploadTime;
    double _cellHeight;
    NSString *_m_nsFavUsername;
    FavWeAppItem *_weAppItem;
    WCFinderShareItem *_finderShareItem;
    WCFinderMessageShareNameCard *_finderMessageShareNameCard;
}

+ (void)parseStreamVideoNode:(struct XmlReaderNode_t *)arg1 dataField:(id)arg2;
+ (id)FavoritesDataFieldToXML:(id)arg1 item:(id)arg2 deep:(int)arg3;
+ (id)FavritesItemToXML:(id)arg1 autoIncreaseVersion:(BOOL)arg2 rootTag:(id)arg3;
+ (id)FavritesItemToXML:(id)arg1 autoIncreaseVersion:(BOOL)arg2;
+ (id)parseTagIdXml:(struct XmlReaderNode_t *)arg1;
+ (id)parseChildListXml:(struct XmlReaderNode_t *)arg1 childName:(const char *)arg2;
+ (id)parseDataNodeFromXml:(struct XmlReaderNode_t *)arg1 deep:(int)arg2;
+ (BOOL)ParseItemNote:(struct XmlReaderNode_t *)arg1 ToItem:(id)arg2;
+ (BOOL)ParseItemXML:(id)arg1 ToItem:(id)arg2;
+ (id)dataTypeStringWithType:(unsigned int)arg1;
+ (id)getFavTextCellText:(id)arg1;
+ (id)unarchiveItemFromPasteboardItem:(id)arg1;
+ (id)unarchiveItemsFromPasteboard:(id)arg1;
+ (id)convertVideoDataField2MsgData:(id)arg1;
+ (id)convertFileDataField2MsgData:(id)arg1;
+ (id)convertImageDataField2MsgData:(id)arg1;
+ (id)itemWithFilePath:(id)arg1 fileName:(id)arg2;
+ (id)itemWithFilePath:(id)arg1;
+ (id)itemWithUrlString:(id)arg1 urlName:(id)arg2;
+ (id)itemWithImageData:(id)arg1;
+ (id)itemWithPlainText:(id)arg1;
+ (id)checkNormalURLWithItem:(id)arg1;
+ (id)checkPlainTextTypeWithItem:(id)arg1;
+ (id)checkFileTypeWithItem:(id)arg1;
+ (id)checkImageTypeWithItem:(id)arg1;
+ (id)favoritesItemsFromPasteboard:(id)arg1;
+ (id)createItemFromPasteboardItem:(id)arg1;
+ (id)itemWithGroupNoticeMessageData:(id)arg1;
+ (id)itemWithFinderNameCardMessageData:(id)arg1;
+ (id)itemWithFeedMessageData:(id)arg1;
+ (id)itemWithRecordMessageData:(id)arg1;
+ (id)urlItemWithURLMessage:(id)arg1 urlString:(id *)arg2;
+ (id)urlItemWithReaderWrap:(id)arg1 urlString:(id *)arg2;
+ (id)itemWithSnsUrl:(id)arg1;
+ (id)itemWithMusicURLMessageData:(id)arg1;
+ (id)itemWithURLMessageData:(id)arg1;
+ (id)itemWithVideoSnsItem:(id)arg1 fromUser:(id)arg2;
+ (id)itemWithVideoMessageData:(id)arg1;
+ (id)itemWithImageSnsItem:(id)arg1 fromUser:(id)arg2 appId:(id)arg3;
+ (id)itemWithImageMessageData:(id)arg1;
+ (id)itemWithFileMessageData:(id)arg1;
+ (id)itemWithVoiceMessageData:(id)arg1;
+ (id)itemWithLocationMessageData:(id)arg1;
+ (id)convertMusicSNS2FavItem:(id)arg1 singer:(id)arg2 webUrl:(id)arg3 lowUrl:(id)arg4 dataUrl:(id)arg5 fromUser:(id)arg6 eventId:(id)arg7 mediaId:(id)arg8 appId:(id)arg9 thumbUrl:(id)arg10 srcCreateTime:(unsigned int)arg11 songLyric:(id)arg12 songAlbumUrl:(id)arg13;
+ (id)itemWithSnsMusic:(id)arg1;
+ (id)itemWithSnsText:(id)arg1;
+ (id)itemWithTextMessageData:(id)arg1;
+ (id)itemWithSnsMediaItem:(id)arg1 fromUser:(id)arg2 appId:(id)arg3;
+ (id)itemWithMessageData:(id)arg1;
+ (id)itemWithMessageData:(id)arg1 readerWrap:(id)arg2;
+ (id)itemWithAppUrl:(id)arg1 urlTitle:(id)arg2 urlDesc:(id)arg3 thumbUrl:(id)arg4 sourceId:(id)arg5;
+ (id)ConvertFavData2FavItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL isChatRoom; // @synthesize isChatRoom=_isChatRoom;
@property(nonatomic) BOOL isFromFavToChat; // @synthesize isFromFavToChat=_isFromFavToChat;
@property(retain, nonatomic) WCFinderMessageShareNameCard *finderMessageShareNameCard; // @synthesize finderMessageShareNameCard=_finderMessageShareNameCard;
@property(retain, nonatomic) WCFinderShareItem *finderShareItem; // @synthesize finderShareItem=_finderShareItem;
@property(retain, nonatomic) FavWeAppItem *weAppItem; // @synthesize weAppItem=_weAppItem;
@property(nonatomic) unsigned int m_preMsgIndex; // @synthesize m_preMsgIndex=_m_preMsgIndex;
@property(nonatomic) unsigned int m_favcreateTime; // @synthesize m_favcreateTime=_m_favcreateTime;
@property(retain, nonatomic) NSString *m_nsFavUsername; // @synthesize m_nsFavUsername=_m_nsFavUsername;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSDate *startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) int countMd5Status; // @synthesize countMd5Status=_countMd5Status;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) int localStatus; // @synthesize localStatus=_localStatus;
@property(retain, nonatomic) NSArray *recommendTagList; // @synthesize recommendTagList=_recommendTagList;
@property(retain, nonatomic) NSArray *tagSvrIdList; // @synthesize tagSvrIdList=_tagSvrIdList;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) unsigned int remarkTime; // @synthesize remarkTime=_remarkTime;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) FavTVItem *tvItem; // @synthesize tvItem=_tvItem;
@property(retain, nonatomic) FavProductItem *productItem; // @synthesize productItem=_productItem;
@property(retain, nonatomic) FavURLItem *urlItem; // @synthesize urlItem=_urlItem;
@property(retain, nonatomic) FavLocationItem *locItem; // @synthesize locItem=_locItem;
@property(nonatomic) unsigned int totalDataSize; // @synthesize totalDataSize=_totalDataSize;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(nonatomic) unsigned int srcCreateTime; // @synthesize srcCreateTime=_srcCreateTime;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(nonatomic) long long n64MsgID; // @synthesize n64MsgID=_n64MsgID;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSString *toUsr; // @synthesize toUsr=_toUsr;
@property(retain, nonatomic) NSString *fromUsr; // @synthesize fromUsr=_fromUsr;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) unsigned int ctrlFlag; // @synthesize ctrlFlag=_ctrlFlag;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr=_descriptionStr;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *editUsr; // @synthesize editUsr=_editUsr;
@property(nonatomic) unsigned int editTime; // @synthesize editTime=_editTime;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSDate *updateDateTime; // @synthesize updateDateTime=_updateDateTime;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq=_localUpdateSeq;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq=_updateSeq;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
- (BOOL)isNoteFinishDownload;
- (BOOL)checkHtmlFileCDNInfo;
- (BOOL)checkFavoritesItemAvailable;
- (BOOL)canShowInFinder;
- (BOOL)isCanForward;
- (BOOL)checkIfHaveWeWorkCdnUr:(id)arg1;
- (BOOL)isHaveWeWorkCdnUrl;
- (BOOL)isRecordItem;
- (BOOL)isEqual:(id)arg1;
- (BOOL)hasCDNData;
- (unsigned int)itemServerSize;
- (BOOL)needBatchGet;
@property(readonly, copy) NSString *description;
- (void)addData:(id)arg1 Index:(int)arg2;
- (BOOL)dataHasBeenCopyedToTarget:(id)arg1;
- (unsigned int)itemTotalSize:(unsigned int)arg1 withDataList:(id)arg2;
- (BOOL)canAutoDownload;
- (BOOL)canAutoUpload;
- (id)firstDataFieldWithThumbnail;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFavObject:(id)arg1;
- (id)initWithAddFavItem:(id)arg1;
- (id)init;
- (void)generateFavItemDescription;
- (id)getChatName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)recordTitleString;
- (void)writeToPasteboard:(id)arg1;
- (void)writeToPasteboardItem:(id)arg1;
- (id)UICacheKey;
@property(nonatomic) int searchResultType;
- (BOOL)downloadFavoritesItemDataIfNeedWhenHighlight;
- (id)fakeMsgDataWithType;
- (BOOL)exportToPath:(id)arg1;
- (id)fileNameForExportWithFormat:(id)arg1;
- (id)fileNameForExport;
- (BOOL)canBeExportedToFile;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (void)writeFullRepresentationToPasteboardItem:(id)arg1;
- (id)convertFavTxtItem2FavItemTxtDataField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

