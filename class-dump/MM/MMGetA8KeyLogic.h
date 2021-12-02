//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCGIRequester, NSString, NSURL;
@protocol MMGetA8KeyLogicDelegate;

@interface MMGetA8KeyLogic : NSObject
{
    unsigned int _getA8KeyScene;
    MMCGIRequester *_requester;
    int _reason;
    BOOL _useFullUrl;
    id <MMGetA8KeyLogicDelegate> _delegate;
    NSString *_bundleID;
    NSString *_getA8KeyUserName;
    NSURL *_currentUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(nonatomic) BOOL useFullUrl; // @synthesize useFullUrl=_useFullUrl;
@property(retain, nonatomic) NSString *getA8KeyUserName; // @synthesize getA8KeyUserName=_getA8KeyUserName;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) __weak id <MMGetA8KeyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getA8KeyWithURLString:(id)arg1 config:(id)arg2;
- (void)getA8KeyWithURLString:(id)arg1;
- (id)init;

@end

