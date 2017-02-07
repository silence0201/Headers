//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCRTextDrawing : NSObject
{
    struct __CTLine *_line;
    double _width;
    double _descent;
    double _ascent;
    double _leading;
    struct __CTLine *_truncationToken;
}

- (double)leading;
- (double)descent;
- (double)ascent;
- (double)height;
- (double)width;
- (void)drawIn:(struct CGContext *)arg1 at:(struct CGPoint)arg2;
- (void)drawIn:(struct CGContext *)arg1 at:(struct CGPoint)arg2 width:(double)arg3 flushFactor:(double)arg4;
- (void)dealloc;
- (id)initWith:(id)arg1 font:(struct __CTFont *)arg2;

@end
