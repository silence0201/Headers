//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIStatusBarPublisher : NSObject
{
    struct __CFMachPort *_machPort;
    int _styleOverrides;
    NSMutableSet *_statusBarItems;
}

- (void).cxx_destruct;
- (void)removeStatusBarItem:(int)arg1;
- (void)addStatusBarItem:(int)arg1;
- (id)statusBarItems;
- (int)removeStyleOverrides:(int)arg1;
- (int)addStyleOverrides:(int)arg1;
- (int)styleOverrides;
- (unsigned int)publisherPort;
- (void)dealloc;
- (id)initWithCFMachPort:(struct __CFMachPort *)arg1;

@end

