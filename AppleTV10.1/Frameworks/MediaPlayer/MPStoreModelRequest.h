//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

@class MPStoreUserEnvironment;

@interface MPStoreModelRequest : MPModelRequest
{
    _Bool _didSetTimeoutInterval;
    MPStoreUserEnvironment *_userEnvironment;
    double _timeoutInterval;
}

@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(copy, nonatomic) MPStoreUserEnvironment *userEnvironment; // @synthesize userEnvironment=_userEnvironment;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
