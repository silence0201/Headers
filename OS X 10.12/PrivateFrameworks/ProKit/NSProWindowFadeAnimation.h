//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProKit/NSProWindowAnimation.h>

__attribute__((visibility("hidden")))
@interface NSProWindowFadeAnimation : NSProWindowAnimation
{
    struct {
        unsigned int _fade:1;
        unsigned int _unused:31;
    } _flags;
}

- (void)setCurrentProgress:(float)arg1;
@property long long fade;
- (id)initWithWindow:(id)arg1 duration:(double)arg2 fade:(long long)arg3;
- (id)initWithWindow:(id)arg1 fade:(long long)arg2;

@end
