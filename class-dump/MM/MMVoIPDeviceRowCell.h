//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MMView, NSImageView, NSTextField, NSTrackingArea, NSView;

@interface MMVoIPDeviceRowCell : NSTableCellView
{
    BOOL _isSelected;
    BOOL _hasLine;
    NSTextField *_name;
    NSImageView *_check;
    NSTrackingArea *_trackingArea;
    NSView *_trackLayer;
    NSView *_backgroundView;
    MMView *_divider;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hasLine; // @synthesize hasLine=_hasLine;
@property(retain, nonatomic) MMView *divider; // @synthesize divider=_divider;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSView *trackLayer; // @synthesize trackLayer=_trackLayer;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSImageView *check; // @synthesize check=_check;
@property(retain, nonatomic) NSTextField *name; // @synthesize name=_name;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setupTrackingArea;
- (void)reloadData:(id)arg1;
- (void)layoutUI;
- (void)initUI;
- (void)setFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

