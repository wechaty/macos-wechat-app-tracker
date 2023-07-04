//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatLogBaseCellView.h"

@class MMCircularProgressView, MMImageView, NSImageView, NSString, NSTextField;

@interface MMChatLogVideoCellView : MMChatLogBaseCellView
{
    BOOL _isShouldOpenOnDownloadFinish;
    BOOL _isWebStreamVideo;
    BOOL _isExpired;
    BOOL _isDownloadFailed;
    BOOL _isDownloading;
    MMImageView *_thumbnailImageView;
    NSTextField *_videoDescriptionTextView;
    NSTextField *_videoDurationTextView;
    NSTextField *_detailTextField;
    NSString *_videoFilePath;
    NSString *_videoThumbPath;
    NSImageView *_iconImageView;
    MMImageView *_progressBgView;
    MMCircularProgressView *_progressView;
}

+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 parentDataField:(id)arg4 constrainedToWidth:(double)arg5;
- (void).cxx_destruct;
@property(nonatomic) BOOL isDownloading; // @synthesize isDownloading=_isDownloading;
@property(nonatomic) BOOL isDownloadFailed; // @synthesize isDownloadFailed=_isDownloadFailed;
@property(nonatomic) BOOL isExpired; // @synthesize isExpired=_isExpired;
@property(retain, nonatomic) MMCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MMImageView *progressBgView; // @synthesize progressBgView=_progressBgView;
@property(retain, nonatomic) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) BOOL isWebStreamVideo; // @synthesize isWebStreamVideo=_isWebStreamVideo;
@property(retain, nonatomic) NSString *videoThumbPath; // @synthesize videoThumbPath=_videoThumbPath;
@property(retain, nonatomic) NSString *videoFilePath; // @synthesize videoFilePath=_videoFilePath;
@property(nonatomic) BOOL isShouldOpenOnDownloadFinish; // @synthesize isShouldOpenOnDownloadFinish=_isShouldOpenOnDownloadFinish;
@property(retain, nonatomic) NSTextField *detailTextField; // @synthesize detailTextField=_detailTextField;
@property(retain, nonatomic) NSTextField *videoDurationTextView; // @synthesize videoDurationTextView=_videoDurationTextView;
@property(retain, nonatomic) NSTextField *videoDescriptionTextView; // @synthesize videoDescriptionTextView=_videoDescriptionTextView;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (BOOL)isAutoDownload;
- (void)downloadThumb;
- (void)downloadData;
- (id)videoThumbImageWithPath:(id)arg1;
- (void)openFile;
- (void)layoutVideoContentView;
- (unsigned int)getFileBytes;
- (void)layoutVideoDurationTextView;
- (void)layoutVideoDescriptionTextView;
- (void)layoutIconImage;
- (void)layoutThumbnailImage;
- (id)getVideoDescription;
- (void)populateWithFavItemDataField:(id)arg1;
- (void)populateWithFavItemDataField:(id)arg1 parentMessage:(id)arg2;
- (void)populateWithFavItemDataField:(id)arg1 parentFavItem:(id)arg2;
- (id)originalFilePath;
- (BOOL)allowExport;
- (BOOL)allowAddToFavorites;
- (BOOL)allowForward;
- (BOOL)allowCopy;
- (struct CGRect)clickableArea;
- (void)prepareForReuse;
- (void)viewDidChangeEffectiveAppearance;
- (id)getURLString;
- (id)buildExtraData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

