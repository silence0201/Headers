//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CalLocationManager : NSObject
{
}

+ (void)_loadMapKit;
+ (id)strictGeocodeString:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (id)placemarkForAddress:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (id)placemarkForLocation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (_Bool)isCurrentProcessEntitledToUseLocationServices;
+ (id)currentLocationWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
