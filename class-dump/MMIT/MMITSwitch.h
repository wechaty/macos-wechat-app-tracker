//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class CALayer, NSColor;

@interface MMITSwitch : NSControl
{
    id _target;
    SEL _action;
    BOOL _checked;
    BOOL _animated;
    BOOL _active;
    BOOL _dragged;
    BOOL _draggingTowardsOn;
    NSColor *_tintColor;
    NSColor *_kNobColor;
    NSColor *_disableTintColor;
    double _kNobHeight;
    double _kNobWidth;
    CALayer *_rootLayer;
    CALayer *_backgroundLayer;
    CALayer *_knobLayer;
    CALayer *_knobInsideLayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *knobInsideLayer; // @synthesize knobInsideLayer=_knobInsideLayer;
@property(readonly, nonatomic) CALayer *knobLayer; // @synthesize knobLayer=_knobLayer;
@property(readonly, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(readonly, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(nonatomic, getter=isDraggingTowardsOn) BOOL draggingTowardsOn; // @synthesize draggingTowardsOn=_draggingTowardsOn;
@property(nonatomic, getter=hasDragged) BOOL dragged; // @synthesize dragged=_dragged;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic) double kNobWidth; // @synthesize kNobWidth=_kNobWidth;
@property(nonatomic) double kNobHeight; // @synthesize kNobHeight=_kNobHeight;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
- (void)propagateValue:(id)arg1 forBinding:(id)arg2;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)_invokeTargetAction;
@property(retain, nonatomic) NSColor *kNobColor; // @synthesize kNobColor=_kNobColor;
@property(retain, nonatomic) NSColor *disableTintColor; // @synthesize disableTintColor=_disableTintColor;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 withAnimated:(BOOL)arg2;
@property(retain, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)setChecked:(BOOL)arg1 withAnimated:(BOOL)arg2;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (struct CGRect)rectForKnob;
- (double)knobWidthForSize:(struct CGSize)arg1;
- (double)knobHeightForSize:(struct CGSize)arg1;
- (void)reloadLayerSize;
- (void)reloadLayer:(BOOL)arg1;
- (void)reloadLayer;
- (struct CGRect)focusRingMaskBounds;
- (BOOL)canBecomeKeyView;
- (void)drawFocusRingMask;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setUpLayers;
- (void)setup;
- (id)init;

@end

