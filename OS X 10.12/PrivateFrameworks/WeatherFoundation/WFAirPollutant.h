//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSLocale, NSString;

@interface WFAirPollutant : NSObject <NSSecureCoding>
{
    BOOL _isPrimary;
    NSLocale *_locale;
    NSString *_localizedName;
    NSString *_localizedDescription;
    double _concentration;
}

+ (BOOL)supportsSecureCoding;
@property BOOL isPrimary; // @synthesize isPrimary=_isPrimary;
@property double concentration; // @synthesize concentration=_concentration;
@property(copy) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

