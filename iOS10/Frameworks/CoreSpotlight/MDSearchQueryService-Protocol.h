//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CSSearchQueryContext, NSString;
@protocol MDSearchQueryResultProcessor;

@protocol MDSearchQueryService
- (void)cancelWithCompletionHandler:(void (^)(void))arg1;
- (void)startQuery:(NSString *)arg1 withQueryContext:(CSSearchQueryContext *)arg2 resultProcessor:(id <MDSearchQueryResultProcessor>)arg3 completionHandler:(void (^)(void))arg4;
@end

