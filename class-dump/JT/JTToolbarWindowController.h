//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "JTPopoverWindowControllerDelegate-Protocol.h"
#import "JTToolbarViewDelegate-Protocol.h"

@class JTPopoverWindowController, JTToolbarView, NSColor, NSString;
@protocol JTToolbarWindowControllerDelegate;

@interface JTToolbarWindowController : NSWindowController <JTToolbarViewDelegate, JTPopoverWindowControllerDelegate>
{
    BOOL _enableUndo;
    BOOL _enableQR;
    BOOL _enableOCR;
    id <JTToolbarWindowControllerDelegate> _delegate;
    NSColor *_backgroundColor;
    JTToolbarView *_toolbarView;
    JTPopoverWindowController *_popoverWindowController;
    struct CGPoint _position;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JTPopoverWindowController *popoverWindowController; // @synthesize popoverWindowController=_popoverWindowController;
@property(retain, nonatomic) JTToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(nonatomic) BOOL enableOCR; // @synthesize enableOCR=_enableOCR;
@property(nonatomic) BOOL enableQR; // @synthesize enableQR=_enableQR;
@property(nonatomic) BOOL enableUndo; // @synthesize enableUndo=_enableUndo;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) __weak id <JTToolbarWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fontSizeDidChange:(unsigned long long)arg1;
- (void)widthDidChange:(unsigned long long)arg1;
- (void)colorDidChange:(id)arg1;
- (void)hidePopover;
- (void)showPopover;
- (void)showPopoverViewType:(long long)arg1 width:(unsigned long long)arg2 color:(id)arg3;
- (void)showPopoverViewType:(long long)arg1;
- (void)QRScaner;
- (void)undo;
- (void)graphTypeDidChange:(long long)arg1;
- (void)endOCRTransLoading;
- (void)beginOCRTransLoading;
- (void)cancelOCRTranslate;
- (void)beginOCRTranslate;
- (void)cancelQRCode;
- (void)onUndoRedoCheckNotification:(id)arg1;
- (void)beginCreateItem:(id)arg1;
- (void)focusItemDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithOrigin:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

