//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject
{
}

@property(nonatomic) double lineNumber;
@property(copy, nonatomic) NSString *url;
@property(copy, nonatomic) NSArray *stackTrace;
@property(nonatomic) long long type;
- (id)initWithType:(long long)arg1;

@end
