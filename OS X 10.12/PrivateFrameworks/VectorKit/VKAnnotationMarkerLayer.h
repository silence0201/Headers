//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VKAnnotationMarker, VKAnnotationModel;

__attribute__((visibility("hidden")))
@interface VKAnnotationMarkerLayer : NSObject
{
    VKAnnotationModel *_model;
    VKAnnotationMarkerLayer *_superlayer;
    NSMutableArray *_sublayers;
    VKAnnotationMarker *_annotationMarker;
    double _contentScale;
}

@property(nonatomic) VKAnnotationModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) VKAnnotationMarker *annotationMarker; // @synthesize annotationMarker=_annotationMarker;
@property(readonly, copy, nonatomic) NSArray *sublayers; // @synthesize sublayers=_sublayers;
@property(nonatomic) VKAnnotationMarkerLayer *superlayer; // @synthesize superlayer=_superlayer;
- (void)stylesheetDidChange;
- (void)_updateStyle;
- (unsigned char)_vectorType;
- (void)updateWithStyleQuery:(const shared_ptr_c5d816ee *)arg1;
- (_Bool)_getStyleAttributes:(struct FeatureAttributeSet *)arg1;
- (void)appendCommandsToBuffer:(struct CommandBuffer *)arg1 inContext:(struct LayoutContext *)arg2;
- (void)willLayoutWithContext:(struct LayoutContext *)arg1;
- (void)addSublayer:(id)arg1;
- (void)removeFromSuperlayer;
- (void)removeSublayer:(id)arg1;
- (void)runAnimation:(id)arg1;
- (void)dealloc;
- (id)init;

@end
