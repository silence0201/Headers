//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBRenderFactory_Emoji.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryEmoji_iPad_Split : UIKBRenderFactory_Emoji
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (struct CGPoint)emojiInternationalKeyOffset;
- (double)emojiInternationalKeySize;
- (struct CGPoint)emojiPopupTextOffset;
- (double)keyCornerRadius;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;

@end

