//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSLocale, NSString;

@interface SKProductInternal : NSObject
{
    NSString *_contentVersion;
    _Bool _downloadable;
    NSArray *_downloadContentLengths;
    NSString *_localeIdentifier;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    NSString *_productIdentifier;
}

- (void)dealloc;

@end

