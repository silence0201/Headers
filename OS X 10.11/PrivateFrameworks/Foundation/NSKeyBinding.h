//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSKeyBinding : NSObject
{
    Class _class;
    NSString *_key;
    void *_funcP;
}

+ (void)suppressCapitalizedKeyWarning;
- (void)dealloc;
- (void)setKey:(id)arg1;
- (id)key;
- (Class)targetClass;

@end
