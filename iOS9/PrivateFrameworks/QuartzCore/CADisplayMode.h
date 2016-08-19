//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplay;

@interface CADisplayMode : NSObject
{
    void *_priv;
    CADisplay *_dpy;
    unsigned long long _width;
    unsigned long long _height;
}

+ (id)_displayModeWithMode:(int)arg1 display:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double pixelAspectRatio;
@property(readonly, nonatomic) unsigned long long height;
@property(readonly, nonatomic) unsigned long long width;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (int)_mode;
- (id)_display;
- (void)dealloc;
- (id)_initWithMode:(int)arg1 display:(id)arg2;

@end

