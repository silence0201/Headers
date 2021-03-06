//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimeZone, NSUUID;

@interface OSActivityEvent : NSObject
{
    _Bool _persisted;
    int _processID;
    unsigned long long _processUniqueID;
    NSUUID *_processImageUUID;
    NSString *_processImagePath;
    unsigned long long _eventType;
    unsigned long long _parentActivityID;
    unsigned long long _activityID;
    unsigned long long _traceID;
    unsigned long long _threadID;
    unsigned long long _machTimestamp;
    NSDate *_timestamp;
    NSTimeZone *_timezone;
    NSUUID *_senderImageUUID;
    NSString *_senderImagePath;
    NSString *_eventMessage;
    struct timezone _tz;
    NSString *_timezoneName;
    struct timeval _timeGMT;
}

+ (id)activityEventFromStreamEntry:(struct os_activity_stream_entry_s *)arg1;
@property(retain) NSString *timezoneName; // @synthesize timezoneName=_timezoneName;
@property(readonly) struct timezone tz; // @synthesize tz=_tz;
@property(readonly) struct timeval timeGMT; // @synthesize timeGMT=_timeGMT;
@property(readonly) _Bool persisted; // @synthesize persisted=_persisted;
@property(copy) NSString *eventMessage; // @synthesize eventMessage=_eventMessage;
@property(readonly, copy) NSString *senderImagePath; // @synthesize senderImagePath=_senderImagePath;
@property(readonly, copy) NSUUID *senderImageUUID; // @synthesize senderImageUUID=_senderImageUUID;
@property(readonly, copy) NSTimeZone *timezone; // @synthesize timezone=_timezone;
@property(readonly, copy) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) unsigned long long machTimestamp; // @synthesize machTimestamp=_machTimestamp;
@property(readonly) unsigned long long threadID; // @synthesize threadID=_threadID;
@property(readonly) unsigned long long traceID; // @synthesize traceID=_traceID;
@property(readonly) unsigned long long activityID; // @synthesize activityID=_activityID;
@property(readonly) unsigned long long parentActivityID; // @synthesize parentActivityID=_parentActivityID;
@property(readonly) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(readonly, copy) NSString *processImagePath; // @synthesize processImagePath=_processImagePath;
@property(readonly, copy) NSUUID *processImageUUID; // @synthesize processImageUUID=_processImageUUID;
@property(readonly) unsigned long long processUniqueID; // @synthesize processUniqueID=_processUniqueID;
@property(readonly) int processID; // @synthesize processID=_processID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *sender;
@property(readonly, copy) NSString *process;
- (void)_addProperties:(id)arg1;
- (void)_initWithProperties:(id)arg1;
- (id)properties;
- (void)fillFromStreamEntry:(struct os_activity_stream_entry_s *)arg1 eventMessage:(const char *)arg2 persisted:(_Bool)arg3;
- (id)timeZone;

@end

