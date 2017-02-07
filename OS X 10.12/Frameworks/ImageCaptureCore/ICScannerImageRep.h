//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface ICScannerImageRep : NSObject
{
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _bitsPerComponent;
    unsigned long long _bitsPerPixel;
    unsigned long long _bytesPerRow;
    struct CGColorSpace *_colorspace;
    unsigned int _bitmapInfo;
    char *_buffer;
    long long _bufferSize;
    long long _bufferSizeUsed;
    NSLock *_bufferLock;
    BOOL _bufferUpdated;
    BOOL _useOverlay;
    struct CGRect _overlayRect;
    char *_overlayBuffer;
    long long _overlayBufferSize;
    unsigned char _backgroundGrayValue;
}

@property unsigned char backgroundGrayValue; // @synthesize backgroundGrayValue=_backgroundGrayValue;
@property(readonly) long long bufferSizeUsed; // @synthesize bufferSizeUsed=_bufferSizeUsed;
@property(readonly) long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(readonly) char *buffer; // @synthesize buffer=_buffer;
@property(readonly) unsigned int bitmapInfo; // @synthesize bitmapInfo=_bitmapInfo;
@property(readonly) struct CGColorSpace *colorspace; // @synthesize colorspace=_colorspace;
@property(readonly) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly) unsigned long long bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property(readonly) unsigned long long bitsPerComponent; // @synthesize bitsPerComponent=_bitsPerComponent;
@property(readonly) unsigned long long height; // @synthesize height=_height;
@property(readonly) unsigned long long width; // @synthesize width=_width;
- (void)clearOverlay;
- (struct CGImage *)copyCGImage:(char *)arg1;
- (BOOL)copyOverlayBuffer:(id)arg1 toRect:(struct CGRect)arg2;
- (void)copyToRow:(long long)arg1 numRows:(unsigned long long)arg2 fromRGBBuffer:(const char *)arg3 withBytesPerRow:(unsigned long long)arg4;
- (unsigned long long)copyFromOffset:(long long)arg1 length:(unsigned long long)arg2 toBuffer:(char *)arg3;
- (void)setBufferSizeUsed:(long long)arg1;
- (void)setBitmapInfo:(unsigned int)arg1;
- (void)setBytesPerRow:(unsigned long long)arg1;
- (void)setBitsPerPixel:(unsigned long long)arg1;
- (void)setBitsPerComponent:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (void)setColorspace:(struct CGColorSpace *)arg1;
- (void)clearOverviewImageBuffer;
- (void)setOverlayRect:(struct CGRect)arg1;
- (struct CGRect)overlayRect;
- (void)unlock;
- (void)lock;
- (void)finalize;
- (void)dealloc;
- (id)initWithBufferSize:(unsigned long long)arg1 andBytesPerRow:(unsigned long long)arg2;

@end
