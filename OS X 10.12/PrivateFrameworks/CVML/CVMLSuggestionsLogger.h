//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CVML/CVMLClusteringLogger.h>

__attribute__((visibility("hidden")))
@interface CVMLSuggestionsLogger : CVMLClusteringLogger
{
}

- (void)logString:(id)arg1;
- (void)logFinalSuggestionsList:(id)arg1;
- (void)logConnectedGroups:(id)arg1;
- (void)logFilteredByInputQuerySuggestons:(id)arg1;
- (void)logAllSuggestons:(id)arg1;
- (void)logSuggestons:(id)arg1 description:(id)arg2;
- (void)logInputFaceIdsWithFlags:(id)arg1;
- (id)initWithOptions:(id)arg1 logEnabled:(BOOL)arg2;

@end

