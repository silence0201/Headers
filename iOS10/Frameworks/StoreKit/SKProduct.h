//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSLocale, NSString;

@interface SKProduct : NSObject
{
    id _internal;
}

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)_setProductIdentifier:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setLocalizedTitle:(id)arg1;
- (void)_setLocalizedDescription:(id)arg1;
@property(copy, nonatomic, getter=_localeIdentifier, setter=_setLocaleIdentifier:) NSString *_localeIdentifier;
- (void)_setDownloadable:(_Bool)arg1;
- (void)_setDownloadContentLengths:(id)arg1;
- (void)_setContentVersion:(id)arg1;
@property(readonly, nonatomic) NSString *productIdentifier;
@property(readonly, nonatomic) NSLocale *priceLocale;
@property(readonly, nonatomic) NSDecimalNumber *price;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;
@property(readonly, nonatomic) NSString *downloadContentVersion;
@property(readonly, nonatomic) NSArray *downloadContentLengths;
- (void)dealloc;
- (id)init;

@end

