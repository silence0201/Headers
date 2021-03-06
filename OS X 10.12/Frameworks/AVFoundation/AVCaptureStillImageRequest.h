//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface AVCaptureStillImageRequest : NSObject
{
    CDUnknownBlockType _completionBlock;
    NSDictionary *_outputSettings;
    long long _imageOrientation;
    BOOL _imageMirrored;
}

+ (id)request;
@property BOOL imageMirrored; // @synthesize imageMirrored=_imageMirrored;
@property long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(retain) NSDictionary *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;

@end

