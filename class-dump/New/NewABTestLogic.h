//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMService-Protocol.h"

@class MMLocalKvConfigDBTable, NSString, NewABTestXMLParser;

@interface NewABTestLogic : MMService <IMessageExt, AccountServiceExt, MMService>
{
    BOOL _isUpdatingABTestFromSvr;
    unsigned int _uiNextUpdateTime;
    unsigned int _uiClientLastUpdateTime;
    MMLocalKvConfigDBTable *_config;
    NewABTestXMLParser *_xmlParser;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isUpdatingABTestFromSvr; // @synthesize isUpdatingABTestFromSvr=_isUpdatingABTestFromSvr;
@property(retain, nonatomic) NewABTestXMLParser *xmlParser; // @synthesize xmlParser=_xmlParser;
@property(nonatomic) unsigned int uiClientLastUpdateTime; // @synthesize uiClientLastUpdateTime=_uiClientLastUpdateTime;
@property(nonatomic) unsigned int uiNextUpdateTime; // @synthesize uiNextUpdateTime=_uiNextUpdateTime;
@property(retain, nonatomic) MMLocalKvConfigDBTable *config; // @synthesize config=_config;
- (BOOL)saveNewClientLastUpdateTimeForCache:(unsigned int)arg1;
- (unsigned int)getClientLastUpdateTimeFromCache;
- (void)updateClientLastUpdateTime:(unsigned int)arg1;
- (BOOL)saveLastUpdateTimeForCache:(unsigned int)arg1;
- (unsigned int)getLastUpdateTimeFromCache;
- (BOOL)saveNewUpdateTimeForCache:(unsigned int)arg1;
- (unsigned int)getNextUpdateTimeFromCache;
- (void)updateNextUpdateTime:(unsigned int)arg1;
- (void)onGetNewXmlMsg:(id)arg1 type:(id)arg2 msgData:(id)arg3;
- (void)FFAddRecvFavZZ:(int)arg1;
- (void)getABTestFromSvr;
- (void)tryUpdateAbTestFromSvr;
- (void)forceGetAbTestFromSvr;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

