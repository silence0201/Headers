//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteFetchRequest, NSMutableDictionary;

@interface _CNAutocompleteUserSessionDisplayedResults : NSObject
{
    BOOL _ignored;
    BOOL _containsDuetResults;
    CNAutocompleteFetchRequest *_request;
    NSMutableDictionary *_datesByBatchIndexes;
}

@property(nonatomic) BOOL containsDuetResults; // @synthesize containsDuetResults=_containsDuetResults;
@property(nonatomic) BOOL ignored; // @synthesize ignored=_ignored;
@property(retain, nonatomic) NSMutableDictionary *datesByBatchIndexes; // @synthesize datesByBatchIndexes=_datesByBatchIndexes;
@property(readonly, nonatomic) CNAutocompleteFetchRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (BOOL)relevantForRequest:(id)arg1;
- (void)didReceiveBatch:(unsigned long long)arg1;
- (id)initWithRequest:(id)arg1;

@end
