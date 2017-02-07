//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ATVLegacyContentKit/TVLJSObject-Protocol.h>

@protocol OS_dispatch_queue;

@interface ATVJSCallback : NSObject <TVLJSObject>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _successBlock;
    unsigned long long _successArgCount;
    CDUnknownBlockType _failureBlock;
    struct OpaqueJSValue *_jsObjectRef;
    CDUnknownBlockType _parameterParsingBlock;
}

@property(copy, nonatomic) CDUnknownBlockType parameterParsingBlock; // @synthesize parameterParsingBlock=_parameterParsingBlock;
@property(readonly, nonatomic) struct OpaqueJSValue *jsObjectRef; // @synthesize jsObjectRef=_jsObjectRef;
- (void)_jsFinalize;
- (void)_callbackFailureWithContext:(struct OpaqueJSContext *)arg1 argumentCount:(unsigned long long)arg2 arguments:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (void)_callbackSuccessWithContext:(struct OpaqueJSContext *)arg1 argumentCount:(unsigned long long)arg2 arguments:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (void)dealloc;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 callbackQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 successArgCount:(unsigned long long)arg4 failureBlock:(CDUnknownBlockType)arg5;

@end
