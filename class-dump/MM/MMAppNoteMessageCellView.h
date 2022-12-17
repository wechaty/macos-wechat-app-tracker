//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "IMMRecordDownloadMgrExt-Protocol.h"

@class CAShapeLayer, FavoritesItem, MMBorderView, MMCTTextView, MMView, MessageData, NSImageView, NSMutableArray, NSMutableDictionary, NSString, NSTextField;

@interface MMAppNoteMessageCellView : MMMessageCellView <IMMRecordDownloadMgrExt>
{
    NSMutableDictionary *m_localDataIDToThumbIndexDict;
    MMView *_containerView;
    MMCTTextView *_titleTextView;
    MMCTTextView *_contentTextView;
    MMView *_thumbnailsContainerView;
    NSMutableArray *_subThumbnailImageViewArray;
    MMBorderView *_dashLine;
    MMBorderView *_solidLine;
    NSTextField *_favIconTextField;
    NSTextField *_maskTextField;
    NSImageView *_maskBkImageView;
    FavoritesItem *_favoritesItem;
    MessageData *_message;
    CAShapeLayer *_highlightLayer;
    CAShapeLayer *_strokeLayer;
}

+ (double)calCellHeightAndPrepareInformation:(id)arg1 outputTitle:(id *)arg2 outputContent:(id *)arg3 outputTitleNumberOfLine:(unsigned long long *)arg4 outputTitleOneLineHeight:(double *)arg5 outputContentNumberOfLine:(unsigned long long *)arg6 outputContentOneLineHeight:(double *)arg7 outputImgCount:(unsigned long long *)arg8;
+ (double)ctTextViewOneLineHeight:(id)arg1 fontSize:(float)arg2 width:(float)arg3 maxnumberOfLine:(unsigned long long)arg4;
+ (double)heightForString:(id)arg1 fontSize:(float)arg2 andWidth:(float)arg3;
+ (id)GetNoteTitleAndDesc:(id)arg1;
+ (id)GetRecordDataDesc:(id)arg1;
+ (id)getFavTextCellText:(id)arg1;
+ (int)getImgDataCount:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) MessageData *message; // @synthesize message=_message;
@property(retain, nonatomic) FavoritesItem *favoritesItem; // @synthesize favoritesItem=_favoritesItem;
@property(retain, nonatomic) NSImageView *maskBkImageView; // @synthesize maskBkImageView=_maskBkImageView;
@property(retain, nonatomic) NSTextField *maskTextField; // @synthesize maskTextField=_maskTextField;
@property(retain, nonatomic) NSTextField *favIconTextField; // @synthesize favIconTextField=_favIconTextField;
@property(retain, nonatomic) MMBorderView *solidLine; // @synthesize solidLine=_solidLine;
@property(retain, nonatomic) MMBorderView *dashLine; // @synthesize dashLine=_dashLine;
@property(retain, nonatomic) NSMutableArray *subThumbnailImageViewArray; // @synthesize subThumbnailImageViewArray=_subThumbnailImageViewArray;
@property(retain, nonatomic) MMView *thumbnailsContainerView; // @synthesize thumbnailsContainerView=_thumbnailsContainerView;
@property(retain, nonatomic) MMCTTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) MMCTTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MMView *containerView; // @synthesize containerView=_containerView;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (BOOL)setImageView:(id)arg1 WithFilePath:(id)arg2;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (id)getSection1MenuItem;
- (void)contextMenuShowChatLogPath;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggablePasteboardTypes;
- (id)draggingImage;
- (BOOL)draggingEnabled;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateHighlightMaskView;
- (struct CGRect)clickableArea;
- (void)layoutSubviewsOnlyImgs;
- (void)layoutSubviewsImgText:(id)arg1;
- (void)layoutSubviewsOnlyText:(id)arg1 contentOneLineHeight:(double)arg2 contentNumberOfLine:(unsigned long long)arg3;
- (id)getDisplayImgDatas:(id)arg1;
- (void)layoutContainerView;
- (struct CGRect)bubbleFrame;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)updateMessageLayer;
- (void)setupAccessibility;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

