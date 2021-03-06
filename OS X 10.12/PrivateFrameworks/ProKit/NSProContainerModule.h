//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProKit/NSProViewModule.h>

@interface NSProContainerModule : NSProViewModule
{
    void *_proContainerModuleUnused1;
    unsigned int _layerBackedContainer:1;
    unsigned int _moduleIsTornOut:1;
    unsigned int _isApplyingLayout:1;
    unsigned int _proReserved:29;
}

+ (void)setDraggedModule:(id)arg1;
+ (id)draggedModule;
+ (double)animationDuration;
@property BOOL moduleIsTornOut;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (void)moduleDidChangeLabel:(id)arg1;
@property BOOL showWindowFooter;
@property BOOL canRearrangeLayout;
- (void)startDraggingModule:(id)arg1;
- (BOOL)layerBackedContainer;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (id)moduleForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (BOOL)loadView;
- (BOOL)isSubmoduleVisible:(id)arg1;
- (id)visibleSubmodules;
- (id)makeSubmoduleVisible:(id)arg1;
- (void)hideSubmoduleWithIdentifier:(id)arg1 revealStyle:(long long)arg2;
- (void)hideSubmoduleWithIdentifier:(id)arg1;
- (void)showSubmoduleWithIdentifier:(id)arg1 revealStyle:(long long)arg2;
- (void)showSubmoduleWithIdentifier:(id)arg1;
- (BOOL)isSubmoduleHidden:(id)arg1;
- (BOOL)unhideSubmodule:(id)arg1;
- (BOOL)hideSubmodule:(id)arg1;
- (void)swapSubmoduleWithIdentifier:(id)arg1 withSubmoduleWithIdentifier:(id)arg2;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)applySubLayout:(id)arg1;
- (void)applySubLayout:(id)arg1 animate:(BOOL)arg2;
- (void)postLayout:(id)arg1;
- (void)takeGeometryLayoutFromDictionary:(id)arg1;
- (void)preLayout:(id)arg1;
- (id)layoutDictionary;
- (id)customContentSeparatorColorForState:(BOOL)arg1;
- (BOOL)moduleEnforcesViewMinSize;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)_containerNodeFromSubmodule:(id)arg1;
- (void)_updateCurrentSublayoutWithTree:(id)arg1;
- (id)_ancestorContainerModule;
- (void)_setIsLayerBackedContainer:(BOOL)arg1;
- (void)setIsApplyingLayout:(BOOL)arg1;
- (BOOL)isApplyingLayout;
- (id)newContainerViewForWinModule:(id)arg1 usingLayout:(id)arg2 contentSize:(struct CGSize)arg3;
- (id)cleanedDictionaryFrom:(id)arg1;

@end

