//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface FIFOQueue : NSObject
{
    NSMutableArray *m_itemsList;
    NSRecursiveLock *m_oLock;
}

- (void).cxx_destruct;
- (id)findInQueue:(id)arg1;
- (void)removeObject:(id)arg1;
- (BOOL)isInQueue:(id)arg1;
- (BOOL)isEmpty;
- (void)cleanup;
- (BOOL)popFirst;
- (id)getFirst;
- (BOOL)pop;
- (id)getTop;
- (BOOL)push:(id)arg1;
- (id)init;

@end

