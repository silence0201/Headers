//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VCAudioManagerClient : NSObject
{
    NSNumber *_sessionReference;
    int _inferredOperatingMode;
    int _clientPid;
    BOOL _started;
    BOOL _didStartAUIO;
}

@property(nonatomic) int clientPid; // @synthesize clientPid=_clientPid;
@property(nonatomic) BOOL started; // @synthesize started=_started;
@property(readonly, nonatomic) NSNumber *sessionReference; // @synthesize sessionReference=_sessionReference;
@property(nonatomic) int inferredOperatingMode; // @synthesize inferredOperatingMode=_inferredOperatingMode;
- (void)dealloc;
- (id)initWithClientPid:(int)arg1;

@end

