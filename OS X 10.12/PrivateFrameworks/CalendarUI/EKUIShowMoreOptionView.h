//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUI/CalUIControlView.h>

#import <CalendarUI/NSAccessibilityButton-Protocol.h>

@class EKUIResizingTextField, NSString;
@protocol EKUIShowMoreOptionViewDelegate;

@interface EKUIShowMoreOptionView : CalUIControlView <NSAccessibilityButton>
{
    BOOL _isWaitingForResults;
    id <EKUIShowMoreOptionViewDelegate> _delegate;
    EKUIResizingTextField *_showMoreTextField;
}

@property(retain) EKUIResizingTextField *showMoreTextField; // @synthesize showMoreTextField=_showMoreTextField;
@property(nonatomic) BOOL isWaitingForResults; // @synthesize isWaitingForResults=_isWaitingForResults;
@property __weak id <EKUIShowMoreOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

