//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarAgent/NSXPCStoreServerDelegate-Protocol.h>

@interface CalAgentXPCServerDelegate : NSObject <NSXPCStoreServerDelegate>
{
    int _recoveryInProcess;
}

- (void)performRecoveryForError:(id)arg1 fromContext:(id)arg2;
- (BOOL)willPerformRecoveryForError:(id)arg1 fromContext:(id)arg2;

@end
