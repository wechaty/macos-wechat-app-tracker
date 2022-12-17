//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchResultItem.h"

@class NSString;

@interface MMSearchResultHeaderItem : MMSearchResultItem
{
    BOOL _isExpand;
    NSString *_title;
    unsigned long long _itemCount;
    unsigned long long _resultType;
}

+ (id)allItemWithCount:(unsigned long long)arg1 resultType:(unsigned long long)arg2 isExpand:(BOOL)arg3;
+ (id)headerItemWithTitle:(id)arg1 itemCount:(unsigned long long)arg2 resultType:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) BOOL isExpand; // @synthesize isExpand=_isExpand;
@property(nonatomic) unsigned long long resultType; // @synthesize resultType=_resultType;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)identifier;

@end

