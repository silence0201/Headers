//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@interface SKOpenGLNode : SKNode
{
}

+ (id)openGLNodeWithViewportSize:(struct CGSize)arg1;
- (void)renderForTime:(double)arg1;
- (void)_renderForTime:(double)arg1;
- (_Bool)needsRenderForTime:(double)arg1;
@property struct CGSize viewportSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewportSize:(struct CGSize)arg1;
- (id)init;

@end

