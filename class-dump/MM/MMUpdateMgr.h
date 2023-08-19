//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "SPUUpdaterDelegate-Protocol.h"

@class NSString, SPUUpdater;
@protocol SPUUserDriver;

@interface MMUpdateMgr : MMService <SPUUpdaterDelegate, MMService>
{
    BOOL _isGrayReleaseAvailable;
    NSString *_customXmlUrl;
    double _updateCheckInterval;
    SPUUpdater *_sparkleUpdater;
    id <SPUUserDriver> _userDriver;
    double _lastCheckTime;
}

+ (void)setUserLoginVersionChange:(BOOL)arg1;
+ (void)updateUserLoginVersion;
+ (BOOL)isUserLoginVersionChange;
+ (BOOL)isUseGreaterThanOrEqualsVersion:(id)arg1;
+ (BOOL)isUseVersion:(id)arg1;
+ (long long)getCurrentUserLoginVersion;
+ (id)previousVersionInfo;
+ (BOOL)isVersionChange;
- (void).cxx_destruct;
@property(nonatomic) BOOL isGrayReleaseAvailable; // @synthesize isGrayReleaseAvailable=_isGrayReleaseAvailable;
@property(nonatomic) double lastCheckTime; // @synthesize lastCheckTime=_lastCheckTime;
@property(retain, nonatomic) id <SPUUserDriver> userDriver; // @synthesize userDriver=_userDriver;
@property(retain, nonatomic) SPUUpdater *sparkleUpdater; // @synthesize sparkleUpdater=_sparkleUpdater;
@property(nonatomic) double updateCheckInterval; // @synthesize updateCheckInterval=_updateCheckInterval;
@property(retain, nonatomic) NSString *customXmlUrl; // @synthesize customXmlUrl=_customXmlUrl;
- (void)kvReportWithKey:(int)arg1;
- (void)updater:(id)arg1 scheduledUpdateCheckDidAbortWithError:(id)arg2;
- (void)updater:(id)arg1 didAbortWithError:(id)arg2;
- (void)updater:(id)arg1 didCancelInstallUpdateOnQuit:(id)arg2;
- (void)updaterWillRelaunchApplication:(id)arg1;
- (void)userDidCancelDownload:(id)arg1;
- (void)updater:(id)arg1 failedToDownloadUpdate:(id)arg2 error:(id)arg3;
- (void)updater:(id)arg1 didDownloadUpdate:(id)arg2;
- (void)updater:(id)arg1 willDownloadUpdate:(id)arg2 withRequest:(id)arg3;
- (void)updaterDidNotFindUpdate:(id)arg1 error:(id)arg2;
- (void)updater:(id)arg1 didFindValidUpdate:(id)arg2;
- (BOOL)updater:(id)arg1 shouldProceedWithUpdate:(id)arg2 updateCheck:(long long)arg3 error:(id *)arg4;
- (void)updater:(id)arg1 didFinishLoadingAppcast:(id)arg2;
- (BOOL)updaterShouldPromptForPermissionToCheckForUpdates:(id)arg1;
- (id)feedURLStringForUpdater:(id)arg1;
- (BOOL)useForceUpdateVersion;
- (BOOL)validateMenuItem:(id)arg1;
- (void)startBackgroundUpdatesCheck:(BOOL)arg1;
- (void)checkForUpdates:(id)arg1;
- (BOOL)isSameMainVersion:(id)arg1;
- (long long)getCurrentUserLoginVersion;
- (void)saveUserLoginVersion;
- (void)saveToDiskWithVersion:(id)arg1;
- (void)saveCurrentVersionToDisk;
- (id)checkVersionFilePath;
- (id)checkVersionFromDisk;
- (BOOL)shouldShowWhatsNew;
- (void)loadConfig;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

