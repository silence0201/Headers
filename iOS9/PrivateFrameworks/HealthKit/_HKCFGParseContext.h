//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScanner, _HKCFGNodeCache;

__attribute__((visibility("hidden")))
@interface _HKCFGParseContext : NSObject
{
    NSScanner *_scanner;
    unsigned long long _lengthAllowance;
    unsigned long long _recursiveDepth;
    _HKCFGNodeCache *_cache;
}

@property(readonly, nonatomic) _HKCFGNodeCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) unsigned long long recursiveDepth; // @synthesize recursiveDepth=_recursiveDepth;
@property(readonly, nonatomic) unsigned long long lengthAllowance; // @synthesize lengthAllowance=_lengthAllowance;
@property(readonly, nonatomic) NSScanner *scanner; // @synthesize scanner=_scanner;
- (void).cxx_destruct;
- (void)increaseLengthAllowance:(unsigned long long)arg1;
- (void)decreaseLengthAllowance:(unsigned long long)arg1;
- (void)decrementRecursiveDepth;
- (void)incrementRecursiveDepth;
- (id)initWithScanner:(id)arg1 lengthAllowance:(unsigned long long)arg2;

@end

