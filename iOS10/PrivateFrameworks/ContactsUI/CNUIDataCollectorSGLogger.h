//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol CNScheduler;

__attribute__((visibility("hidden")))
@interface CNUIDataCollectorSGLogger : NSObject
{
    CDUnknownBlockType _serviceProvider;
    id <CNScheduler> _workQueue;
}

+ (id)loggerWithSGSuggestionsServiceProvider:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2;
@property(retain, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType serviceProvider; // @synthesize serviceProvider=_serviceProvider;
- (void).cxx_destruct;
- (void)logSearchResultsIncludedPureSuggestionsWithBundleID:(id)arg1;
- (void)logContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)performBlockWithService:(CDUnknownBlockType)arg1;
- (id)initWithSuggestionsServiceProvider:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2;

@end
