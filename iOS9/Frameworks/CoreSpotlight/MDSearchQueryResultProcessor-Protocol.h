//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSError;

@protocol MDSearchQueryResultProcessor
- (void)didFailWithError:(NSError *)arg1 completionHandler:(void (^)(void))arg2;
- (void)didFinishWithCompletionHandler:(void (^)(void))arg1;
- (void)didReturnResultsData:(NSData *)arg1 completionHandler:(void (^)(void))arg2;
@end

