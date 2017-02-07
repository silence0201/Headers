//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIRecording/UIRAccessibilityElement.h>

@class NSString;

@interface UIRAccessibilityProcess : UIRAccessibilityElement
{
    struct __LSASN *_LSASNRef;
    struct ProcessSerialNumber _psn;
    struct __CFDictionary *_applicationInfo;
    NSString *_title;
}

+ (id)processesWithUnixIDs:(id)arg1;
+ (id)processes;
+ (id)processWithName:(id)arg1;
+ (id)processWithUnixID:(int)arg1;
- (id)bundleIdentifier;
- (id)title;
- (id)displayedName;
- (struct ProcessSerialNumber)processSerialNumber;
- (long long)unixID;
- (unsigned long long)uniqueID;
- (void)dealloc;
- (id)initWithPSN:(struct ProcessSerialNumber)arg1;
- (id)initWithLSASNRef:(struct __LSASN *)arg1;

@end
