//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface SCNPhysicsShape : NSObject <NSCopying, NSSecureCoding>
{
    id _referenceObject;
    NSDictionary *_options;
    NSArray *_transforms;
    void *_cachedObject;
    struct btCollisionShape *_collisionShape;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultShapeForGeometry:(id)arg1;
+ (id)shapeWithShapes:(id)arg1 transforms:(id)arg2;
+ (id)shapeWithNode:(id)arg1 options:(id)arg2;
+ (id)shapeWithGeometry:(id)arg1 options:(id)arg2;
@property(readonly, nonatomic) id sourceObject; // @synthesize sourceObject=_referenceObject;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNPhysicsShape:(id)arg1;
- (void)_customEncodingOfSCNPhysicsShape:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct btCollisionShape *)_handle;
- (void)_setTransforms:(id)arg1;
@property(readonly, nonatomic) NSArray *transforms;
@property(readonly, nonatomic) NSDictionary *options;
- (void)setReferenceObject:(id)arg1;
- (id)referenceObject;
- (void)dealloc;
- (id)initWithCachedObject:(void *)arg1 options:(id)arg2;
- (id)initWithContent:(id)arg1 options:(id)arg2;

@end

