//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import <VectorKit/GEOExperimentConfigurationObserver-Protocol.h>
#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <VectorKit/VKLabelModelDelegate-Protocol.h>
#import <VectorKit/VKOverlayContainerDelegate-Protocol.h>
#import <VectorKit/VKPolylineGroupOverlayObserver-Protocol.h>
#import <VectorKit/VKPolylineOverlayRouteRibbonObserver-Protocol.h>
#import <VectorKit/VKTileProviderClient-Protocol.h>

@class GEOResourceManifestConfiguration, NSArray, NSLocale, NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString, VKAnnotationModel, VKBuildingFootprintMapModel, VKCoastlineMapModel, VKDebugModel, VKGridModel, VKGroundMapModel, VKHybridRasterMapModel, VKLabelModel, VKMapRasterizer, VKMercatorTerrainHeightCache, VKOverlayContainerModel, VKPolygonMapModel, VKPolylineOverlay, VKPolylineOverlayPainter, VKRasterMapModel, VKRasterOverlayMapModel, VKRasterOverlayTileSource, VKRiverMapModel, VKRoadMapModel, VKRoadTrafficMapModel, VKSceneConfiguration, VKSelectedTransitLineMapModel, VKSkyModel, VKTileProvider, VKTimedAnimation, VKTrafficTileSource, VKTransitLineMapModel;
@protocol GEORoutePreloadSession, VKMapModeObserver, VKMapModelDelegate, VKRouteMatchedAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKMapModel : VKModelObject <VKOverlayContainerDelegate, VKLabelModelDelegate, GEOResourceManifestTileGroupObserver, VKPolylineOverlayRouteRibbonObserver, GEOExperimentConfigurationObserver, VKTileProviderClient, VKPolylineGroupOverlayObserver>
{
    unsigned long long _mapPurpose;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    long long _tileSize;
    VKTileProvider *_tileProvider;
    VKTileProvider *_buildingTileProvider;
    VKTileProvider *_additionalManifestTileProvider;
    VKTileProvider *_rasterOverlayProvider[2];
    char _activeMapLayers[34];
    VKTrafficTileSource *_trafficSource;
    GEOResourceManifestConfiguration *_additionalManifestConfiguration;
    long long _mapMode;
    long long _desiredMapMode;
    BOOL _transitioningToNav;
    BOOL _isTransitioningToTransit;
    VKRasterOverlayTileSource *_rasterOverlayTileSource[2];
    VKGroundMapModel *_groundCoverModel;
    VKGridModel *_gridModel;
    VKSkyModel *_skyModel;
    VKLabelModel *_labelModel;
    VKRasterMapModel *_rasterModel;
    VKHybridRasterMapModel *_hybridRasterModel;
    VKRasterMapModel *_standardRasterModel;
    VKRiverMapModel *_riverLineModel;
    VKPolygonMapModel *_polygonModel;
    VKPolygonMapModel *_navPolygonModel;
    VKRoadMapModel *_roadModel;
    VKRoadMapModel *_hybridRoadModel;
    VKRoadTrafficMapModel *_roadTrafficModel;
    VKBuildingFootprintMapModel *_buildingFootprintModel;
    VKAnnotationModel *_annotationModel;
    VKOverlayContainerModel *_overlayContainerModel;
    VKRasterOverlayMapModel *_rasterOverlayModel[2];
    VKDebugModel *_debugModel;
    VKCoastlineMapModel *_coastlineModel;
    NSMapTable *_tileSources;
    NSMutableArray *_drawOrder;
    NSMutableArray *_mapLayerSubmodels;
    NSMutableArray *_mapTileSubmodels;
    shared_ptr_a3c46825 _activeStyleManager;
    shared_ptr_a3c46825 _defaultStyleManager;
    shared_ptr_a3c46825 _hybridStyleManager;
    shared_ptr_a3c46825 _satelliteStyleManager;
    shared_ptr_c37d6e02 _sceneManager;
    VKSceneConfiguration *_sceneConfiguration;
    double _zoomLevel;
    long long _mapType;
    id <VKMapModelDelegate> _delegate;
    id <GEORoutePreloadSession> _routePreloadSession;
    BOOL _buildingsAreVisible;
    BOOL _showsBuildings;
    BOOL _fullyDrawn;
    BOOL _shouldNotifyFullyDrawn;
    BOOL _hasFailedTile;
    BOOL _trafficEnabled;
    BOOL _trafficIncidentsEnabled;
    BOOL _shouldRasterize;
    long long _loadingCount;
    double _contentScale;
    unsigned char _targetDisplay;
    struct VehicleState _vehicleState;
    unsigned char _applicationUILayout;
    double _lodBias;
    BOOL _disableRoads;
    BOOL _disableLabels;
    BOOL _disablePolygons;
    BOOL _disableBuildingFootprints;
    BOOL _disableRasters;
    BOOL _disableGrid;
    Matrix_5173352a _clearColor;
    VKMapRasterizer *_rasterizer;
    VKRasterMapModel *_rasterViewer;
    int _annotationMarkerStyle;
    BOOL _limitingNavCameraHeight;
    NSMutableSet *_blockingStylesheetObservers;
    double _styleTransitionProgress;
    NSMutableArray *_externalAnchors;
    double _forcedMaxZoomLevel;
    VKTransitLineMapModel *_transitLineModel;
    VKSelectedTransitLineMapModel *_selectedTransitLineModel;
    BOOL _disableTransitLines;
    VKTimedAnimation *_modeTransitionAnimation;
    char _disableRoadClass[9];
    id <VKMapModeObserver> _mapModeObserver;
    struct unique_ptr<md::TrafficSharedResources, std::__1::default_delete<md::TrafficSharedResources>> _trafficSharedResources;
    shared_ptr_887a193f _dataOverrideManager;
    float _navigationPuckSize;
    struct ClearItem _clearItem;
    struct FeatureAttributeSet _mapFeatureStyleAttributes;
    shared_ptr_c5d816ee _styleQuery;
    int _metroArea;
    BOOL _forceMapDrawStyleUpdate;
    NSMutableSet *_polylineOverlays;
    VKPolylineOverlay *_selectedPolyline;
    VKTimedAnimation *_highZoomTransitionAnimation;
    float _navMapModeTransitionZ;
}

