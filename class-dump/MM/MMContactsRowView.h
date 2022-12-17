//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

#import "MMContactsMgrExt-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class CAShapeLayer, NSString, NSTrackingArea, NSView, WCContactData;
@protocol MMContactsRowViewDelegate;

@interface MMContactsRowView : NSTableRowView <NSMenuDelegate, MMContactsMgrExt>
{
    BOOL _bSelected;
    BOOL _isLastRow;
    BOOL _shouldDrawFocusRing;
    BOOL _mouseEntering;
    id <MMContactsRowViewDelegate> _delegate;
    long long _tabbarType;
    WCContactData *_oContact;
    NSString *_tagId;
    CDUnknownBlockType _didTableCellClickBlock;
    CDUnknownBlockType _didTableCellMenuShowBlock;
    CAShapeLayer *_backgroudLayer;
    CAShapeLayer *_shapeLayer;
    NSTrackingArea *_trackingArea;
    NSView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) BOOL mouseEntering; // @synthesize mouseEntering=_mouseEntering;
@property(nonatomic) BOOL shouldDrawFocusRing; // @synthesize shouldDrawFocusRing=_shouldDrawFocusRing;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAShapeLayer *backgroudLayer; // @synthesize backgroudLayer=_backgroudLayer;
@property(copy, nonatomic) CDUnknownBlockType didTableCellMenuShowBlock; // @synthesize didTableCellMenuShowBlock=_didTableCellMenuShowBlock;
@property(copy, nonatomic) CDUnknownBlockType didTableCellClickBlock; // @synthesize didTableCellClickBlock=_didTableCellClickBlock;
@property(nonatomic) BOOL isLastRow; // @synthesize isLastRow=_isLastRow;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
@property(retain, nonatomic) WCContactData *oContact; // @synthesize oContact=_oContact;
@property(nonatomic) BOOL bSelected; // @synthesize bSelected=_bSelected;
@property(nonatomic) long long tabbarType; // @synthesize tabbarType=_tabbarType;
@property(nonatomic) __weak id <MMContactsRowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onContactsPreviewSelectedContact:(id)arg1 bSelected:(BOOL)arg2;
- (void)onReviceModifyContact:(id)arg1;
- (void)onRemoveTagMenuClick;
- (void)onAddTagMenuClick;
- (void)onDeleteMenuClick;
- (void)onModifyMenuClick;
- (void)menuWillOpen:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (id)contentMenu;
- (id)menuForEvent:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setupTrackingArea;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)clear;
- (void)prepareForReuse;
- (void)updateMaskLayer;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

