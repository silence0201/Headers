//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CLNotifierServiceProtocol-Protocol.h>

@protocol CLGeomagneticModelProviderClientProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetDoSync:(void (^)(struct CLGeomagneticModelProviderClient *))arg1;
- (void)doAsync:(void (^)(struct CLGeomagneticModelProviderClient *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLGeomagneticModelProviderClient *))arg1;
@end

