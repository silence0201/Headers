//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSUserDefaults : NSObject
{
    id _kvo_;
    struct __CFString *_identifier_;
    struct __CFString *_container_;
    void *_reserved[2];
}

- (BOOL)_observingCFPreferences;
- (void)_setContainer:(struct __CFURL *)arg1;
- (struct __CFString *)_container;
- (void)_setIdentifier:(struct __CFString *)arg1;
- (struct __CFString *)_identifier;

@end
