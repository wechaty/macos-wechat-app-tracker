//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SendPatRequest, SendPatWrap;

@interface SendPatCGI : NSObject
{
    BOOL _isRetrievePatSuffix;
    SendPatWrap *_sendPatWrap;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    SendPatRequest *_request;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isRetrievePatSuffix; // @synthesize isRetrievePatSuffix=_isRetrievePatSuffix;
@property(retain, nonatomic) SendPatRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) SendPatWrap *sendPatWrap; // @synthesize sendPatWrap=_sendPatWrap;
- (void)doSendRequest;
- (void)setSendPatRequest:(id)arg1;
- (void)retrievePatSuffixWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)sendPatWithSuccessBlock:(CDUnknownBlockType)arg1 andFailureBlock:(CDUnknownBlockType)arg2;

@end

