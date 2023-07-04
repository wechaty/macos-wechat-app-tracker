//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface WCDBManager : MMService <MMService>
{
    BOOL _stopCheckpoint;
    int _cpScene;
    int _delayTime;
    int _checkInterval;
    NSMutableDictionary *_dbInfoDic;
    NSRecursiveLock *_dbLock;
}

+ (unsigned long long)walsizeThreshForManualCheckpoint:(unsigned int)arg1;
+ (int)p_cpMode:(id)arg1 forScene:(int)arg2;
+ (id)p_cpkey:(id)arg1 forScene:(int)arg2;
- (void).cxx_destruct;
@property(nonatomic) int checkInterval; // @synthesize checkInterval=_checkInterval;
@property(nonatomic) int delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) BOOL stopCheckpoint; // @synthesize stopCheckpoint=_stopCheckpoint;
@property(nonatomic) int cpScene; // @synthesize cpScene=_cpScene;
@property(retain, nonatomic) NSRecursiveLock *dbLock; // @synthesize dbLock=_dbLock;
@property(retain, nonatomic) NSMutableDictionary *dbInfoDic; // @synthesize dbInfoDic=_dbInfoDic;
- (void)manualCheckpointForTagList:(id)arg1;
- (void)p_handleCheckPoint:(id)arg1 onScene:(int)arg2;
- (BOOL)p_shouldCheckPoint:(id)arg1 onScene:(int)arg2;
- (void)doCheckpoint;
- (void)checkPointIfNeeded;
- (void)onServiceEnterBackground;
- (void)onServiceWillSleep;
- (void)commonClear;
- (void)onServiceEnterForeground;
- (void)onServiceDidWake;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)genDBCpInfo;
- (id)getDbInfoDic;
- (void)registerWCDBCheckpointInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

