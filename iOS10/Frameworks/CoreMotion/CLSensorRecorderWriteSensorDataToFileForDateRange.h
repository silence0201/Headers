//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CLSensorRecorderWriteSensorDataToFileForDateRange : NSObject <NSSecureCoding>
{
    int _dataType;
    double _startTime;
    double _endTime;
}

+ (_Bool)supportsSecureCoding;
@property int dataType; // @synthesize dataType=_dataType;
@property double endTime; // @synthesize endTime=_endTime;
@property double startTime; // @synthesize startTime=_startTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

