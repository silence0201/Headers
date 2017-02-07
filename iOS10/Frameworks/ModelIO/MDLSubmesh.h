//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>

@class MDLMaterial, MDLSubmeshTopology, NSString;
@protocol MDLMeshBuffer;

@interface MDLSubmesh : NSObject <MDLNamed>
{
    MDLMaterial *_material;
    id <MDLMeshBuffer> _indexBuffer;
    unsigned long long _indexCount;
    unsigned long long _indexType;
    long long _geometryType;
    MDLSubmeshTopology *_topology;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MDLSubmeshTopology *topology; // @synthesize topology=_topology;
@property(readonly, nonatomic) long long geometryType; // @synthesize geometryType=_geometryType;
@property(readonly, nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
@property(readonly, nonatomic) unsigned long long indexCount; // @synthesize indexCount=_indexCount;
@property(readonly, retain, nonatomic) id <MDLMeshBuffer> indexBuffer; // @synthesize indexBuffer=_indexBuffer;
@property(retain, nonatomic) MDLMaterial *material; // @synthesize material=_material;
- (void).cxx_destruct;
- (struct MDLAABB)boundingBoxForMesh:(id)arg1;
- (void)dealloc;
- (void)debugPrintToFile:(struct __sFILE *)arg1;
- (id)indexBufferAsIndexType:(unsigned long long)arg1;
- (id)initWithMDLSubmesh:(id)arg1 indexType:(unsigned long long)arg2 geometryType:(long long)arg3;
- (id)initWithIndexBuffer:(id)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 geometryType:(long long)arg4 material:(id)arg5;
- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 geometryType:(long long)arg5 material:(id)arg6;
- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 geometryType:(long long)arg5 material:(id)arg6 topology:(id)arg7;

@end

