//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _MPRemoteCommandTarget : NSObject
{
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (long long)invokeWithRemoteCommandEvent:(id)arg1;
- (id)initWithTargetBlock:(CDUnknownBlockType)arg1;

@end

