//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (PKDateAdditions)
+ (id)dateForYesterday;
+ (id)dateForTomorrow;
+ (id)dateWithDaysBeforeNow:(unsigned long long)arg1;
+ (id)dateWithDaysFromNow:(unsigned long long)arg1;
- (_Bool)isYesterday;
- (_Bool)isTomorrow;
- (_Bool)isToday;
- (_Bool)isDateEqualToDateIgnoringTime:(id)arg1;
@end
