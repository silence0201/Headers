//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FI_TTargetActionFunctor : NSObject
{
    function_f9feaa7d _functor;
    long long _ownerValidatorID;
}

+ (id)targetActionFunctor:(const function_f9feaa7d *)arg1;
@property long long ownerValidatorID; // @synthesize ownerValidatorID=_ownerValidatorID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)action:(id)arg1;
- (id)initWithFunctor:(const function_f9feaa7d *)arg1;

@end
