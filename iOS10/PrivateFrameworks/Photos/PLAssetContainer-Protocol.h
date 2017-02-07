//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>
#import <Photos/PLDiagnosticsProvider-Protocol.h>

@class NSArray, NSDate, NSOrderedSet, NSString, PLManagedAsset;

@protocol PLAssetContainer <NSObject, PLDiagnosticsProvider>
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *uuid;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;

@optional
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly, retain, nonatomic) NSDate *startDate;
@end

