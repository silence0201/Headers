//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EKRecurrenceSet : NSObject
{
    NSString *_recurrenceSetID;
    NSArray *_series;
}

+ (id)recurrenceSetForItem:(id)arg1;
@property(retain) NSArray *series; // @synthesize series=_series;
@property(retain) NSString *recurrenceSetID; // @synthesize recurrenceSetID=_recurrenceSetID;
- (void).cxx_destruct;
- (id)description;

@end

