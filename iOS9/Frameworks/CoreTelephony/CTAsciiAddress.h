//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreTelephony/CTMessageAddress-Protocol.h>
#import <CoreTelephony/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTAsciiAddress : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_address;
}

+ (id)asciiAddressWithString:(id)arg1;
@property(readonly) NSString *address; // @synthesize address=_address;
- (void)dealloc;
- (id)canonicalFormat;
- (id)encodedString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddress:(id)arg1;

@end

