//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVSearchServices/TVSSSearchResult.h>

#import <TVContentPartnerKitUI/TVJSSearchResult-Protocol.h>

@class NSArray, NSString, NSURL, TVSSSearchResultBatch;

@interface TVSSSearchResult (JSAdditions) <TVJSSearchResult>

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *contentItems;
@property(readonly, nonatomic) TVSSSearchResultBatch *initialBatch;
@property(readonly, copy, nonatomic) NSURL *queryURL;
@property(readonly, copy, nonatomic) NSArray *relatedContentQueries;
@property(readonly, nonatomic) _Bool showBrowseResults;
@property(readonly, copy, nonatomic) NSString *title;
@end

