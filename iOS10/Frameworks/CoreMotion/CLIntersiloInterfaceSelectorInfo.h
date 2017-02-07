//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject
{
    int _numArguments;
    int _replyBlockIndex;
    int _returnAddressIndex;
    int _returnValueSize;
    SEL _sel;
    NSMethodSignature *_sig;
    NSString *_str;
}

@property(readonly, retain, nonatomic) NSString *str; // @synthesize str=_str;
@property(readonly, retain, nonatomic) NSMethodSignature *sig; // @synthesize sig=_sig;
@property(readonly, nonatomic) int returnValueSize; // @synthesize returnValueSize=_returnValueSize;
@property(readonly, nonatomic) int returnAddressIndex; // @synthesize returnAddressIndex=_returnAddressIndex;
@property(readonly, nonatomic) int replyBlockIndex; // @synthesize replyBlockIndex=_replyBlockIndex;
@property(readonly, nonatomic) int numArguments; // @synthesize numArguments=_numArguments;
@property(readonly, nonatomic) SEL sel; // @synthesize sel=_sel;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2;

@end

