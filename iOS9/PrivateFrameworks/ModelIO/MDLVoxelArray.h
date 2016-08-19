//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDLVoxelArray : NSObject
{
    struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> _voxels;
    // Error parsing type: {?="minimumExtent""maximumExtent"}, name: _extent
    // Error parsing type: {MDLAABB="maxBounds""minBounds"}, name: _bounds
    float _voxelExtent;
    struct MortonCode mortonCoder;
}

@property(readonly, nonatomic) struct voxelIndexExtent; // @synthesize voxelIndexExtent=_extent;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)erodeExterior;
- (int)erodeInterior;
- (int)dilateExterior;
- (int)dilateInterior;
- (void)intersectWithVoxels:(id)arg1;
- (void)differenceWithVoxels:(id)arg1;
- (void)unionWithVoxels:(id)arg1;
- (void)clearVoxelsWithIndexData:(id)arg1;
- (void)setVoxelsWithVoxelData:(id)arg1;
- (id)voxelIndices;
- (id)voxelsWithinExtent:(struct)arg1;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;
- (void)setVoxelAtIndex: /* Error: Ran out of types for this method. */;
- (_Bool)voxelExistsAtIndex:(_Bool)arg1 allowAnyX:(_Bool)arg2 allowAnyY:(_Bool)arg3 allowAnyZ:(_Bool)arg4 allowAnyShell: /* Error: Ran out of types for this method. */;
- (void)recalculateExtents;
- (id)meshUsingAllocator:(id)arg1;
- (id)initWithData:(id)arg1 boundingBox:(struct)arg2 voxelExtent:(float)arg3;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;
- (id)init;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) struct boundingBox;
- (struct)voxelBoundingBoxAtIndex: /* Error: Ran out of types for this method. */;
-     // Error parsing type: 32@0:816, name: indexOfSpatialLocation:
-     // Error parsing type: 32@0:816, name: spatialLocationOfIndex:

@end

