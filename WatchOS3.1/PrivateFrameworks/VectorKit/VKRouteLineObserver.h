//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKRouteLineObserverProtocol-Protocol.h>

@class VKRouteLine;

__attribute__((visibility("hidden")))
@interface VKRouteLineObserver : NSObject <VKRouteLineObserverProtocol>
{
    struct LabelTransitSupport *_transitSupport;
    VKRouteLine *_routeLine;
}

- (void)routeLineDidUpdateSections:(id)arg1;
- (void)dealloc;
- (id)initWithTransitSupport:(struct LabelTransitSupport *)arg1 andRouteLine:(id)arg2;

@end

