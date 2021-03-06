//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCRImage : NSObject
{
    unsigned long long width;
    unsigned long long height;
    unsigned long long bytesPerRow;
    char *rawDataBuffer;
    char *alignedDataBuffer;
    BOOL freeBufferWhenDone;
}

@property unsigned long long bytesPerRow; // @synthesize bytesPerRow;
@property unsigned long long height; // @synthesize height;
@property unsigned long long width; // @synthesize width;
- (void)dealloc;
- (char *)getAlignedImageData;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(char *)arg4 freeBufferWhenDone:(BOOL)arg5;

@end

