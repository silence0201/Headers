//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHFacePropertySet-Protocol.h>

@class PHFace;

@interface PHFacePropertySet : NSObject <PHFacePropertySet>
{
    PHFace *_face;
}

+ (void)fetchPropertiesForObjects:(id)arg1 photoLibrary:(id)arg2;
+ (id)propertiesToLoadFromPhotoLibrary:(id)arg1;
+ (id)propertySetWithObject:(id)arg1;
@property(readonly, nonatomic) __weak PHFace *face; // @synthesize face=_face;
- (void).cxx_destruct;
- (id)initWithFace:(id)arg1;

@end

