//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/_LSQueryContext.h>

#import <MobileCoreServices/_LSQueryResolving-Protocol.h>

@class _LSLocalContext, _LSQueryCache;

__attribute__((visibility("hidden")))
@interface _LSXPCContext : _LSQueryContext <_LSQueryResolving>
{
    _LSQueryCache *_queryCache;
    _LSLocalContext *_localContext;
}

- (void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_queryCache;
- (void)_resolveQueries:(id)arg1 synchronously:(_Bool)arg2 XPCConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)resolveWhatWeCanLocallyWithQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)_init;

@end

