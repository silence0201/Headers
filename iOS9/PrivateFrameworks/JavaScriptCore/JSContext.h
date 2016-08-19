//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSValue, JSVirtualMachine, JSWrapperMap, NSString;

@interface JSContext : NSObject
{
    JSVirtualMachine *m_virtualMachine;
    struct OpaqueJSContext *m_context;
    JSWrapperMap *m_wrapperMap;
    struct Strong<JSC::JSObject> m_exception;
    CDUnknownBlockType exceptionHandler;
}

+ (id)currentArguments;
+ (id)currentCallee;
+ (id)currentThis;
+ (id)currentContext;
+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext *)arg1;
@property(copy) CDUnknownBlockType exceptionHandler; // @synthesize exceptionHandler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop *)arg1;
- (struct __CFRunLoop *)_debuggerRunLoop;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(_Bool)arg1;
- (_Bool)_includesNativeCallStackWhenReportingExceptions;
- (void)_setRemoteInspectionEnabled:(_Bool)arg1;
- (_Bool)_remoteInspectionEnabled;
@property(copy) NSString *name;
@property(readonly) JSVirtualMachine *virtualMachine;
@property(readonly) JSValue *globalObject;
@property(readonly, retain) JSWrapperMap *wrapperMap;
@property(retain) JSValue *exception;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (id)evaluateScript:(id)arg1;
- (void)dealloc;
- (id)initWithVirtualMachine:(id)arg1;
- (id)init;
- (struct OpaqueJSContext *)JSGlobalContextRef;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)wrapperForJSObject:(struct OpaqueJSValue *)arg1;
- (id)wrapperForObjCObject:(id)arg1;
- (void)endCallbackWithData:(struct CallbackData *)arg1;
- (void)beginCallbackWithData:(struct CallbackData *)arg1 calleeValue:(struct OpaqueJSValue *)arg2 thisValue:(struct OpaqueJSValue *)arg3 argumentCount:(unsigned long long)arg4 arguments:(const struct OpaqueJSValue **)arg5;
- (_Bool)boolFromNotifyException:(struct OpaqueJSValue *)arg1;
- (id)valueFromNotifyException:(struct OpaqueJSValue *)arg1;
- (void)notifyException:(struct OpaqueJSValue *)arg1;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext *)arg1;

@end

