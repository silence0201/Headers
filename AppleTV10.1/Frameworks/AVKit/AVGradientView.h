//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVGradientView : UIView
{
}

+ (Class)layerClass;
@property(nonatomic) struct CGPoint endPoint;
@property(nonatomic) struct CGPoint startPoint;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSArray *locations;
@property(copy, nonatomic) NSArray *colors;
- (id)_gradientLayer;

@end
