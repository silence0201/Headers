//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FCClusteredHeadlines : NSObject
{
    NSDictionary *_headlinesByTopicID;
    NSArray *_orphanedHeadlines;
    NSArray *_discardedOrphanedHeadlines;
    NSDictionary *_d_headlinesByNonWhitelistedTopicID;
}

@property(copy, nonatomic) NSDictionary *d_headlinesByNonWhitelistedTopicID; // @synthesize d_headlinesByNonWhitelistedTopicID=_d_headlinesByNonWhitelistedTopicID;
@property(copy, nonatomic) NSArray *discardedOrphanedHeadlines; // @synthesize discardedOrphanedHeadlines=_discardedOrphanedHeadlines;
@property(copy, nonatomic) NSArray *orphanedHeadlines; // @synthesize orphanedHeadlines=_orphanedHeadlines;
@property(copy, nonatomic) NSDictionary *headlinesByTopicID; // @synthesize headlinesByTopicID=_headlinesByTopicID;
- (void).cxx_destruct;
- (void)filterClustersToTopicIDs:(id)arg1;
- (void)d_sanityCheckAgainstInputHeadlines:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *d_allHeadlines;
- (id)d_JSONRepresentationWithTagController:(id)arg1 subscribedTagIDs:(id)arg2;

@end
