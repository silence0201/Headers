//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AppKit/NSCollectionViewElement-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>

@class NSArray, NSCollectionView, NSData, NSImageView, NSString, NSTextField;

@interface NSCollectionViewItem : NSViewController <NSCopying, NSCollectionViewElement>
{
    NSCollectionView *_collectionView;
    struct {
        unsigned int isSelected:1;
        unsigned int suppressSelectionChangedNotification:1;
        unsigned int connectionsCopied:1;
        unsigned int highlightState:2;
        unsigned int wasDequeued:1;
        unsigned int stayHiddenAwaitingReuse:1;
        unsigned int stayHiddenAfterReuse:1;
        unsigned int updateAnimationCount:16;
        unsigned int dragging:1;
        unsigned int reserved:7;
    } _cviFlags;
    NSData *_cachedArchive;
    id _reserved2;
}

@property(readonly, copy) NSString *description;
- (id)_nibWithName:(id)arg1 bundle:(id)arg2;
- (id)representedObject;
@property(readonly) NSArray *draggingImageComponents;
- (id)_draggingItemView;
- (id)_draggingImageForView:(id)arg1;
- (void)_setDragging:(BOOL)arg1;
- (BOOL)_dragging;
- (BOOL)_hasOpaquePartsInRect:(struct CGRect)arg1;
@property NSTextField *textField;
@property NSImageView *imageView;
- (void)viewDidLoad;
- (BOOL)_isLoaded;
- (BOOL)_shouldLoadFromNib;
- (void)_setSelectedWithoutNotification:(BOOL)arg1;
- (BOOL)_needsToCopyConnections;
- (id)_declaredKeys;
- (void)_setCollectionView:(id)arg1;
@property(readonly) NSCollectionView *collectionView;
@property(getter=isSelected) BOOL selected;
- (void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
@property long long highlightState;
- (void)_setReuseIdentifier:(id)arg1;
- (id)reuseIdentifier;
- (void)prepareForReuse;
- (BOOL)_isHiddenForReuse;
- (void)_setHiddenForReuse:(BOOL)arg1;
- (void)_markAsDequeued;
- (BOOL)_wasDequeued;
- (void)_clearUpdateAnimation;
- (void)_addUpdateAnimation;
- (BOOL)_isInUpdateAnimation;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setBaseLayoutAttributes:(id)arg1;
- (id)_layoutAttributes;
- (void)_copyConnectionsToItem:(id)arg1;
- (void)_copyConnectionsOfObject:(id)arg1 prototypeItem:(id)arg2 toObject:(id)arg3 item:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityChildren;
- (id)accessibilityParent;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (long long)accessibilityIndex;
- (BOOL)isAccessibilityElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

