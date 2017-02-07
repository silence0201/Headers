//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Install/IFSearch.h>

@class NSArray, NSString;

@interface IFSearchPathMapper : IFSearch
{
    NSString *_tokenizedString;
    NSArray *_tokens;
    NSString *_tokenPrefix;
}

- (id)searchResultsForContext:(id)arg1 inDomainPath:(id)arg2;
- (BOOL)containsUserLocation;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 andIFPkgPathMapping:(id)arg2 andTokenPrefix:(id)arg3;
- (id)initWithXMLElement:(id)arg1;
- (id)_getTokenListFromString:(id)arg1;

@end
