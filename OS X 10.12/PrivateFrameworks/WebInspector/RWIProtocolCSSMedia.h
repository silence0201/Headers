//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSMedia : RWIProtocolJSONObject
{
}

@property(nonatomic) int sourceLine;
@property(copy, nonatomic) NSString *sourceURL;
@property(nonatomic) long long source;
@property(copy, nonatomic) NSString *text;
- (id)initWithText:(id)arg1 source:(long long)arg2;

@end
