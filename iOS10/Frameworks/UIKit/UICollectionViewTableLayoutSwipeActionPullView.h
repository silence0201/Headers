//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UICollectionViewTableLayoutSwipeAction, UIColor, _UIFeedbackStatesBehavior;
@protocol UICollectionViewTableLayoutSwipeActionPullViewDelegate;

__attribute__((visibility("hidden")))
@interface UICollectionViewTableLayoutSwipeActionPullView : UIView
{
    NSMutableArray *_buttons;
    NSArray *_actions;
    UIView *_backgroundView;
    _Bool _swipeActionsDidChange;
    double _openThreshold;
    double _confirmationThreshold;
    unsigned long long _cellEdge;
    unsigned long long _state;
    double _currentOffset;
    id <UICollectionViewTableLayoutSwipeActionPullViewDelegate> _delegate;
    double _progressToConfirm;
    _UIFeedbackStatesBehavior *_feedbackBehavior;
}

@property(nonatomic) __weak _UIFeedbackStatesBehavior *feedbackBehavior; // @synthesize feedbackBehavior=_feedbackBehavior;
@property(nonatomic) double progressToConfirm; // @synthesize progressToConfirm=_progressToConfirm;
@property(nonatomic) id <UICollectionViewTableLayoutSwipeActionPullViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long cellEdge; // @synthesize cellEdge=_cellEdge;
- (void).cxx_destruct;
- (id)description;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_tappedButton:(id)arg1;
- (_Bool)_offsetMeetsConfirmationThreshold:(double)arg1 progress:(double *)arg2;
- (double)_progressToState:(unsigned long long)arg1;
- (unsigned long long)_nextStateForPullView;
- (void)moveToOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffnessFactor:(double)arg3 initialVelocity:(double)arg4;
- (void)configureWithSwipeActions:(id)arg1;
- (void)resetView;
- (void)layoutSubviews;
- (void)_rebuildButtons;
- (unsigned long long)_swipeActionCount;
- (double)_directionalMultiplier;
@property(readonly, nonatomic) double confirmationThreshold;
@property(readonly, nonatomic) double openThreshold;
@property(readonly, nonatomic) UIColor *primaryActionColor;
@property(readonly, nonatomic) _Bool hasActions;
@property(readonly, nonatomic) _Bool primaryActionResetsSwipedRow;
@property(readonly, nonatomic) _Bool primaryActionIsDestructive;
@property(readonly, nonatomic) UICollectionViewTableLayoutSwipeAction *primarySwipeAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCellEdge:(unsigned long long)arg1;

@end

