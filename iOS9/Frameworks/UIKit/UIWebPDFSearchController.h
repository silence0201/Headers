//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIWebPDFSearchOperationDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, UIPDFDocument;
@protocol UIWebPDFSearchControllerDelegate;

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate>
{
    unsigned long long _resultIndexWhenLimitHit;
    _Bool _notifiedThatSearchBegin;
    unsigned long long _pageIndexWhenLimitHit;
    NSOperationQueue *_searchQueue;
    NSMutableArray *_results;
    NSString *_searchString;
    UIPDFDocument *_documentToSearch;
    NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;
    unsigned long long startingPageIndex;
    double documentScale;
    unsigned long long resultLimit;
}

@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) unsigned long long resultLimit; // @synthesize resultLimit;
@property(nonatomic) double documentScale; // @synthesize documentScale;
@property(nonatomic) unsigned long long startingPageIndex; // @synthesize startingPageIndex;
@property(nonatomic) NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate; // @synthesize searchDelegate;
@property(retain, nonatomic) UIPDFDocument *documentToSearch; // @synthesize documentToSearch=_documentToSearch;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (void)searchDidFinish:(id)arg1;
- (void)searchLimitHit:(id)arg1;
- (void)searchWasCancelled:(id)arg1;
- (void)searchDidTimeOut:(id)arg1;
- (void)searchDidBegin:(id)arg1;
- (void)resume;
- (void)pause;
- (void)cancel;
- (void)_clearSearchQueue;
- (void)search:(id)arg1;
- (unsigned long long)_actualStartingPageIndex;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) _Bool paused;
@property(readonly, nonatomic) _Bool searching;

@end

