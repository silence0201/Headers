//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/_NSUndoObject.h>

__attribute__((visibility("hidden")))
@interface _NSUndoLightInvocation : _NSUndoObject
{
    SEL _selector;
    id _arg;
}

- (id)description;
- (id)_argument;
- (void)dealloc;
- (void)invoke;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end

