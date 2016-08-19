//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSString, SCNGeometry;

@protocol SCNLevelOfDetailJSExport <JSExport>
+ (id)levelOfDetailWithGeometry:(SCNGeometry *)arg1 worldSpaceDistance:(double)arg2;
+ (id)levelOfDetailWithGeometry:(SCNGeometry *)arg1 screenSpaceRadius:(double)arg2;
@property(readonly) double worldSpaceDistance;
@property(readonly) double screenSpaceRadius;
@property(readonly) SCNGeometry *geometry;
- (id)copy;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
@end

