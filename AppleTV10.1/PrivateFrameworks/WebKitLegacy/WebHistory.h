//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WebHistoryPrivate;

@interface WebHistory : NSObject
{
    WebHistoryPrivate *_historyPrivate;
}

+ (void)setOptionalSharedHistory:(id)arg1;
+ (id)optionalSharedHistory;
+ (void)_removeAllVisitedLinks;
+ (void)_setVisitedLinkTrackingEnabled:(_Bool)arg1;
@property(nonatomic) int historyAgeInDaysLimit;
@property(nonatomic) int historyItemLimit;
- (_Bool)saveToURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadFromURL:(id)arg1 error:(id *)arg2;
- (id)itemForURL:(id)arg1;
- (_Bool)containsURL:(id)arg1;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *orderedLastVisitedDays;
- (void)addItems:(id)arg1;
- (void)removeAllItems;
- (void)removeItems:(id)arg1;
- (void)_sendNotification:(id)arg1 entries:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)timeZoneChanged:(id)arg1;
- (id)_data;
- (id)allItems;
- (id)_itemForURLString:(id)arg1;
- (void)_addVisitedLinksToVisitedLinkStore:(struct WebVisitedLinkStore *)arg1;
- (void)_visitedURL:(id)arg1 withTitle:(id)arg2 method:(id)arg3 wasFailure:(_Bool)arg4;

@end

