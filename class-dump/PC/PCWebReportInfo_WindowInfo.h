//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface PCWebReportInfo_WindowInfo : PBGeneratedMessage
{
    unsigned int hasScreenHeight:1;
    unsigned int hasScreenWidth:1;
    unsigned int hasClientHeight:1;
    unsigned int hasClientWidth:1;
    unsigned int hasFocusWindows:1;
    unsigned int hasOpenWindows:1;
    unsigned int hasReddotNotifySwitch:1;
    unsigned int hasFinderEntranceSwitch:1;
    unsigned int screenHeight;
    unsigned int screenWidth;
    unsigned int clientHeight;
    unsigned int clientWidth;
    unsigned long long focusWindows;
    unsigned long long openWindows;
    unsigned long long reddotNotifySwitch;
    unsigned long long finderEntranceSwitch;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetFinderEntranceSwitch:) unsigned long long finderEntranceSwitch; // @synthesize finderEntranceSwitch;
@property(readonly, nonatomic) BOOL hasFinderEntranceSwitch; // @synthesize hasFinderEntranceSwitch;
@property(nonatomic, setter=SetReddotNotifySwitch:) unsigned long long reddotNotifySwitch; // @synthesize reddotNotifySwitch;
@property(readonly, nonatomic) BOOL hasReddotNotifySwitch; // @synthesize hasReddotNotifySwitch;
@property(nonatomic, setter=SetOpenWindows:) unsigned long long openWindows; // @synthesize openWindows;
@property(readonly, nonatomic) BOOL hasOpenWindows; // @synthesize hasOpenWindows;
@property(nonatomic, setter=SetFocusWindows:) unsigned long long focusWindows; // @synthesize focusWindows;
@property(readonly, nonatomic) BOOL hasFocusWindows; // @synthesize hasFocusWindows;
@property(nonatomic, setter=SetClientWidth:) unsigned int clientWidth; // @synthesize clientWidth;
@property(readonly, nonatomic) BOOL hasClientWidth; // @synthesize hasClientWidth;
@property(nonatomic, setter=SetClientHeight:) unsigned int clientHeight; // @synthesize clientHeight;
@property(readonly, nonatomic) BOOL hasClientHeight; // @synthesize hasClientHeight;
@property(nonatomic, setter=SetScreenWidth:) unsigned int screenWidth; // @synthesize screenWidth;
@property(readonly, nonatomic) BOOL hasScreenWidth; // @synthesize hasScreenWidth;
@property(nonatomic, setter=SetScreenHeight:) unsigned int screenHeight; // @synthesize screenHeight;
@property(readonly, nonatomic) BOOL hasScreenHeight; // @synthesize hasScreenHeight;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

