//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMListLevelTextMapper : NSObject
{
    NSMutableArray *_tokens;
}

- (id)listLevelTextForOutline:(id)arg1;
- (void)dealloc;
- (id)initWithText:(id)arg1 levelDescriptions:(id)arg2 language:(int)arg3;
- (id)initWithText:(id)arg1;
- (id)token:(unsigned int)arg1;
- (unsigned long long)tokenCount;

@end
