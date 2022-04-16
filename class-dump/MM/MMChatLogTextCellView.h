//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatLogBaseCellView.h"

#import "NSTextViewDelegate-Protocol.h"

@class MMTextView, NSString;

@interface MMChatLogTextCellView : MMChatLogBaseCellView <NSTextViewDelegate>
{
    MMTextView *_contentTextView;
}

+ (double)contentTextHeightWithFavItemDataField:(id)arg1 constrainedToWidth:(double)arg2;
+ (struct CGRect)boundRectWithAttrStr:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)getContentTextStringWith:(id)arg1;
+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 parentDataField:(id)arg4 constrainedToWidth:(double)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
- (void)reportFingerWebSearch:(unsigned int)arg1 keyWordLen:(unsigned long long)arg2;
- (void)openWebView:(id)arg1;
- (id)getSelectTextLink;
- (void)contextMenuOpenInWebView;
- (id)getTextViewSelectedString;
- (void)contextMenuSearch;
- (id)draggablePasteboardTypes;
- (void)contextMenuFavorites;
- (void)contextMenuCopy;
- (BOOL)allowSearch;
- (BOOL)allowExport;
- (BOOL)allowAddToFavorites;
- (BOOL)allowOpenInWebView;
- (BOOL)allowCopy;
- (BOOL)allowsContextMenuPlugIns;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (struct CGRect)clickableArea;
- (void)populateWithFavItemDataField:(id)arg1;
- (void)populateWithFavItemDataField:(id)arg1 parentDataField:(id)arg2 parentFavItem:(id)arg3;
- (void)populateWithFavItemDataField:(id)arg1 parentDataField:(id)arg2;
- (void)populateWithFavItemDataField:(id)arg1 parentMessage:(id)arg2;
- (void)populateWithFavItemDataField:(id)arg1 parentDataField:(id)arg2 parentMessage:(id)arg3;
- (void)populateWithFavItemDataField:(id)arg1 parentFavItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

