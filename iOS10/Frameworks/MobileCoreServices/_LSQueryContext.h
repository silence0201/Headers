//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _LSQueryContext : NSObject
{
}

+ (id)defaultContext;
- (void)clearCaches;
- (void)resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 error:(id *)arg3;
- (void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_init;
- (void)_resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 synchronously:(_Bool)arg3 XPCConnection:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

