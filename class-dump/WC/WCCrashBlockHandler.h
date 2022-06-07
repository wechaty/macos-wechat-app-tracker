//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCCrashBlockMonitorDelegate-Protocol.h"

@class NSString;

@interface WCCrashBlockHandler : NSObject <WCCrashBlockMonitorDelegate>
{
    BOOL _canSampleFlag;
}

@property(nonatomic) BOOL canSampleFlag; // @synthesize canSampleFlag=_canSampleFlag;
- (id)onCrashBlockMonitorGetCustomUserInfoForDumpType:(unsigned long long)arg1;
- (void)onCrashBlockMonitorIntervalCPUTooHigh;
- (void)onCrashBlockMonitorCurrentCPUTooHigh;
- (void)onCrashBlockMonitorDumpType:(unsigned long long)arg1 filter:(unsigned long long)arg2 blockTime:(unsigned long long)arg3;
- (void)onCrashBlockMonitorGetDumpFile:(id)arg1 withDumpType:(unsigned long long)arg2;
- (void)onCrashBlockMonitorRunloopHangDetected:(unsigned long long)arg1;
- (void)onCrashBlockMonitorBeginDump:(unsigned long long)arg1 blockTime:(unsigned long long)arg2 runloopThreshold:(unsigned int)arg3;
- (id)getCrashBlockPluginConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

