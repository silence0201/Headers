//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIDiscreteFeedback.h>

__attribute__((visibility("hidden")))
@interface _UICustomDiscreteFeedback : _UIDiscreteFeedback
{
    unsigned int _systemSoundID;
    unsigned long long _eventType;
}

+ (id)customDiscreteFeedbackWithEventType:(unsigned long long)arg1 systemSoundID:(unsigned int)arg2;
+ (id)type;
@property(readonly, nonatomic) unsigned int systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned int)_effectiveSystemSoundID;
- (unsigned long long)_effectiveEventType;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

