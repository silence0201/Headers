//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/NSCopying-Protocol.h>

@class MPULayoutInterpolator, MusicArtworkPlaceholderKey, NSMutableDictionary, NSSet, NSString, UIColor;

@interface MusicEntityViewContentArtworkDescriptor : NSObject <NSCopying>
{
    NSMutableDictionary *_cachedArtworkPlaceholderImages;
    _Bool _hasValidLastUsedArtworkEdgeInsets;
    MusicArtworkPlaceholderKey *_lastUsedArtworkPlaceholderKey;
    double _lastUsedContainerViewLeadingLayoutInset;
    struct UIEdgeInsets _lastUsedArtworkEdgeInsets;
    NSString *_artworkAllowsUserInteractionProperty;
    NSString *_artworkProperty;
    NSSet *_artworkAdditionalPropertiesToPrefetch;
    double _artworkAspectRatio;
    UIColor *_artworkBackgoundColor;
    UIColor *_artworkBorderColor;
    UIColor *_artworkHighlightedBackgoundColor;
    long long _artworkContentMode;
    MPULayoutInterpolator *_artworkTrailingEdgeInsetFromLeadingLayoutInsetLayoutInterpolator;
    long long _artworkPlaceholderStyle;
    NSString *_wantsToHideBorderProperty;
    double _displayScale;
    struct CGSize _artworkSize;
    struct UIEdgeInsets _artworkEdgeInsets;
}

@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(copy, nonatomic) NSString *wantsToHideBorderProperty; // @synthesize wantsToHideBorderProperty=_wantsToHideBorderProperty;
@property(nonatomic) long long artworkPlaceholderStyle; // @synthesize artworkPlaceholderStyle=_artworkPlaceholderStyle;
@property(copy, nonatomic) MPULayoutInterpolator *artworkTrailingEdgeInsetFromLeadingLayoutInsetLayoutInterpolator; // @synthesize artworkTrailingEdgeInsetFromLeadingLayoutInsetLayoutInterpolator=_artworkTrailingEdgeInsetFromLeadingLayoutInsetLayoutInterpolator;
@property(nonatomic) struct UIEdgeInsets artworkEdgeInsets; // @synthesize artworkEdgeInsets=_artworkEdgeInsets;
@property(nonatomic) long long artworkContentMode; // @synthesize artworkContentMode=_artworkContentMode;
@property(copy, nonatomic) UIColor *artworkHighlightedBackgoundColor; // @synthesize artworkHighlightedBackgoundColor=_artworkHighlightedBackgoundColor;
@property(copy, nonatomic) UIColor *artworkBorderColor; // @synthesize artworkBorderColor=_artworkBorderColor;
@property(copy, nonatomic) UIColor *artworkBackgoundColor; // @synthesize artworkBackgoundColor=_artworkBackgoundColor;
@property(nonatomic) double artworkAspectRatio; // @synthesize artworkAspectRatio=_artworkAspectRatio;
@property(nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(copy, nonatomic) NSSet *artworkAdditionalPropertiesToPrefetch; // @synthesize artworkAdditionalPropertiesToPrefetch=_artworkAdditionalPropertiesToPrefetch;
@property(copy, nonatomic) NSString *artworkProperty; // @synthesize artworkProperty=_artworkProperty;
@property(copy, nonatomic) NSString *artworkAllowsUserInteractionProperty; // @synthesize artworkAllowsUserInteractionProperty=_artworkAllowsUserInteractionProperty;
- (void).cxx_destruct;
- (id)_grayArtworkPlaceholderImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)_missingArtworkImageNamed:(id)arg1 forSize:(struct CGSize)arg2;
- (id)artworkPlaceholderImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct UIEdgeInsets)artworkEdgeInsetsForContainerViewLayoutInsets:(struct UIEdgeInsets)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
