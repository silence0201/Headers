//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

@interface UIStoryboardSegue : NSObject
{
    NSString *_identifier;
    UIViewController *_sourceViewController;
    UIViewController *_destinationViewController;
    CDUnknownBlockType _performHandler;
    CDUnknownBlockType _prepareHandler;
    id _sender;
}

+ (id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) id sender; // @synthesize sender=_sender;
@property(copy, nonatomic) CDUnknownBlockType prepareHandler; // @synthesize prepareHandler=_prepareHandler;
@property(copy, nonatomic) CDUnknownBlockType performHandler; // @synthesize performHandler=_performHandler;
@property(readonly, nonatomic) UIViewController *destinationViewController; // @synthesize destinationViewController=_destinationViewController;
@property(readonly, nonatomic) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_prepare;
- (void)perform;
- (id)init;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;

@end
