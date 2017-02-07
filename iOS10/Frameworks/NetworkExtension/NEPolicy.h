//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NEPolicyResult, NSArray;

@interface NEPolicy : NSObject <NEPrettyDescription>
{
    unsigned int _order;
    NEPolicyResult *_result;
    NSArray *_conditions;
}

@property(copy) NSArray *conditions; // @synthesize conditions=_conditions;
@property(retain) NEPolicyResult *result; // @synthesize result=_result;
@property unsigned int order; // @synthesize order=_order;
- (void).cxx_destruct;
- (_Bool)addTLVsToMessage:(id)arg1;
- (_Bool)validate;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithOrder:(unsigned int)arg1 result:(id)arg2 conditions:(id)arg3;
- (id)init;

@end

