//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCellLayoutManager.h>

@protocol ABPersonCellLayoutManagerDelegate, ABStyleProvider;

@interface ABPersonCellLayoutManager : UITableViewCellLayoutManager
{
    id <ABPersonCellLayoutManagerDelegate> _delegate;
    id <ABStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) id <ABPersonCellLayoutManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cell:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)cell:(id)arg1 willTransitionToState:(unsigned long long)arg2;
- (struct CGRect)deleteConfirmationRectForCell:(id)arg1;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)backgroundEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)backgroundStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (double)widthForCellContentViewInTableView:(id)arg1 whenEditing:(_Bool)arg2 isShowingDeleteConfirmation:(_Bool)arg3 accessoryViewBounds:(struct CGRect)arg4;
- (double)accessoryViewInsetForBounds:(struct CGRect)arg1;
- (double)deleteConfirmationWidth;
- (id)cellAsMultiCell:(id)arg1;
- (void)dealloc;

@end

