//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MMImageEditThemeManager : NSObject
{
    NSDictionary *jsonDic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)objectWithKey:(id)arg1;
- (BOOL)themedEnableWithKey:(id)arg1;
- (float)themedWeightWithKey:(id)arg1;
- (struct CGSize)themedSizeWithKey:(id)arg1;
- (struct CGSize)themedMarginWithKey:(id)arg1;
- (struct CGRect)themedFrameWithKey:(id)arg1;
- (id)themedImageWithKey:(id)arg1;
- (id)themedFontWithKey:(id)arg1;
- (id)themedColorWithKey:(id)arg1;
- (id)init;

@end

