//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SBFAuthenticationRequest : NSObject
{
    unsigned long long _type;
    long long _source;
    CDUnknownBlockType _handler;
    NSData *_payload;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (id)publicDescription;
- (id)initForMesaWithSource:(long long)arg1 successful:(_Bool)arg2;
- (id)initForMesaWithSource:(long long)arg1 successful:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initForPasscode:(id)arg1 source:(long long)arg2;
- (id)initForPasscode:(id)arg1 source:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithType:(unsigned long long)arg1 source:(long long)arg2 payload:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 source:(long long)arg2 payload:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end

