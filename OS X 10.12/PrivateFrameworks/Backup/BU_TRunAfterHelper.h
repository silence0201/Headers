//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BU_TRunAfterHelper : NSObject
{
    unsigned long long _postID;
    unsigned long long _owningTargetID;
    unique_function_acfb320d _functor;
}

+ (unsigned long long)postFunctor:(unique_function_acfb320d *)arg1 withOwningTargetID:(unsigned long long)arg2 delayInSec:(double)arg3;
@property unsigned long long postID; // @synthesize postID=_postID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)post;
- (id)initWithFunctor:(unique_function_acfb320d *)arg1 withOwningTargetID:(unsigned long long)arg2;

@end
