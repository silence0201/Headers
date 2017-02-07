//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol WBSURLCompletionDataSource;

@interface WBSURLCompletionDatabase : NSObject
{
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> _fullTextBookmarkMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> _fullTextHistoryMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> _prefixBookmarkMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> _prefixHistoryMatchesCache;
    NSString *_fullTextBookmarkMatchesCacheString;
    NSString *_fullTextHistoryMatchesCacheString;
    NSString *_prefixBookmarkMatchesCacheString;
    NSString *_prefixHistoryMatchesCacheString;
    id <WBSURLCompletionDataSource> _dataSource;
}

+ (void)initializeURLCompletionOnMainThread;
@property(nonatomic) __weak id <WBSURLCompletionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_getUnsortedPrefixMatchesForTypedString:(id)arg1 historyMatches:(Vector_c2be5503 *)arg2 bookmarkMatches:(Vector_c2be5503 *)arg3;
- (void)_getUnsortedFullTextMatchesForTypedString:(id)arg1 historyMatches:(Vector_c2be5503 *)arg2 bookmarkMatches:(Vector_c2be5503 *)arg3 dataTypes:(unsigned int)arg4;
- (void)_getSortedMatchesForTypedString:(id)arg1 topHits:(Vector_c2be5503 *)arg2 historyMatches:(Vector_c2be5503 *)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector_c2be5503 *)arg5 bookmarkLimit:(unsigned long long)arg6 prefixMatchesOnly:(_Bool)arg7;
- (void)_getSortedPrefixMatchesForTypedString:(id)arg1 topHits:(Vector_c2be5503 *)arg2 historyMatches:(Vector_c2be5503 *)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector_c2be5503 *)arg5 bookmarkLimit:(unsigned long long)arg6;
- (void)_getSortedFullTextMatchesForTypedString:(id)arg1 topHits:(Vector_c2be5503 *)arg2 historyMatches:(Vector_c2be5503 *)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector_c2be5503 *)arg5 bookmarkLimit:(unsigned long long)arg6;
- (void)clearMatchesCaches;
- (void)clearHistoryMatchesCache;
- (void)clearBookmarkMatchesCaches;
- (void)clearBookmarkMatchesCachesKeepingEmptyValues:(_Bool)arg1;
- (void)getBestMatchesForTypedString:(id)arg1 topHits:(id *)arg2 matches:(id *)arg3 limit:(unsigned long long)arg4;
- (id)init;

@end
