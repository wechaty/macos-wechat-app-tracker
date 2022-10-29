//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFavoriteSidebarItem, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MMFavoritesCollectionData : NSObject
{
    BOOL _allowMultipleItemsPreview;
    NSString *_title;
    unsigned long long _layoutStyle;
    MMFavoriteSidebarItem *_siderBarItem;
    NSArray *_sections;
    NSMutableArray *_previewItems;
    NSMutableDictionary *_heightCache;
}

+ (id)keyFroRow:(unsigned long long)arg1 section:(unsigned long long)arg2;
+ (id)dataWithFavoriteItems:(id)arg1 title:(id)arg2 grouping:(unsigned long long)arg3 layoutStyle:(unsigned long long)arg4 siderBarItem:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *heightCache; // @synthesize heightCache=_heightCache;
@property(retain, nonatomic) NSMutableArray *previewItems; // @synthesize previewItems=_previewItems;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) BOOL allowMultipleItemsPreview; // @synthesize allowMultipleItemsPreview=_allowMultipleItemsPreview;
@property(retain, nonatomic) MMFavoriteSidebarItem *siderBarItem; // @synthesize siderBarItem=_siderBarItem;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)clearAllItems;
- (id)getCollectionViewCellIdWithIndexPath:(id)arg1;
- (double)getListRowHeightWithIndexPath:(id)arg1 andWidthConstrain:(double)arg2;
- (double)itemHeightAtIndexPath:(id)arg1;
- (void)cacheHeightForDataWithWidthConstraint:(double)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)dateSectionsWithItems:(id)arg1;
- (id)searchSectionsWithItems:(id)arg1;
- (id)resultStringWithCount:(unsigned long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (double)listStyleItemHeightAtRow:(unsigned long long)arg1;
- (id)itemAtRow:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long numberOfGroups;
@property(readonly, nonatomic) unsigned long long totalItemsCount;
- (id)indexPathForItemLocalID:(id)arg1;
- (id)init;

@end

