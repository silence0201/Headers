//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIAppearance.h>

@class UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UITraitBasedAppearance : _UIAppearance
{
    UITraitCollection *_traitCollection;
}

+ (id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;
+ (_Bool)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3;
+ (_Bool)_hasAnyCustomizations;
+ (void)_setHasAnyCustomizations;
- (id)_traitCollection;
- (void)_invalidateAppearanceInWindow:(id)arg1;
- (_Bool)_isValidAppearanceForCustomizableObject:(id)arg1;
- (void)dealloc;

@end

