//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMetadataObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying>
{
    AVMetadataFaceObjectInternal *_internal;
}

- (struct CGRect)rightEyeBounds;
- (struct CGRect)leftEyeBounds;
- (_Bool)hasRightEyeBounds;
- (_Bool)hasLeftEyeBounds;
- (int)smileConfidence;
- (_Bool)hasSmileConfidence;
- (int)rightEyeClosedConfidence;
- (int)leftEyeClosedConfidence;
- (_Bool)hasRightEyeClosedConfidence;
- (_Bool)hasLeftEyeClosedConfidence;
@property(readonly) double yawAngle;
@property(readonly) _Bool hasYawAngle;
@property(readonly) double rollAngle;
@property(readonly) _Bool hasRollAngle;
@property(readonly) long long faceID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithFaceID:(long long)arg1 hasRollAngle:(_Bool)arg2 rollAngle:(double)arg3 hasYawAngle:(_Bool)arg4 yawAngle:(double)arg5 time:(CDStruct_1b6d18a9)arg6 duration:(CDStruct_1b6d18a9)arg7 bounds:(struct CGRect)arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11;
- (id)initWithFaceID:(long long)arg1 hasRollAngle:(_Bool)arg2 rollAngle:(double)arg3 hasYawAngle:(_Bool)arg4 yawAngle:(double)arg5 time:(CDStruct_1b6d18a9)arg6 duration:(CDStruct_1b6d18a9)arg7 bounds:(struct CGRect)arg8;
- (id)initWithType:(id)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6;

@end

