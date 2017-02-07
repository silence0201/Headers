//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/OccurrenceCacheDataSource.h>

@class EKOccurrenceCacheSearch, NSMutableArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource
{
    EKOccurrenceCacheSearch *_search;
    NSMutableArray *_processingCachedDays;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _resultsLock;
}

- (void).cxx_destruct;
- (id)_cachedDays;
- (void)stopSearching;
- (void)searchWithTerm:(id)arg1;
- (void)_setCachedDaysAndNotify:(id)arg1;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (void)invalidateCachedOccurrences;
- (_Bool)supportsFakeTodaySection;
- (_Bool)supportsInvitations;
- (void)dealloc;
- (void)invalidate;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;

@end

