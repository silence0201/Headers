//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVExternalDevice, NSString;

@interface AVExternalDeviceScreenBorrowToken : NSObject
{
    AVExternalDevice *_externalDevice;
    NSString *_client;
    NSString *_reason;
}

@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *client; // @synthesize client=_client;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithExternalDevice:(id)arg1 client:(id)arg2 reason:(id)arg3;

@end

