//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServerFoundation/XSLogParser-Protocol.h>

@class NSString, XSLogMessageSet;

@interface XSLogFileParser : NSObject <XSLogParser>
{
    XSLogMessageSet *_messageSet;
}

+ (id)messageWithLogEntry:(id)arg1;
+ (unsigned long long)messageIdentifierForLogEntry:(id)arg1;
+ (unsigned long long)levelForMessageString:(id)arg1;
+ (BOOL)messageStringIsDebug:(id)arg1;
+ (BOOL)messageStringIsWarning:(id)arg1;
+ (BOOL)messageStringIsError:(id)arg1;
+ (id)dateWithString:(id)arg1;
+ (id)monthStrings;
@property XSLogMessageSet *messageSet; // @synthesize messageSet=_messageSet;
- (id)messageSetForMessagesBetween:(id)arg1 and:(id)arg2 limit:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
