//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FavoritesUtil : NSObject
{
}

+ (void)copySourceDataPath:(id)arg1 withDataList:(id)arg2 withFavItem:(id)arg3;
+ (void)copySourceDataPath:(id)arg1 withDataList:(id)arg2 withOriginMsgData:(id)arg3;
+ (id)findRecordDataInList:(id)arg1 withLocalDataId:(id)arg2;
+ (id)getNoteDescByFavItem:(id)arg1;
+ (id)getGroupDispName:(id)arg1 NeedSelf:(BOOL)arg2;
+ (id)getRecordForwardTitleByFavItem:(id)arg1;
+ (id)getRecordForwardTitleByMsgData:(id)arg1;
+ (id)getRecordForwardTitleByMsgDatas:(id)arg1;
+ (id)getNoteConflictTitle:(id)arg1 atTime:(unsigned int)arg2;
+ (id)getRecordDataDesc:(id)arg1;
+ (id)getRecordDescByFavItem:(id)arg1 withInfo:(id)arg2;
+ (id)getRecordDescByMsg:(id)arg1;
+ (id)getFavItemSubTimeStringByUInt:(unsigned int)arg1;
+ (id)getFavItemSourceByMsg:(id)arg1;
+ (id)getRecordRealChatNameByMsg:(id)arg1;
+ (id)getRecordDataTimeByMsg:(id)arg1;
+ (id)getRecordDataSourceNameByMsg:(id)arg1;
+ (id)getFavTextCellText:(id)arg1;
+ (id)safeLocalStr:(id)arg1 defaultVal:(id)arg2;
+ (id)getVideoDurationByDataField:(id)arg1;
+ (id)getRecordDataSourceIdByMsg:(id)arg1;
+ (id)convertMsgData2FavData:(id)arg1 withInfo:(id)arg2;
+ (id)convertRecordMsg:(id)arg1 toFavDataListFromDataList:(id)arg2 withParentSourceId:(id)arg3 deep:(int)arg4;
+ (id)convertRecordMsg:(id)arg1 toWeWorkDataListFromDataList:(id)arg2 withParentSourceId:(id)arg3;
+ (id)convertRecordMsg:(id)arg1 toDataListFromDataList:(id)arg2 withParentSourceId:(id)arg3;
+ (id)getRecordInfo:(id)arg1;
+ (id)forwardFavoriteItemDataField2MsgData:(id)arg1 toUser:(id)arg2;
+ (id)forwardFavoriteItem2MsgData:(id)arg1 toUser:(id)arg2;
+ (id)genDefaultFavDataForSendFailedMsgWrap:(id)arg1;
+ (id)convertMsgList2MsgData:(id)arg1;
+ (id)convertMsgData2FavItem:(id)arg1;
+ (id)convertMsgList2FavItem:(id)arg1;

@end

