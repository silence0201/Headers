//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreConnectionType : NSObject
{
    long long _technology;
}

- (unsigned long long)aggregatorConnectionType;
- (long long)diagnosticConnectionType;
- (_Bool)canUseWiFiDirectly;
- (_Bool)isEdge;
- (_Bool)isWWAN;
- (long long)technology;
- (id)description;
- (id)initWithTechnology:(long long)arg1;

@end
