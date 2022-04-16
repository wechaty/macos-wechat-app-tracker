//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface BrandSessionHolder : NSObject <PBCoding>
{
    BOOL m_hasNewArrival;
    unsigned int m_lastTime;
}

+ (id)LoadBrandSessionHolder;
+ (void)initialize;
+ (void)PBArrayAdd_m_lastTime;
+ (void)PBArrayAdd_m_hasNewArrival;
@property(nonatomic) unsigned int m_lastTime; // @synthesize m_lastTime;
@property(nonatomic) BOOL m_hasNewArrival; // @synthesize m_hasNewArrival;
- (BOOL)saveData;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

