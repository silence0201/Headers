//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CALayer;

@interface CAPackage : NSObject
{
    struct _CAPackageData *_data;
}

+ (id)packageWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)packageWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;
- (id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (void)foreachLayer:(CDUnknownBlockType)arg1;
- (id)publishedObjectWithName:(id)arg1;
- (id)publishedObjectNames;
@property(readonly, getter=isGeometryFlipped) _Bool geometryFlipped;
@property(readonly) CALayer *rootLayer;
- (void)dealloc;
- (void)_readFromCAMLURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)_readFromCAMLData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)_readFromArchiveData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)_addClassSubstitutions:(id)arg1;
- (id)substitutedClasses;
- (id)_initWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_initWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end

