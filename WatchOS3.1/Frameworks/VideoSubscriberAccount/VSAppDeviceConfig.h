//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/IKAppDeviceConfig-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSAppDeviceConfig : NSObject <IKAppDeviceConfig>
{
}

- (id)currentSizeClasses;
- (id)timeZone;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (_Bool)isTimeZoneSet;
- (struct CGSize)screenSize;
- (unsigned long long)preferredVideoPreviewFormat;
- (unsigned long long)preferredVideoFormat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

