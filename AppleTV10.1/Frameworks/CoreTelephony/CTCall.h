//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CTCall : NSObject
{
    NSString *_callState;
    NSString *_callID;
}

@property(readonly, copy, nonatomic) NSString *callID; // @synthesize callID=_callID;
@property(readonly, copy, nonatomic) NSString *callState; // @synthesize callState=_callState;

@end

