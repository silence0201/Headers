//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UIKBTouchState;

__attribute__((visibility("hidden")))
@interface UIKBTouchStateTask : NSObject <NSCopying>
{
    UIKBTouchState *_touchState;
    CDUnknownBlockType _task;
}

+ (id)touchStateTaskForTouchState:(id)arg1 andTask:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
@property(readonly, retain, nonatomic) UIKBTouchState *touchState; // @synthesize touchState=_touchState;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTouchState:(id)arg1 andTask:(CDUnknownBlockType)arg2;

@end

