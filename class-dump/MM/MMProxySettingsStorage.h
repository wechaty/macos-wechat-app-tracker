//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMProxySettingsStorage : NSObject
{
    NSMutableDictionary *_proxyInfo;
    struct ProxyInfo _marsProxyInfo;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct ProxyInfo marsProxyInfo; // @synthesize marsProxyInfo=_marsProxyInfo;
@property(retain, nonatomic) NSMutableDictionary *proxyInfo; // @synthesize proxyInfo=_proxyInfo;
- (void)storeProxyInfoWithType:(int)arg1 Host:(id)arg2 IP:(id)arg3 port:(id)arg4 username:(id)arg5 password:(id)arg6;
- (void)closeProxySettings;
- (unsigned char)testProxy:(void *)arg1 isDirect:(unsigned char)arg2;
- (void)setProxyInfoWithType:(int)arg1 Host:(id)arg2 IP:(id)arg3 port:(id)arg4 username:(id)arg5 password:(id)arg6;
- (struct ProxyInfo)setupMarsProxyInfo;
- (unsigned char)isUsingProxy;
- (void)initProxy;
- (struct ProxyInfo)genMarsProxyInfo;
- (id)init;

@end

