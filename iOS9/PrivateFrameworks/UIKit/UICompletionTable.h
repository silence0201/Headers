//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>

@class NSString, UICompletionTablePrivate;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UICompletionTablePrivate *_private;
}

+ (id)_shadowImage;
+ (id)_cellFont;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)_completionForRow:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(nonatomic) struct UIEdgeInsets scrollIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (void)setTopStrokeColor:(id)arg1;
- (void)reloadData;
@property(nonatomic) id delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

