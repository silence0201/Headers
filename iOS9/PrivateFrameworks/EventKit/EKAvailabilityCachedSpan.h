//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKAvailabilitySpan, NSDate;

__attribute__((visibility("hidden")))
@interface EKAvailabilityCachedSpan : NSObject
{
    NSDate *_creationDate;
    EKAvailabilitySpan *_span;
}

@property(retain, nonatomic) EKAvailabilitySpan *span; // @synthesize span=_span;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)description;
- (void)dealloc;

@end

