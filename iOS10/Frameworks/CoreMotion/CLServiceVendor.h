//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLServiceVendor : NSObject
{
}

+ (id)getSiloForService:(id)arg1;
+ (id)proxyForService:(id)arg1 forClient:(id)arg2;
+ (id)proxyForService:(id)arg1;
+ (_Bool)ensureServiceIsRunning:(id)arg1;
+ (_Bool)isServiceRunning:(id)arg1;
+ (_Bool)isServiceEnabled:(id)arg1;
+ (void)retireServiceWithName:(id)arg1;
+ (id)getServiceWithName:(id)arg1;
+ (_Bool)getKeyClass:(Class *)arg1 andSilo:(id *)arg2 forServiceWithName:(id)arg3;
+ (void)rereadConfiguration;
+ (void)initialize;

@end

