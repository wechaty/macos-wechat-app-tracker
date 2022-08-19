//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class MessageData, NSString;

@interface MMTranslateResult : NSObject <PBCoding, NSCopying, WCTColumnCoding>
{
    BOOL isFailed;
    NSString *failedReason;
    NSString *originalText;
    NSString *translatedText;
    NSString *translationService;
    MessageData *_message;
}

+ (id)messageContentForTranslate:(id)arg1;
+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (id)failedResultWithReason:(id)arg1 message:(id)arg2;
+ (id)defaultFailedResultWithMessage:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_translationService;
+ (void)PBArrayAdd_translatedText;
+ (void)PBArrayAdd_originalText;
+ (void)PBArrayAdd_failedReason;
+ (void)PBArrayAdd_isFailed;
- (void).cxx_destruct;
@property(nonatomic) __weak MessageData *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *translationService; // @synthesize translationService;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText;
@property(retain, nonatomic) NSString *originalText; // @synthesize originalText;
@property(retain, nonatomic) NSString *failedReason; // @synthesize failedReason;
@property(nonatomic) BOOL isFailed; // @synthesize isFailed;
- (id)archivedWCTValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

