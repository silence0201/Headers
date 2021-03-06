//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdate/NSSecureCoding-Protocol.h>

@class NSString;

@interface SUAdminUpdate : NSObject <NSSecureCoding>
{
    BOOL _useDoItLaterWhenAppropriate;
    NSString *_productKey;
    long long _adminAction;
    long long _restartTimeInterval;
}

+ (BOOL)supportsSecureCoding;
@property BOOL useDoItLaterWhenAppropriate; // @synthesize useDoItLaterWhenAppropriate=_useDoItLaterWhenAppropriate;
@property long long restartTimeInterval; // @synthesize restartTimeInterval=_restartTimeInterval;
@property(readonly) long long adminAction; // @synthesize adminAction=_adminAction;
@property(readonly, retain) NSString *productKey; // @synthesize productKey=_productKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductKey:(id)arg1 adminAction:(long long)arg2;

@end

