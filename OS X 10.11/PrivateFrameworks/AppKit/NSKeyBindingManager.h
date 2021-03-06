//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSKeyBindingAtom, NSSortedArray;

@interface NSKeyBindingManager : NSObject
{
    NSDictionary *_dict;
    NSSortedArray *_atomArray;
    NSKeyBindingAtom *_argBinding;
    NSKeyBindingAtom *_quoteBinding;
    NSKeyBindingManager *_nextManager;
    void *_reservedKeyBindingMgr1;
}

+ (id)_keyBindingMonitor;
+ (void)_setKeyBindingMonitor:(id)arg1;
+ (void)setRepeatCountForNextCommand:(long long)arg1;
+ (long long)repeatCount;
+ (void)cancel;
+ (void)interpretKeyEvents:(id)arg1 sender:(id)arg2;
+ (id)sharedKeyBindingManager;
+ (void)initialize;
+ (id)draggingKeyBindingManager;
+ (id)inputKeyBindingManager;
+ (id)keyBindingManagerForClient:(id)arg1;
- (void)_monitorKeyBinding:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)_setNextKeyBindingManager:(id)arg1;
- (void)setQuoteBinding:(id)arg1;
- (void)setArgumentBinding:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)dictionary;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (void)interpretKeyEvents:(id)arg1 forClient:(id)arg2;
- (void)flushTextForClient:(id)arg1;
- (void)interpretEventAsText:(id)arg1 forClient:(id)arg2;
- (BOOL)interpretEventAsCommand:(id)arg1 forClient:(id)arg2;

@end

