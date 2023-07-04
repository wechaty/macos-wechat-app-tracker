//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class MMContactProfileController, NSString;

@interface MMSnsRowFormatService : MMService <MMService>
{
    MMContactProfileController *_activeProfileController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMContactProfileController *activeProfileController; // @synthesize activeProfileController=_activeProfileController;
- (BOOL)supportFinderProfile;
- (id)getTagContacts:(id)arg1;
- (id)convert2WCFeedLive:(id)arg1;
- (id)convert2WCFinder:(id)arg1;
- (void)openFinderProfileWithFeed:(id)arg1 withTid:(id)arg2;
- (void)openFinderProfileWithLive:(id)arg1 withTid:(id)arg2;
- (void)openFeedLive:(id)arg1 withTid:(id)arg2 reqTime:(unsigned int)arg3;
- (void)openFinderFeed:(id)arg1 withTid:(id)arg2 reqTime:(unsigned int)arg3;
- (void)openUrlWithUserComment:(id)arg1 withSnsDataItem:(id)arg2 withUrl:(id)arg3;
- (void)openUrlWithDataItem:(id)arg1 withUrl:(id)arg2 webviewSelected:(unsigned int)arg3;
- (void)openUrlWithDataItem:(id)arg1;
- (void)hideContactProfile;
- (void)showContactProfile:(id)arg1 aView:(id)arg2 positionRect:(struct CGRect)arg3;
- (void)convertToBlurImage:(id)arg1 toPath:(id)arg2 dataItem:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
- (struct CGSize)genPreViewIdealSizeForVideo:(struct CGSize)arg1;
- (struct CGSize)genPreViewIdealSizeForImage:(struct CGSize)arg1;
- (struct CGSize)genIdealSizeForImage:(struct CGSize)arg1;
- (id)genWithNickNameByWithUsers:(id)arg1;
- (id)genWCDetailTimeShortStringByUInt:(unsigned int)arg1;
- (id)genWCTimeStringByUInt:(unsigned int)arg1;
- (id)genWCTimeShortStringByUInt:(unsigned int)arg1;
- (id)getNickName:(id)arg1;
- (id)getNickNameWithUserComment:(id)arg1;
- (id)formatterTimeLineTextContent2:(id)arg1;
- (id)formatterTimeLineTextContent:(id)arg1 formatterOptions:(id)arg2;
- (id)formatterTimeLineTextContent:(id)arg1;
- (id)formatterNotificationFeedTextContent:(id)arg1;
- (BOOL)isContainEmoji:(id)arg1;
- (void)getAvatarImageWithUsername:(id)arg1 callBlackBlock:(CDUnknownBlockType)arg2;
- (BOOL)shouldOverrideExternalLink;
- (id)getSignature:(id)arg1;
- (id)getSelfNickNameString;
- (id)getSelfUserNameString;
- (BOOL)isSelf:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

