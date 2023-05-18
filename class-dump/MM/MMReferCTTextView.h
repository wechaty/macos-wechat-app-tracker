//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MMCTTextViewSession, MMTimer, NSAttributedString, NSColor, NSFont, NSMutableArray, NSString, NSTrackingArea;

@interface MMReferCTTextView : NSView
{
    unsigned char _shouldAutoScroll;
    BOOL _selectable;
    BOOL _isForceDrawLine;
    NSFont *_font;
    NSColor *_textColor;
    NSColor *_backgroundColor;
    long long _alignment;
    unsigned long long _lineBreakMode;
    unsigned long long _numberOfLines;
    NSString *_string;
    NSAttributedString *_attributedString;
    long long _lineVerticalLayout;
    NSMutableArray *_linkRanges;
    NSMutableArray *_linkStrings;
    MMCTTextViewSession *_session;
    NSTrackingArea *_trackingArea;
    MMTimer *_autoScrollTimer;
    unsigned long long _scrollDirection;
    unsigned long long _scrollTime;
    struct CGPoint _originOfTail;
    struct _NSRange _selectedRange;
    struct CGPoint _lastMousePosition;
}

+ (struct CGSize)suggestedSizeWithAttributedString:(id)arg1 widthConstraint:(double)arg2;
+ (struct CGSize)suggestedSizeWithAttributedString:(id)arg1 widthConstraint:(double)arg2 lineSizes:(id *)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long scrollTime; // @synthesize scrollTime=_scrollTime;
@property(nonatomic) struct CGPoint lastMousePosition; // @synthesize lastMousePosition=_lastMousePosition;
@property(nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(retain, nonatomic) MMTimer *autoScrollTimer; // @synthesize autoScrollTimer=_autoScrollTimer;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) MMCTTextViewSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableArray *linkStrings; // @synthesize linkStrings=_linkStrings;
@property(retain, nonatomic) NSMutableArray *linkRanges; // @synthesize linkRanges=_linkRanges;
@property(nonatomic) long long lineVerticalLayout; // @synthesize lineVerticalLayout=_lineVerticalLayout;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) BOOL isForceDrawLine; // @synthesize isForceDrawLine=_isForceDrawLine;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(nonatomic) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic) unsigned char shouldAutoScroll; // @synthesize shouldAutoScroll=_shouldAutoScroll;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) struct CGPoint originOfTail; // @synthesize originOfTail=_originOfTail;
@property(nonatomic) unsigned long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
- (void)updateSelectRangeWith:(struct CGPoint)arg1;
- (void)stopScrollTimer;
- (unsigned char)isShowAll;
- (void)autoScrollTextView;
- (unsigned char)isNeedChangeVisiableRectWithDirection:(unsigned long long)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (id)handleMenuEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)clearSelectedRange;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct __CTLine *)findLineInLocation:(struct CGPoint)arg1;
- (BOOL)locationInLinkRange:(struct CGPoint)arg1;
- (void)updateMouseCursorWithEvent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)updateTrackingAreas;
- (struct CGSize)suggestedSizeWithWidthConstraint:(double)arg1;
- (BOOL)truncatesLastVisibleLine;
- (id)attributes;
- (void)cleanup;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)_calLastLineOriginOfTail:(struct __CTLine *)arg1 lastLineY:(double)arg2;
- (struct __CTLine *)makeLastTruncatingLine:(struct CGContext *)arg1 line:(struct __CTLine *)arg2 point:(struct CGPoint)arg3 count:(unsigned long long)arg4 preLineOffsetY:(double)arg5;
- (void)drawCTLine:(struct __CTLine *)arg1 context:(struct CGContext *)arg2 origin:(struct CGPoint)arg3 lineIndex:(long long)arg4 lineCount:(long long)arg5;
- (void)drawTextWithContext:(struct CGContext *)arg1 lines:(struct __CFArray *)arg2 lineOrigins:(struct CGPoint *)arg3 count:(unsigned long long)arg4;
- (double)findSuitableY:(struct __CTLine *)arg1 lineOrigin:(struct CGPoint)arg2 lineLayoutParams:(struct CTLineLayoutParams)arg3 index:(long long)arg4;
- (struct CTLineLayoutParams)makeCTLineLayoutParams:(struct __CTLine *)arg1;
- (void)drawSelectionBackgroundWithLines:(struct __CFArray *)arg1 lineOrigins:(struct CGPoint *)arg2 count:(unsigned long long)arg3;
- (void)drawLinesWithContext:(struct CGContext *)arg1 frame:(struct __CTFrame *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

