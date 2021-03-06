//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSTextField, NSView, _IMKCandidateBackgroundView, _IMKCandidatePopoverController, _IMKCandidateSortStyleBar, _IMKCandidateTextAttributes, _IMKCandidateView, _IMKCandidateWindowController;

@interface _IMKCandidateControllerInfo : NSObject
{
    NSMutableArray *_candidateCells;
    NSMutableDictionary *_candidatesPrivateInfo;
    NSMutableDictionary *_candidatePtrToCells;
    NSMutableArray *_pendingCandidateCells;
    _IMKCandidateTextAttributes *_cellTextAttributes;
    _IMKCandidateWindowController *_windowController;
    _IMKCandidateBackgroundView *_backgroundView;
    _IMKCandidateView *_candidateView;
    _IMKCandidateSortStyleBar *_sortBarView;
    NSTextField *_noCandidateMessageField;
    NSView *_accessoryView;
    unsigned long long _accessoryViewEdge;
    unsigned long long _accessoryViewResizeMask;
    long long _rowCount;
    double _visibleRows;
    BOOL _groupedCandidates;
    BOOL _sortStyleNamesChanged;
    long long _layoutState;
    BOOL _needsResizeOnLayout;
    BOOL _needsReflowOnLayout;
    BOOL _animateOnResize;
    BOOL _settingWindowVisibilityTo;
    BOOL _callingWindowDelegate;
    BOOL _accumulatingRequests;
    struct CGSize _layoutWindowContentSize;
    struct CGSize _layoutCandidateViewSize;
    long long _setCandidateFlagOnLayout;
    long long _topRowAfterReflow;
    long long _selectionAfterReflow;
    double _minXEdgeMargin;
    double _minYEdgeMargin;
    double _maxXEdgeMargin;
    double _maxYEdgeMargin;
    _IMKCandidatePopoverController *_popoverController;
    struct __IDXIndex *_definitionIndexRef;
}

@property(retain, nonatomic) NSMutableArray *pendingCandidateCells; // @synthesize pendingCandidateCells=_pendingCandidateCells;
@property(nonatomic) struct __IDXIndex *definitionIndexRef; // @synthesize definitionIndexRef=_definitionIndexRef;
@property(retain, nonatomic) _IMKCandidatePopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(nonatomic) double maxYEdgeMargin; // @synthesize maxYEdgeMargin=_maxYEdgeMargin;
@property(nonatomic) double maxXEdgeMargin; // @synthesize maxXEdgeMargin=_maxXEdgeMargin;
@property(nonatomic) double minYEdgeMargin; // @synthesize minYEdgeMargin=_minYEdgeMargin;
@property(nonatomic) double minXEdgeMargin; // @synthesize minXEdgeMargin=_minXEdgeMargin;
@property(nonatomic) long long selectionAfterReflow; // @synthesize selectionAfterReflow=_selectionAfterReflow;
@property(nonatomic) long long topRowAfterReflow; // @synthesize topRowAfterReflow=_topRowAfterReflow;
@property(nonatomic) long long setCandidateFlagOnLayout; // @synthesize setCandidateFlagOnLayout=_setCandidateFlagOnLayout;
@property(nonatomic) struct CGSize layoutCandidateViewSize; // @synthesize layoutCandidateViewSize=_layoutCandidateViewSize;
@property(nonatomic) struct CGSize layoutWindowContentSize; // @synthesize layoutWindowContentSize=_layoutWindowContentSize;
@property(nonatomic) BOOL accumulatingRequests; // @synthesize accumulatingRequests=_accumulatingRequests;
@property(nonatomic) BOOL callingWindowDelegate; // @synthesize callingWindowDelegate=_callingWindowDelegate;
@property(nonatomic) BOOL settingWindowVisibilityTo; // @synthesize settingWindowVisibilityTo=_settingWindowVisibilityTo;
@property(nonatomic) BOOL animateOnResize; // @synthesize animateOnResize=_animateOnResize;
@property(nonatomic) BOOL needsReflowOnLayout; // @synthesize needsReflowOnLayout=_needsReflowOnLayout;
@property(nonatomic) BOOL needsResizeOnLayout; // @synthesize needsResizeOnLayout=_needsResizeOnLayout;
@property(nonatomic) long long layoutState; // @synthesize layoutState=_layoutState;
@property(nonatomic, getter=isGroupedCandidates) BOOL groupedCandidates; // @synthesize groupedCandidates=_groupedCandidates;
@property(nonatomic) BOOL sortStyleNamesChanged; // @synthesize sortStyleNamesChanged=_sortStyleNamesChanged;
@property(nonatomic) double visibleRows; // @synthesize visibleRows=_visibleRows;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) unsigned long long accessoryViewResizeMask; // @synthesize accessoryViewResizeMask=_accessoryViewResizeMask;
@property(nonatomic) unsigned long long accessoryViewEdge; // @synthesize accessoryViewEdge=_accessoryViewEdge;
@property(retain, nonatomic) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) NSTextField *noCandidateMessageField; // @synthesize noCandidateMessageField=_noCandidateMessageField;
@property(nonatomic) _IMKCandidateSortStyleBar *sortBarView; // @synthesize sortBarView=_sortBarView;
@property(nonatomic) _IMKCandidateView *candidateView; // @synthesize candidateView=_candidateView;
@property(nonatomic) _IMKCandidateBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _IMKCandidateWindowController *windowController; // @synthesize windowController=_windowController;
@property(retain, nonatomic) _IMKCandidateTextAttributes *cellTextAttributes; // @synthesize cellTextAttributes=_cellTextAttributes;
@property(retain, nonatomic) NSMutableDictionary *candidatePtrToCells; // @synthesize candidatePtrToCells=_candidatePtrToCells;
@property(retain, nonatomic) NSMutableDictionary *candidatesPrivateInfo; // @synthesize candidatesPrivateInfo=_candidatesPrivateInfo;
@property(retain, nonatomic) NSMutableArray *candidateCells; // @synthesize candidateCells=_candidateCells;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

