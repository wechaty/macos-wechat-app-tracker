//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFavoritesListBaseCell.h"

#import "IContactMgrExt-Protocol.h"
#import "MMFavoriteFileServiceExt-Protocol.h"

@class FavThumbRequestParam, MMImageView, NSImageView, NSString, NSTextField, NSView, SVGImageView;

@interface MMFavoritesListMediaCell : MMFavoritesListBaseCell <MMFavoriteFileServiceExt, IContactMgrExt>
{
    MMImageView *_thumbnailImageView;
    NSView *_thumbnailIconView;
    NSTextField *_titleTextView;
    NSTextField *_descTextView;
    NSView *_progressContainerView;
    FavThumbRequestParam *_favThumbRequest;
    NSImageView *_thumbnailIconView_bkg;
    SVGImageView *_thumbnailIconView_icon;
}

+ (double)cellHeightWithFavItem:(id)arg1 andWidthConstrain:(double)arg2;
+ (double)cellLinkDescTextHeight;
+ (double)cellLinkTitleTextHeight;
+ (double)cellLinkThumbnailImageHeight;
+ (double)cellLinkContentHeightWithFavItem:(id)arg1 andWidthConstrain:(double)arg2;
+ (double)cellNormalDescTextHeight;
+ (double)cellNormalTitleAndDescTopMargin;
+ (double)cellNormalTitleTextHeight;
+ (double)cellNormalThumbnailImageHeight;
+ (double)cellNormalMediaContentHeightWithFavItem:(id)arg1 andWidthConstrain:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) SVGImageView *thumbnailIconView_icon; // @synthesize thumbnailIconView_icon=_thumbnailIconView_icon;
@property(retain, nonatomic) NSImageView *thumbnailIconView_bkg; // @synthesize thumbnailIconView_bkg=_thumbnailIconView_bkg;
@property(retain, nonatomic) FavThumbRequestParam *favThumbRequest; // @synthesize favThumbRequest=_favThumbRequest;
@property(retain, nonatomic) NSView *progressContainerView; // @synthesize progressContainerView=_progressContainerView;
@property(retain, nonatomic) NSTextField *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) NSTextField *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) NSView *thumbnailIconView; // @synthesize thumbnailIconView=_thumbnailIconView;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void)onModifyStrangerContacts:(id)arg1;
- (void)layoutFavContentView;
- (void)setThumbnailImageIconView:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)getTextTitleExtrAttrs:(id)arg1;
- (void)layoutWeAppStyleTitleTextView;
- (void)layoutThumbnailImage;
- (void)layoutWeAppStyle;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2;
- (void)layoutLinkStyleDescriptionTextView:(id)arg1;
- (id)favItemDescriptionString;
- (id)getTitleText;
- (id)getTextDescExtrAttrs:(id)arg1;
- (id)getTextTitleExtrAttrs:(id)arg1;
- (void)layoutLinkStyleTitleTextView;
- (void)layoutThumbnailImage;
- (void)layoutWithLinkMediaStyle;
- (void)favoriteFileService:(id)arg1 didFailDownloadWithFavItemData:(id)arg2 type:(int)arg3 taskID:(id)arg4;
- (void)favoriteFileService:(id)arg1 didFinishDownloadWithFavItemData:(id)arg2 type:(int)arg3 filePath:(id)arg4 taskID:(id)arg5;
- (void)favoriteFileService:(id)arg1 downloaded:(int)arg2 of:(int)arg3 WithFavItemData:(id)arg4 type:(int)arg5;
- (id)getFileIconImageName;
- (id)getFileIconImage;
- (id)getRecommendTagSource;
- (id)getRecommendTagTitle;
- (id)getRecommendTagAuthor;
- (id)getVoiceTime;
- (id)getDescText;
- (id)getFileFormat;
- (unsigned int)getFileBytes;
- (id)formatTime:(long long)arg1;
- (id)getTitle;
- (void)layoutNormalProgressView;
- (id)getDescAttrs;
- (void)layoutNormalDescriptionTextView;
- (void)layoutNormalTitleTextView;
- (void)layoutNormalThumbnailImage;
- (void)layoutWithNormalMediaStyle;
- (void)layoutImageStyleThumbnailImage;
- (void)layoutWithImageMediaStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

