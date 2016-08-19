//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIPopoverBackgroundViewMethods-Protocol.h>

@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods>
{
}

+ (_Bool)wantsDefaultContentAppearance;
+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1;
+ (double)cornerRadius;
+ (struct UIEdgeInsets)contentViewInsets;
+ (double)arrowBase;
+ (double)arrowHeight;
- (long long)backgroundStyle;
- (void)layoutSubviews;
- (struct CGRect)_backgroundContentViewFrame;
- (struct CGRect)_contentViewFrame;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateShadow;
- (id)_shadowPath;
- (struct CGSize)_shadowOffset;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (struct UIEdgeInsets)_shadowInsets;
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;
- (_Bool)_wantsDefaultContentAppearance;
- (struct UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned long long)arg1;
- (struct UIEdgeInsets)_contentViewInsets;
@property(nonatomic) unsigned long long arrowDirection;
@property(nonatomic) double arrowOffset;

@end

