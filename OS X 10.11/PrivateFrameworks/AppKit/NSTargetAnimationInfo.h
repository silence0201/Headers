//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSAnimation;

@interface NSTargetAnimationInfo : NSObject <NSCoding>
{
    NSAnimation *_animation;
    float _progress;
    BOOL _start;
}

- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)startOrStopTargetAnimation;
- (float)floatValue;
- (id)initWithAnimation:(id)arg1 progress:(float)arg2 start:(BOOL)arg3;

@end

