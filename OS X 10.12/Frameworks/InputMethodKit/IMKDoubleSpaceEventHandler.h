//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMKDoubleSpaceEventHandler : NSObject
{
    NSMutableArray *_eventArray;
}

+ (id)sharedHandler;
@property(retain, nonatomic) NSMutableArray *eventArray; // @synthesize eventArray=_eventArray;
- (void)resetState;
- (BOOL)shouldDoSpecialHandling;
- (BOOL)handleEvent:(id)arg1;
- (id)init;
- (void)dealloc;

@end
