//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSScriptCommand.h>

@class NSScriptObjectSpecifier;

@interface NSMoveCommand : NSScriptCommand
{
    NSScriptObjectSpecifier *_keySpecifier;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)performDefaultImplementation;
- (void)_moveObjectsInContainer:(id)arg1 toContainer:(id)arg2 withKey:(id)arg3 atIndex:(long long *)arg4 replace:(BOOL)arg5;
- (void)_moveObjectInContainer:(id)arg1 withKey:(id)arg2 atIndex:(long long)arg3 toContainer:(id)arg4 withKey:(id)arg5 atIndex:(long long *)arg6 replace:(BOOL)arg7;
@property(readonly, retain) NSScriptObjectSpecifier *keySpecifier;
- (void)dealloc;
- (void)setReceiversSpecifier:(id)arg1;

@end

