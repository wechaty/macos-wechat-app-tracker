//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSTextFieldDelegate-Protocol.h"

@class MMPlaceholderTextField, NSAttributedString, NSImageView, NSString;

@interface MMPlaceholderContainerView : NSView <NSTextFieldDelegate>
{
    BOOL _isEditing;
    MMPlaceholderTextField *_placeholderTextField;
    NSImageView *_imageView;
    CDUnknownBlockType _didBecomeFirstResponderBlock;
    CDUnknownBlockType _textDidChangeBlock;
    CDUnknownBlockType _textDidEndEditBlock;
    CDUnknownBlockType _controlCommandSelectorBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType controlCommandSelectorBlock; // @synthesize controlCommandSelectorBlock=_controlCommandSelectorBlock;
@property(copy, nonatomic) CDUnknownBlockType textDidEndEditBlock; // @synthesize textDidEndEditBlock=_textDidEndEditBlock;
@property(copy, nonatomic) CDUnknownBlockType textDidChangeBlock; // @synthesize textDidChangeBlock=_textDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didBecomeFirstResponderBlock; // @synthesize didBecomeFirstResponderBlock=_didBecomeFirstResponderBlock;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMPlaceholderTextField *placeholderTextField; // @synthesize placeholderTextField=_placeholderTextField;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)resignSearch;
- (void)startSearch;
@property(retain, nonatomic) NSAttributedString *placeholderAttributedString;
@property(retain, nonatomic) NSString *placeholderString;
@property(retain, nonatomic) NSAttributedString *attributedString;
@property(retain, nonatomic) NSString *stringValue;
- (void)mouseDown:(id)arg1;
- (void)onSearchSceneChange:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

