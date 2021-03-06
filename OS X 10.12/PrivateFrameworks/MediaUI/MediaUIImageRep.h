//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@interface MediaUIImageRep : NSImageRep
{
    struct CGImage *_image;
    long long _onceToken;
    CDUnknownBlockType _imageFaultBlock;
}

+ (id)imageRepWithImageFaultBlock:(CDUnknownBlockType)arg1;
- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (BOOL)drawInRect:(struct CGRect)arg1;
- (BOOL)drawInPoint:(struct CGPoint)arg1;
- (BOOL)draw;
@property(readonly) struct CGImage *image;
- (void)dealloc;
- (id)initWithImageFaultBlock:(CDUnknownBlockType)arg1;

@end

