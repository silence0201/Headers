//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/AMRunnerInterface-Protocol.h>
#import <Automator/NSConnectionDelegate-Protocol.h>

@class NSConnection, NSDictionary, NSString, NSTask;

@interface AMRunnerInterface : NSObject <NSConnectionDelegate, AMRunnerInterface>
{
    NSDictionary *_propertyList;
    NSConnection *_connection;
    NSTask *_task;
    struct AuthorizationOpaqueRef *_authorizationRef;
    id _delegate;
    id _input;
    NSString *_path;
    struct __AMRunnerInterfaceFlags {
        unsigned int shouldDisplayProgressInMenuBar:1;
        unsigned int reserved:31;
    } _flags;
    struct __AMRunnerInterfaceDelegateRespondTo {
        unsigned int delegateUUID:1;
        unsigned int runnerDied:1;
        unsigned int setRunner:1;
        unsigned int nullifyRunner:1;
        unsigned int stopWithError:1;
        unsigned int workflow:1;
        unsigned int reserved:25;
    } _delegateRespondTo;
}

- (void)invalidateConnection;
- (void)taskDied:(id)arg1;
- (void)connectionDied:(id)arg1;
- (BOOL)connection:(id)arg1 shouldMakeNewConnection:(id)arg2;
- (void)launchRunnerWithAuthorization:(BOOL)arg1;
- (BOOL)authenticate;
- (BOOL)askForPassword;
- (BOOL)isAuthenticated;
- (BOOL)authWithFlags:(unsigned int)arg1;
- (oneway void)workflowDidError:(bycopy id)arg1;
- (BOOL)runWorkflowWithPropertyList:(id)arg1 fromPath:(id)arg2 withInput:(id)arg3 error:(id *)arg4;
- (BOOL)runWorkflowAtPath:(id)arg1 withInput:(id)arg2 error:(id *)arg3;
- (BOOL)checkDocumentVersion:(id)arg1;
- (void)setShouldDisplayProgressInMenuBar:(BOOL)arg1;
- (BOOL)shouldDisplayProgressInMenuBar;
- (oneway void)setPath:(id)arg1;
- (bycopy id)path;
- (bycopy id)archivedInputData;
- (oneway void)setInput:(id)arg1;
- (bycopy id)input;
- (void)setTask:(id)arg1;
- (id)task;
- (oneway void)setRunner:(id)arg1;
- (id)UUID;
- (oneway void)setPropertyList:(id)arg1;
- (id)propertyList;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
