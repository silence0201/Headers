//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SMReportNote : NSObject
{
    NSString *note;
    unsigned long long count;
    NSMutableArray *datesSeen;
}

@property(retain) NSMutableArray *datesSeen; // @synthesize datesSeen;
@property unsigned long long count; // @synthesize count;
@property(readonly) NSString *note; // @synthesize note;
- (void).cxx_destruct;
- (id)description;
- (void)increment;
- (id)initWithMessage:(id)arg1;

@end

