//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILayoutGuide.h>

#import <UIKit/UILayoutSupport-Protocol.h>

@class NSArray, NSLayoutDimension, NSLayoutYAxisAnchor, NSString;

@interface _UILayoutSpacer : UILayoutGuide <UILayoutSupport>
{
    _Bool _compatibilityGuideAllowsArchivingAsSubview;
    _Bool _horizontal;
    NSArray *_constraintsToRemoveAtRuntime;
}

+ (id)_horizontalLayoutSpacer;
+ (id)_verticalLayoutSpacer;
@property(nonatomic, getter=_isHorizontal, setter=_setHorizontal:) _Bool _horizontal; // @synthesize _horizontal;
@property(nonatomic, setter=_setCompatibilityGuideAllowsArchivingAsSubview:) _Bool _compatibilityGuideAllowsArchivingAsSubview; // @synthesize _compatibilityGuideAllowsArchivingAsSubview;
@property(copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime; // @synthesize _constraintsToRemoveAtRuntime;
- (id)_layoutVariablesWithAmbiguousValue;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) double length;
- (void)_setUpCounterDimensionConstraint;
@property(copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier;

// Remaining properties
@property(readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSLayoutDimension *heightAnchor;
@property(readonly) Class superclass;
@property(readonly) NSLayoutYAxisAnchor *topAnchor;

@end

