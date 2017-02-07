//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface TXRParserBase : NSObject
{
    NSData *_imageData;
    unsigned long long _imageOrientation;
    _Bool _imageHasAlpha;
    unsigned long long _numArrayElements;
    unsigned long long _numFaces;
    unsigned long long _numMipmapLevels;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _depth;
    unsigned long long _sampleCount;
    unsigned long long _bytesPerRow;
    unsigned long long _bitsPerPixel;
    unsigned long long _blockWidth;
    unsigned long long _blockHeight;
    unsigned long long _numPixelComponents;
    unsigned long long _pixelFormatIsCompressed;
    unsigned long long _pixelFormat;
}

@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned long long pixelFormatIsCompressed; // @synthesize pixelFormatIsCompressed=_pixelFormatIsCompressed;
@property(nonatomic) unsigned long long numPixelComponents; // @synthesize numPixelComponents=_numPixelComponents;
@property(nonatomic) unsigned long long blockHeight; // @synthesize blockHeight=_blockHeight;
@property(nonatomic) unsigned long long blockWidth; // @synthesize blockWidth=_blockWidth;
@property(nonatomic) unsigned long long bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property(nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) unsigned long long numMipmapLevels; // @synthesize numMipmapLevels=_numMipmapLevels;
@property(nonatomic) unsigned long long numFaces; // @synthesize numFaces=_numFaces;
@property(nonatomic) unsigned long long numArrayElements; // @synthesize numArrayElements=_numArrayElements;
@property(nonatomic) _Bool imageHasAlpha; // @synthesize imageHasAlpha=_imageHasAlpha;
@property(nonatomic) unsigned long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;

@end
