//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/_LSLazyPropertyList.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _LSCompoundLazyPropertyList : _LSLazyPropertyList
{
    NSArray *_plists;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;
- (id)_loadPropertyListPeeking:(_Bool)arg1;
- (void)dealloc;
- (id)initWithLazyPropertyLists:(id)arg1;

@end

