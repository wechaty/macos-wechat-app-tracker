//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSArray, NSString;

@interface WAStatePermissionBytes : NSObject <PBCoding, WCTColumnCoding>
{
    NSArray *arrStatePermissionBytes;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_arrStatePermissionBytes;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrStatePermissionBytes; // @synthesize arrStatePermissionBytes;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

