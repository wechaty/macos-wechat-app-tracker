//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseWebWindowController.h"

#import "BaseWebViewControllerDelegate-Protocol.h"
#import "MMWebViewDataItemOpenable-Protocol.h"

@class NSString, NSTextField;

@interface MMWebViewWindowController : MMBaseWebWindowController <BaseWebViewControllerDelegate, MMWebViewDataItemOpenable>
{
    NSTextField *_textField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
- (void)showTitleWithValue:(double)arg1;
- (void)showTitle:(BOOL)arg1;
- (void)updateTitle:(id)arg1;
- (BOOL)shouldUpdateWindowTitle;
- (BOOL)shouldUpdateTitle;
- (id)currentTitle;
- (void)makeStandardSize:(id)arg1;
- (void)makeSmaller:(id)arg1;
- (void)makeLarger:(id)arg1;
- (void)closeWebViewWindowWithCompletion:(CDUnknownBlockType)arg1;
- (void)showWebViewWithDataItem:(id)arg1;
- (void)updateWindowFrame:(BOOL)arg1;
- (struct CGSize)minSize;
- (struct CGSize)maxSize;
- (void)saveWindowRectInType:(struct CGRect)arg1;
- (void)setupEventHandler;
- (BOOL)windowShouldClose:(id)arg1;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (void)initTextField;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

