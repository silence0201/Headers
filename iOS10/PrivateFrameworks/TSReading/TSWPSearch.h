//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSKSearch.h>

@class NSString, TSWPFilteredString, TSWPStorage;

@interface TSWPSearch : TSKSearch
{
    NSString *_searchedString;
    TSWPFilteredString *_filteredString;
    TSWPStorage *_storage;
    struct _NSRange _range;
}

@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, retain, nonatomic) TSWPFilteredString *filteredString; // @synthesize filteredString=_filteredString;
@property(readonly, nonatomic) NSString *searchedString; // @synthesize searchedString=_searchedString;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void)foundHitWithRange:(struct _NSRange)arg1;
- (_Bool)isComplete;
- (void)dealloc;
- (id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3 storage:(id)arg4 range:(struct _NSRange)arg5;

@end
