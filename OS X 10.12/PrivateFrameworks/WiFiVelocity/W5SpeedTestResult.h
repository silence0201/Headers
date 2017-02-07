//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiVelocity/NSCopying-Protocol.h>
#import <WiFiVelocity/NSSecureCoding-Protocol.h>

@class CLLocation, NSError;

@interface W5SpeedTestResult : NSObject <NSCopying, NSSecureCoding>
{
    long long _direction;
    long long _size;
    CLLocation *_location;
    NSError *_error;
    double _speed;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)conformsToProtocol:(id)arg1;

@end