+ (unsigned long long)numberOfRoadClasses;
+ (const char *)nameForRoadClass:(int)arg1;
@property(nonatomic) float navMapModeTransitionZ; // @synthesize navMapModeTransitionZ=_navMapModeTransitionZ;
@property(nonatomic) BOOL disableTransitLines; // @synthesize disableTransitLines=_disableTransitLines;
@property(nonatomic) BOOL limitingNavCameraHeight; // @synthesize limitingNavCameraHeight=_limitingNavCameraHeight;
@property(readonly, nonatomic) BOOL shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(nonatomic) float navigationPuckSize; // @synthesize navigationPuckSize=_navigationPuckSize;
@property(readonly, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(retain, nonatomic) GEOResourceManifestConfiguration *additionalManifestConfiguration; // @synthesize additionalManifestConfiguration=_additionalManifestConfiguration;
@property(nonatomic) BOOL showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic, getter=isTrafficIncidentsEnabled) BOOL trafficIncidentsEnabled; // @synthesize trafficIncidentsEnabled=_trafficIncidentsEnabled;
@property(nonatomic, getter=isTrafficEnabled) BOOL trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(readonly, nonatomic) BOOL buildingsAreVisible; // @synthesize buildingsAreVisible=_buildingsAreVisible;
@property(nonatomic) shared_ptr_c37d6e02 sceneManager; // @synthesize sceneManager=_sceneManager;
@property(nonatomic) shared_ptr_a3c46825 styleManager; // @synthesize styleManager=_activeStyleManager;
@property(nonatomic) id <VKMapModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VKBuildingFootprintMapModel *buildingFootprintModel; // @synthesize buildingFootprintModel=_buildingFootprintModel;
@property(readonly, nonatomic) long long currentMapMode; // @synthesize currentMapMode=_mapMode;
@property(nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) Matrix_5173352a clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) BOOL disableGrid; // @synthesize disableGrid=_disableGrid;
@property(nonatomic) BOOL disableRasters; // @synthesize disableRasters=_disableRasters;
@property(nonatomic) BOOL disableBuildingFootprints; // @synthesize disableBuildingFootprints=_disableBuildingFootprints;
@property(nonatomic) BOOL disablePolygons; // @synthesize disablePolygons=_disablePolygons;
@property(nonatomic) BOOL disableLabels; // @synthesize disableLabels=_disableLabels;
@property(nonatomic) BOOL disableRoads; // @synthesize disableRoads=_disableRoads;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) float currentRoadSignOffset;
@property(readonly, nonatomic) VKSceneConfiguration *sceneConfiguration;
- (shared_ptr_430519ce)featureMarkerAtScreenPoint:(struct CGPoint)arg1 groundPoint:(Matrix_6e1d3589)arg2;
- (shared_ptr_430519ce)buildingMarkerAtScreenPoint:(struct CGPoint)arg1 groundPoint:(Matrix_6e1d3589)arg2;
- (void)setApplicationState:(unsigned char)arg1;
- (void)polylineOverlay:(id)arg1 didUpdateRouteRibbon:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)resetTileContainers;
- (id)labelDebugString;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)removeExternalAnchor:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
- (id)externalAnchors;
@property(retain, nonatomic) id <GEORoutePreloadSession> routePreloadSession;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property(retain, nonatomic) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
- (void)setRouteContext:(id)arg1;
- (void)setNavCameraIsDetached:(BOOL)arg1;
- (void)setCurrentLocationText:(id)arg1;
@property(nonatomic) struct PolylineCoordinate routeUserOffset;
- (void)labelModelDidLayoutLabels:(id)arg1;
- (void)labelModel:(id)arg1 selectedLabelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)labelModel:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (id)labelModel:(id)arg1 mapTileForTile:(id)arg2 layer:(unsigned long long)arg3;
- (void)_updateOverlayTileSource;
- (id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2;
- (void)overlayContainer:(id)arg1 showingOuterHaloOnLabelsDidChange:(BOOL)arg2;
- (BOOL)overlayContainerIsInTransitMode:(id)arg1;
- (BOOL)overlayContainerIsInNavigationMode:(id)arg1;
- (id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
@property(readonly, nonatomic) NSSet *persistentOverlays;
@property(readonly, nonatomic) NSArray *overlays;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *rasterOverlays;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)removeRasterOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (void)_updateRasterOverlayZoomOverride;
- (void)_updateTileExclusionAreas;
- (id)_rasterOverlayTileSourceForLevel:(unsigned long long)arg1;
- (id)boundsForSelectedTransitLines;
- (void)deselectTransitLineMarker;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedTransitLineIDs;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (id)transitLineMarkersInCurrentViewport;
- (void)debugHighlightFeatureMarker:(const shared_ptr_430519ce *)arg1;
@property(nonatomic) BOOL labelMarkerSelectionEnabled;
@property(readonly, nonatomic) shared_ptr_2d33c5e4 selectedLabelMarker;
- (void)deselectLabelMarker;
- (void)selectLabelMarker:(const shared_ptr_2d33c5e4 *)arg1;
- (vector_af4a736d)labelMarkers;
- (shared_ptr_2d33c5e4)labelMarkerForCustomFeatureAnnotation:(id)arg1 dataSource:(id)arg2;
- (shared_ptr_2d33c5e4)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2;
- (shared_ptr_27db7edb)closestRoadMarkerForSelectionAtPoint:(struct CGPoint)arg1;
- (vector_8bf6b0e5)roadMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (shared_ptr_27db7edb)roadMarkerForSelectionAtPoint:(struct CGPoint)arg1;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1;
- (id)annotationMarkers;
- (void)addSubmodel:(id)arg1;
@property(readonly, nonatomic) BOOL isFullyDrawn;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (void)buildingsDidBecome3D:(_Bool)arg1;
- (void)reserveStencilRangesForScene:(id)arg1 context:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)updateRasterOverlayProviders:(id)arg1 withContext:(struct LayoutContext *)arg2;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (double)northYawAtZoom:(int)arg1;
- (void)updateMapDrawStyleWithContext:(struct LayoutContext *)arg1;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2;
- (void)tileProviderNeedsUpdate:(id)arg1;
- (void)_transitionFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3;
- (void)_beginNavMapModeTransitionToMode:(unsigned char)arg1;
- (void)_updateZoomLevel:(struct LayoutContext *)arg1;
- (double)maxTileHeightAtPoint:(Mercator2_57ec32b6)arg1;
- (long long)maximumZoomLevelInView:(id)arg1;
- (long long)minimumZoomLevelInView:(id)arg1;
- (long long)tileSize;
- (void)_forceLayout;
- (void)_localeChanged:(id)arg1;
- (void)shouldFlushCaches:(id)arg1;
- (void)cancelTileRequests;
- (void)flushCaches:(BOOL)arg1;
- (void)clearScene;
- (BOOL)isShowingNoDataPlaceholders;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)addCustomFeatureDataSource:(id)arg1;
@property(retain, nonatomic) NSArray *customFeatureDataSources;
@property(retain, nonatomic) NSArray *externalTrafficIncidents;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 purpose:(unsigned long long)arg2 manifestConfiguration:(id)arg3 locale:(id)arg4;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)createTrafficTileSourceIfNecessary:(id)arg1;
@property(nonatomic) unsigned char applicationUILayout;
@property(nonatomic) struct VehicleState vehicleState;
@property(nonatomic) unsigned char targetDisplay;
@property(nonatomic) double lodBias;
- (void)reloadStylesheet;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1 forRealistic:(_Bool)arg2;
- (void)performStylesheetDidReload;
- (void)performStylesheetDoneChanging;
- (void)performStylesheetDidChange;
- (void)performStylesheetTransitionDidProgress;
- (void)performStylesheetWillTransitionToDisplayStyle:(struct DisplayStyle)arg1;
- (void)_setStyleManagerFromMapType:(long long)arg1;
- (void)sizeDidChange:(struct CGSize)arg1;
- (float)_tileSelectionScaleForContext:(struct LayoutContext *)arg1;
- (void)_mapConfigurationDidChange;
- (void)_updateRegularTileProviderMode;
- (void)didEndTransitionToTransit;
- (void)didBeginTransitionToTransit;
- (void)didEndNavigation;
- (void)didBeginTransitionToNavigation;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) long long shieldIdiom;
@property(nonatomic) long long navigationShieldSize;
@property(nonatomic) long long shieldSize;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)stylesheetAnimationDidEnd:(BOOL)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle)arg1 toStyle:(struct DisplayStyle)arg2;
- (void)startStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2;
- (void)endStyleAnimationGroup;
- (void)beginStyleAnimationGroup;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2 setupHandler:(CDUnknownBlockType)arg3;
- (void)finishStyleBlend;
- (struct DisplayStyle)sourceMapDisplayStyle;
- (_Bool)supportsMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)updateOverlayType;
- (void)setMapType:(long long)arg1 animated:(BOOL)arg2;
- (void)_transitFadeOutCompletionCallback;
@property(readonly, nonatomic) BOOL showingTrafficCasing;
- (void)forceMapType:(long long)arg1 animated:(BOOL)arg2;
- (id)createSourceForLayer:(unsigned long long)arg1 useAdditionalManifest:(BOOL)arg2;
- (void)configureTileSources;
- (id)tileProviderForMapLayer:(unsigned long long)arg1;
- (void)clearTileSources;
- (void)_deactivateModel:(id)arg1;
- (void)_activateModel:(id)arg1;
- (_Bool)_modelIsActive:(id)arg1;
- (id)tileSetForMapLayer:(unsigned long long)arg1 tileGroup:(id)arg2;
- (id)createSourceForLayer:(unsigned long long)arg1 tileSet:(id)arg2 useAdditionalManifest:(BOOL)arg3;
- (_Bool)canPitch;
- (int)tileStyleForMapLayer:(unsigned long long)arg1;
@property(nonatomic) unsigned char labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
- (float)ppi;
- (void)setDesiredMapMode:(long long)arg1 immediate:(BOOL)arg2;
@property(readonly, nonatomic) VKMercatorTerrainHeightCache *terrainHeightCache;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (void)disableRoadClass:(BOOL)arg1 withRoadClass:(int)arg2;
@property(readonly, nonatomic) VKTileProvider *tileProvider;
- (void)foreachActiveLayer:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long neighborMode;
@property(readonly, nonatomic) const struct TrafficSharedResources *trafficResources;
@property(nonatomic) BOOL shouldLoadFallbackTiles;
- (id)transitModel;
- (id)debugModel;
- (id)overlayContainerModel;
- (id)annotationModel;
- (id)roadTrafficModel;
- (id)hybridRoadModel;
- (id)roadModel;
- (id)polygonModel;
- (id)riverLineModel;
- (id)hybridRasterModel;
- (id)rasterModel;
- (id)skyModel;
- (id)gridModel;
- (id)labelModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
