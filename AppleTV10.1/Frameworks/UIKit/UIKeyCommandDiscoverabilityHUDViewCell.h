//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, UIKeyCommandDiscoverabilityHUDColumnView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDViewCell : UICollectionViewCell
{
    _Bool _constraintsForTwoColumns;
    UIKeyCommandDiscoverabilityHUDColumnView *_leftColumnView;
    UIKeyCommandDiscoverabilityHUDColumnView *_rightColumnView;
    NSArray *_constraints;
}

@property(nonatomic) _Bool constraintsForTwoColumns; // @synthesize constraintsForTwoColumns=_constraintsForTwoColumns;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *rightColumnView; // @synthesize rightColumnView=_rightColumnView;
@property(retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *leftColumnView; // @synthesize leftColumnView=_leftColumnView;
- (void).cxx_destruct;

@end
