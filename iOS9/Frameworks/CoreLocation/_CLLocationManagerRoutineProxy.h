//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/CLLocationManagerRoutineClientInterface-Protocol.h>

@class CLLocationManagerRoutine, NSString, NSXPCConnection;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _updating;
    NSXPCConnection *_connection;
    id <CLLocationManagerDelegate> _delegate;
    CLLocationManagerRoutine *_locationManagerRoutine;
}

@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) CLLocationManagerRoutine *locationManagerRoutine; // @synthesize locationManagerRoutine=_locationManagerRoutine;
@property(nonatomic) id <CLLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)createConnection;
- (void)didUpdateLocations:(id)arg1;
- (void)dealloc;
- (id)initWithCLLocationManagerRoutine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
