//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface _WKUserInitiatedAction : NSObject <WKObject>
{
    struct ObjectStorage<API::UserInitiatedAction> _userInitiatedAction;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic, getter=isConsumed) BOOL consumed;
- (void)consume;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
