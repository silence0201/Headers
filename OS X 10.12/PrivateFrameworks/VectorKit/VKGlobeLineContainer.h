//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKPolylineGroupOverlayObserver-Protocol.h>
#import <VectorKit/VKPolylineObserver-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, VKPolylineOverlay;
@protocol VKGlobeLineContainerDelegate, VKRouteMatchedAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKGlobeLineContainer : NSObject <VKPolylineGroupOverlayObserver, VKPolylineObserver>
{
    id <VKRouteMatchedAnnotationPresentation> _routeLineSplitAnnotation;
    id <VKGlobeLineContainerDelegate> _delegate;
    NSMutableArray *_overlays;
    struct GlobeView {
        CDUnknownFunctionPointerType *;
        struct AnchorManagerPrivate *;
        struct Scene *;
        struct Context *;
        struct DtmCacheNode *;
        struct DtmRequestManager *;
        struct FreezeViewNode *;
        struct Projection;
        struct FrameLatLon;
        _Bool;
        basic_string_805fe43b;
        basic_string_805fe43b;
        struct vector<altitude::TileBound, std::__1::allocator<altitude::TileBound>>;
        struct vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey>>;
        _Bool;
        unsigned int;
        unsigned int;
        unsigned int;
        unsigned int;
        struct VKClassicGlobeCanvas *;
        _Bool;
        _Bool;
        int;
        struct AnimationManager;
        struct Timer;
        double;
        _Bool;
        double;
        double;
        double;
        struct FrameLatLon;
        struct C3mmRequestManager *;
        struct RenderableGroup *;
        unsigned int;
        double;
        _Bool;
        _Bool;
        struct LabelDataManagerPrivate *;
        _Bool;
        _Bool;
        _Bool;
        _Bool;
        struct RouteLineManager *;
        struct GlobeCleanupLoader *;
        struct CompleteGlobeTileSetCullingGraph *;
        struct CompleteGlobeTileSetLoader *;
        struct TileSetNode *;
        struct GlobeTileRenderManager *;
        struct CullingNode *;
        struct EarthAdjustedViewNode *;
        struct UserViewNode *;
        struct View *;
        struct BasicViewNode *;
        struct GlobeMainViewNode *;
        struct C3bRequestManager *;
        float;
        _Bool;
        struct shared_ptr<bool>;
        struct HeightRequestManager *;
        struct map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>>>>;
        struct Mutex;
        struct shared_ptr<altitude::Stylesheet>;
        struct FlyoverTour *;
        _Bool;
        struct TriggerManager *;
        struct Viewport;
        struct AnimationReferenceTimer;
        _Bool;
        struct set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *>>;
        struct GeoServicesLoader *;
        struct ManifestManager *;
        struct GlobeDispatch *;
    } *_globeView;
    struct map<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, std::__1::allocator<std::__1::pair<VKPolylineOverlay *const, std::__1::weak_ptr<altitude::RouteLineData>>>> _polylinesToRoutes;
    VKPolylineOverlay *_selectedPolyline;
    NSMutableSet *_persistentOverlays;
    struct VKGlobeRouteSplit *_routeSplit;
}

@property(nonatomic) id <VKGlobeLineContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)setNeedsLayoutForPolyline:(id)arg1;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)update;
- (void)_recreateLinesIfNeeded;
- (void)_updateRouteSplit;
@property(retain, nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)setSelected:(id)arg1 selected:(BOOL)arg2;
- (void)clearLineSelection;
- (void)removeLine:(id)arg1;
- (void)addLine:(id)arg1;
- (id)persistentOverlays;
- (id)overlays;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithGlobeView:(struct GlobeView *)arg1 stylesheet:(shared_ptr_a3c46825)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

