//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Symbolication/VMUCallTreeNode.h>

@class NSCountedSet, NSString;

__attribute__((visibility("hidden")))
@interface VMUCallTreeLeafNode : VMUCallTreeNode
{
    NSCountedSet *_addresses;
    NSString *_combinedName;
}

- (void)getBrowserName:(id)arg1;
- (void)addAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;

@end
