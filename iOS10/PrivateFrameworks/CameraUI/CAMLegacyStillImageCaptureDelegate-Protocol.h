//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMLegacyStillImageCaptureRequest, CAMStillImageCaptureResult;

@protocol CAMLegacyStillImageCaptureDelegate <NSObject>

@optional
- (void)legacyStillImageRequest:(CAMLegacyStillImageCaptureRequest *)arg1 didCompleteCaptureWithResult:(CAMStillImageCaptureResult *)arg2;
- (void)legacyStillImageRequestDidStopCapturing:(CAMLegacyStillImageCaptureRequest *)arg1;
- (void)legacyStillImageRequestDidStartCapturing:(CAMLegacyStillImageCaptureRequest *)arg1;
@end
