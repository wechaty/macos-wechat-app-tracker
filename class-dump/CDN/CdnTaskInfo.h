//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FavoritesItemDataField, MMSnsMediaItem, MessageData, NSString;

@interface CdnTaskInfo : NSObject
{
    BOOL _m_bHD;
    BOOL _m_bUpload;
    BOOL _m_bThumb;
    BOOL _m_bCheckMd5;
    BOOL _isSendingMsg;
    BOOL _isSendingOverWriteMsg;
    unsigned int _m_uiThumbSize;
    unsigned int _m_uiFinishedLen;
    unsigned int _m_uiTotalLen;
    int _m_nRetCode;
    unsigned int _m_uiOpType;
    unsigned int _m_uiDataType;
    unsigned int _m_uiStartPos;
    NSString *_m_nsClientMsgID;
    MessageData *_m_wrapMsg;
    FavoritesItemDataField *_m_recordMsg;
    NSString *_m_nsChatName;
    unsigned long long _m_ui64StartTime;
    NSString *_m_nsCdnStatInfo;
    FavoritesItemDataField *_m_nsDataField;
    FavoritesItemDataField *_m_nsThumbDataField;
    MMSnsMediaItem *_m_oMediaItem;
    unsigned long long _m_ui64TaskCreateTime;
    unsigned long long _m_emDownloadMode;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isSendingOverWriteMsg; // @synthesize isSendingOverWriteMsg=_isSendingOverWriteMsg;
@property(nonatomic) BOOL isSendingMsg; // @synthesize isSendingMsg=_isSendingMsg;
@property(nonatomic) unsigned long long m_emDownloadMode; // @synthesize m_emDownloadMode=_m_emDownloadMode;
@property(nonatomic) unsigned long long m_ui64TaskCreateTime; // @synthesize m_ui64TaskCreateTime=_m_ui64TaskCreateTime;
@property(retain, nonatomic) MMSnsMediaItem *m_oMediaItem; // @synthesize m_oMediaItem=_m_oMediaItem;
@property(nonatomic) BOOL m_bCheckMd5; // @synthesize m_bCheckMd5=_m_bCheckMd5;
@property(nonatomic) unsigned int m_uiStartPos; // @synthesize m_uiStartPos=_m_uiStartPos;
@property(retain, nonatomic) FavoritesItemDataField *m_nsThumbDataField; // @synthesize m_nsThumbDataField=_m_nsThumbDataField;
@property(retain, nonatomic) FavoritesItemDataField *m_nsDataField; // @synthesize m_nsDataField=_m_nsDataField;
@property(nonatomic) unsigned int m_uiDataType; // @synthesize m_uiDataType=_m_uiDataType;
@property(nonatomic) unsigned int m_uiOpType; // @synthesize m_uiOpType=_m_uiOpType;
@property(retain, nonatomic) NSString *m_nsCdnStatInfo; // @synthesize m_nsCdnStatInfo=_m_nsCdnStatInfo;
@property(nonatomic) BOOL m_bThumb; // @synthesize m_bThumb=_m_bThumb;
@property(nonatomic) BOOL m_bUpload; // @synthesize m_bUpload=_m_bUpload;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode=_m_nRetCode;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime=_m_ui64StartTime;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen=_m_uiTotalLen;
@property(nonatomic) unsigned int m_uiFinishedLen; // @synthesize m_uiFinishedLen=_m_uiFinishedLen;
@property(nonatomic) BOOL m_bHD; // @synthesize m_bHD=_m_bHD;
@property(nonatomic) unsigned int m_uiThumbSize; // @synthesize m_uiThumbSize=_m_uiThumbSize;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName=_m_nsChatName;
@property(retain, nonatomic) FavoritesItemDataField *m_recordMsg; // @synthesize m_recordMsg=_m_recordMsg;
@property(retain, nonatomic) MessageData *m_wrapMsg; // @synthesize m_wrapMsg=_m_wrapMsg;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID=_m_nsClientMsgID;

@end

