//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABCountry : NSObject
{
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_phoneticCountryName;
}

@property(copy, nonatomic) NSString *phoneticCountryName; // @synthesize phoneticCountryName=_phoneticCountryName;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;

@end
