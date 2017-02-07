//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSNumberFormatter;
@protocol NSLocking;

@interface TVSStoreDataConverter : NSObject
{
    id <NSLocking> _lock;
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
}

+ (id)adamIDForNumber:(id)arg1;
+ (id)releaseDateFromString:(id)arg1;
+ (id)sharedFormatter;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) id <NSLocking> lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (id)init;

@end
