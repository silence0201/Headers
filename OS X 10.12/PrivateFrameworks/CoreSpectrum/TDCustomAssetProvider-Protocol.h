//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpectrum/NSObject-Protocol.h>

@class CoreThemeDocument, NSObject, NSString, TDCustomArtworkRenditionSpec;
@protocol TDCustomAssetSource;

@protocol TDCustomAssetProvider <NSObject>
- (NSObject<TDCustomAssetSource> *)document:(CoreThemeDocument *)arg1 willProvideAssetForCustomRendition:(TDCustomArtworkRenditionSpec *)arg2 withReferenceData:(NSString *)arg3;
@end
