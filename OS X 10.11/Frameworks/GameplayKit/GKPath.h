//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKPath : NSObject
{
    struct PolylinePathway _pathway;
    BOOL _cyclical;
    float _radius;
}

+ (id)pathWithGraphNodes:(id)arg1 radius:(float)arg2;
+     // Error parsing type: @40@0:8^16Q24f32c36, name: pathWithPoints:count:radius:cyclical:
- (id).cxx_construct;
-     // Error parsing type: 24@0:8Q16, name: pointAtIndex:
@property(readonly) unsigned long long numPoints;
- (struct PolylinePathway *)pathway;
@property(nonatomic) float radius;
- (BOOL)cyclical;
@property(nonatomic, getter=isCyclical) BOOL cyclical;
- (id)initWithGraphNodes:(id)arg1 radius:(float)arg2;
-     // Error parsing type: @40@0:8^16Q24f32c36, name: initWithPoints:count:radius:cyclical:
- (id)init;

@end

