//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

@class CAShapeLayer, MMCTTextView, MMDivider, MMImageView, MMReaderWrapView, MMTextView, ReaderWrap;

@interface MMAppSingleReaderMessageCellView : MMMessageCellView
{
    ReaderWrap *_readerData;
    MMReaderWrapView *_containerView;
    MMTextView *_readerTitleLabel;
    MMImageView *_readerThumbnail;
    MMCTTextView *_readerDescription;
    MMDivider *_readerSeperator;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_highlightLayer;
}

+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (double)contentHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (BOOL)isAppReaderMessage:(id)arg1;
+ (BOOL)hasUrlForMessage:(id)arg1;
+ (double)heightForTopNewsDescriptionStr:(id)arg1 withContentWidth:(double)arg2;
+ (BOOL)hasThumbnailForMessage:(id)arg1;
+ (double)thumbnailHeightWithContentWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) MMDivider *readerSeperator; // @synthesize readerSeperator=_readerSeperator;
@property(retain, nonatomic) MMCTTextView *readerDescription; // @synthesize readerDescription=_readerDescription;
@property(retain, nonatomic) MMImageView *readerThumbnail; // @synthesize readerThumbnail=_readerThumbnail;
@property(retain, nonatomic) MMTextView *readerTitleLabel; // @synthesize readerTitleLabel=_readerTitleLabel;
@property(retain, nonatomic) MMReaderWrapView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) ReaderWrap *readerData; // @synthesize readerData=_readerData;
- (BOOL)isTemplateReaderWrap;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (void)contextMenuForward;
- (id)getSection1MenuItem;
- (BOOL)allowRecall;
- (id)draggingImage;
- (BOOL)draggingEnabled;
- (struct CGRect)bubbleFrame;
- (struct CGRect)clickableArea;
- (void)formattedLinkAttributed:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)formattedMsgContent:(id)arg1 content:(id)arg2;
- (void)layoutDescription;
- (void)layoutThumbnail;
- (void)layoutReaderTitleLabel;
- (id)getReaderTitleAttr:(id)arg1;
- (id)getReaderTitleWithReaderData:(id)arg1;
- (void)layoutContainerView;
- (void)layoutViews;
- (void)viewDidMoveToSuperview;
- (void)updateMessageLayer;
- (void)updateHighlightMaskView;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)hasUrl;
- (BOOL)hasThumbnail;

@end

