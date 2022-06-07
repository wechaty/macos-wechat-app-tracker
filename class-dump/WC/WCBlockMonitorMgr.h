//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCPowerConsumeStackCollectorDelegate-Protocol.h"

@class NSApplicationEvent, NSString, NSThread, WCBlockMonitorConfigHandler, WCCPUHandler, WCFilterStackHandler, WCMainThreadHandler, WCPowerConsumeStackCollector;
@protocol OS_dispatch_queue, WCBlockMonitorDelegate;

@interface WCBlockMonitorMgr : NSObject <WCPowerConsumeStackCollectorDelegate>
{
    NSThread *m_monitorThread;
    BOOL m_bStop;
    unsigned long long m_nIntervalTime;
    unsigned long long m_nLastTimeInterval;
    struct vector<unsigned long, std::allocator<unsigned long>> m_vecLastMainThreadCallStack;
    unsigned long long m_lastMainThreadStackCount;
    unsigned long long m_blockDiffTime;
    unsigned int m_firstSleepTime;
    NSString *m_potenHandledLagFile;
    WCMainThreadHandler *m_pointMainThreadHandler;
    struct __CFRunLoopObserver *m_runLoopBeginObserver;
    struct __CFRunLoopObserver *m_runLoopEndObserver;
    struct __CFRunLoopObserver *m_initializationBeginRunloopObserver;
    struct __CFRunLoopObserver *m_initializationEndRunloopObserver;
    NSObject<OS_dispatch_queue> *m_asyncDumpQueue;
    WCCPUHandler *m_cpuHandler;
    BOOL m_bTrackCPU;
    WCFilterStackHandler *m_stackHandler;
    WCPowerConsumeStackCollector *m_powerConsumeStackCollector;
    unsigned int m_printMemoryTickTok;
    unsigned int m_printCPUFrequencyTickTok;
    BOOL m_suspendAllThreads;
    BOOL m_enableSnapshot;
    struct timeval m_recordStackTime;
    id <WCBlockMonitorDelegate> _delegate;
    WCBlockMonitorConfigHandler *_monitorConfigHandler;
    NSApplicationEvent *_eventHandler;
}

+ (unsigned long long)diffTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
+ (void)checkRunloopDuration;
+ (void)signalEventEnd;
+ (void)signalEventStart;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSApplicationEvent *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) WCBlockMonitorConfigHandler *monitorConfigHandler; // @synthesize monitorConfigHandler=_monitorConfigHandler;
@property(nonatomic) __weak id <WCBlockMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)powerConsumeStackCollectorConclude:(id)arg1;
- (void)generateLiveReportWithDumpType:(unsigned long long)arg1 withReason:(id)arg2 selfDefinedPath:(BOOL)arg3;
- (void)setShouldSuspendAllThreads:(BOOL)arg1;
- (BOOL)setRunloopThreshold:(unsigned int)arg1 isFirstTime:(BOOL)arg2;
- (BOOL)setRunloopThreshold:(unsigned int)arg1;
- (BOOL)recoverRunloopThreshold;
- (BOOL)lowerRunloopThreshold;
- (BOOL)isBackgroundCPUTooSmall;
- (void)stopTrackCPU;
- (void)startTrackCPU;
- (void)clearDumpInBackgroundLaunch;
- (void)clearLaunchLagRecord;
- (id)dumpFileWithType:(unsigned long long)arg1;
- (void)removeRunLoopObserver;
- (void)addRunLoopObserver;
- (void)resetStatus;
- (unsigned long long)needFilter;
- (unsigned long long)check;
- (void)recordCurrentStack;
- (void)threadProc;
- (void)addMonitorThread;
- (void)setPerStackInterval:(unsigned int)arg1;
- (void)setCPUUsagePercent:(float)arg1;
- (id)getUserInfoForCurrentDumpForDumpType:(unsigned long long)arg1;
- (void)stop;
- (void)start;
- (void)freeCpuHighThreadArray;
- (void)dealloc;
- (id)init;
- (void)resetConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

