//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface JSWrapperMap : NSObject
{
    JSContext *m_context;
    NSMutableDictionary *m_classMap;
    struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>>> m_cachedJSWrappers;
    NSMapTable *m_cachedObjCWrappers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)objcWrapperForJSValueRef:(struct OpaqueJSValue *)arg1;
- (id)jsWrapperForObject:(id)arg1;
- (id)classInfoForClass:(Class)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

