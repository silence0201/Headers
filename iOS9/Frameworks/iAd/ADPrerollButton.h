//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface ADPrerollButton : UIButton
{
    struct UIEdgeInsets _hitRectInsets;
    struct UIEdgeInsets _alignmentRectInsets;
}

+ (id)buttonWithType:(long long)arg1;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property(nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;

@end

