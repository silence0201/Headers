//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MNIdealTransportTypeFinder : NSObject
{
}

- (id)_transportTypePreferenceAsString:(long long)arg1;
- (long long)_transportTypeCompatibleWithMapType:(int)arg1;
- (void)_preferredTransportTypeForMapType:(int)arg1 handler:(CDUnknownBlockType)arg2 handlerQueue:(id)arg3;
- (void)_idealTransportTypeForOrigin:(CDStruct_2c43369c)arg1 destination:(CDStruct_2c43369c)arg2 mapType:(int)arg3 handler:(CDUnknownBlockType)arg4 handlerQueue:(id)arg5;
- (void)idealTransportTypeForMapType:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)idealTransportTypeForOrigin:(CDStruct_2c43369c)arg1 destination:(CDStruct_2c43369c)arg2 mapType:(int)arg3 handler:(CDUnknownBlockType)arg4 handlerQueue:(id)arg5;
- (void)idealTransportTypeForOrigin:(CDStruct_2c43369c)arg1 destination:(CDStruct_2c43369c)arg2 mapType:(int)arg3 handler:(CDUnknownBlockType)arg4;
- (long long)idealTransportTypeForMapType:(int)arg1;
- (long long)idealTransportTypeForOrigin:(CDStruct_2c43369c)arg1 destination:(CDStruct_2c43369c)arg2 mapType:(int)arg3;
- (id)initWithMapsHistory:(_Bool)arg1;

@end

