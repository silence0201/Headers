//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SimDevice;

@interface OSLogDevice : NSObject
{
    long long _devType;
    void *_mobDev;
    SimDevice *_simDev;
    NSString *_uid;
}

@property(retain) NSString *uid; // @synthesize uid=_uid;
@property(retain) SimDevice *simDev; // @synthesize simDev=_simDev;
@property void *mobDev; // @synthesize mobDev=_mobDev;
@property long long devType; // @synthesize devType=_devType;
- (void).cxx_destruct;
- (id)initWithSimualatedDevice:(id)arg1;
- (id)initWithMobileDevice:(void *)arg1 andID:(id)arg2;
- (id)description;
- (id)init;

@end
