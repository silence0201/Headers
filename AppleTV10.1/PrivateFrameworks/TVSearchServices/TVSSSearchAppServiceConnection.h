//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSXPCConnection;

@interface TVSSSearchAppServiceConnection : NSObject
{
    NSXPCConnection *_connection;
    BKSProcessAssertion *_processAssertion;
}

+ (void)connectionWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)invalidate;
- (id)serviceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_init;

@end

