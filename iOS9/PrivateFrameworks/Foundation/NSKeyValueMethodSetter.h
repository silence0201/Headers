//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSKeyValueSetter.h>

__attribute__((visibility("hidden")))
@interface NSKeyValueMethodSetter : NSKeyValueSetter
{
    struct objc_method *_method;
}

- (struct objc_method *)method;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 method:(struct objc_method *)arg3;

@end

