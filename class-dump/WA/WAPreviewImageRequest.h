//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseRequest.h"

@class NSArray, NSString;

@interface WAPreviewImageRequest : WABaseRequest
{
    NSString *_currentUrl;
    NSArray *_urls;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

