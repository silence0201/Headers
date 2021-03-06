//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXNonuniformTransform : NSObject <NSCopying>
{
    struct CGRect _sourceRect;
    struct CGRect _targetRect;
    id _coordinateSpace;
    double _minimumScale;
    double _maximumScale;
}

+ (id)horizontallyDominantTransformWithSourceRect:(struct CGRect)arg1 targetRect:(struct CGRect)arg2 coordinateSpace:(id)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5;
+ (id)identityTransform;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)inverseTransform;
- (double)_adjustedZoomScale:(double)arg1;
- (struct CGAffineTransform)affineTransformForRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (id)init;

@end

