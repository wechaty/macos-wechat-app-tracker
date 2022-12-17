//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMComplexContactSearchResultSort : NSObject
{
    unsigned int _now;
    NSMutableArray *_results;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int now; // @synthesize now=_now;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
- (long long)compareLastMsgCreateTime:(id)arg1 with:(id)arg2;
- (long long)compareFirstChar:(id)arg1 with:(id)arg2;
- (long long)compareRangeStartIndex:(id)arg1 with:(id)arg2;
- (long long)compareCharType:(id)arg1 with:(id)arg2;
- (long long)compareFieldType:(id)arg1 with:(id)arg2;
- (long long)compareKeywordType:(id)arg1 with:(id)arg2;
- (long long)compareDisplayName:(id)arg1 with:(id)arg2;
- (BOOL)_isLessThan60Days:(unsigned int)arg1;
- (long long)compareLastMsgCreateTimeIsMoreThan60Days:(id)arg1 with:(id)arg2;
- (long long)compareContact:(id)arg1 with:(id)arg2;
- (void)sort;
- (id)initWithResults:(id)arg1;

@end

