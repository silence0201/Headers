//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ContactsUI/CNQuickActionsManagerDelegate-Protocol.h>
#import <ContactsUI/UICollectionViewDataSource-Protocol.h>
#import <ContactsUI/UICollectionViewDelegate-Protocol.h>

@class CNContact, CNQuickActionsManager, NSArray, NSDictionary, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol CNQuickActionsViewDelegate;

@interface CNQuickActionsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, CNQuickActionsManagerDelegate>
{
    _Bool _sortsWithDuet;
    CNContact *_contact;
    NSArray *_categories;
    NSDictionary *_titleTextAttributes;
    id <CNQuickActionsViewDelegate> _delegate;
    CNQuickActionsManager *_actionsManager;
    NSArray *_actions;
    UICollectionViewFlowLayout *_collectionLayout;
    UICollectionView *_collectionView;
    struct CGSize _cachedContentSize;
}

+ (id)actionsManagerForContact:(id)arg1;
+ (id)defaultCategories;
+ (_Bool)hasActionsForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) struct CGSize cachedContentSize; // @synthesize cachedContentSize=_cachedContentSize;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CNQuickActionsManager *actionsManager; // @synthesize actionsManager=_actionsManager;
@property(nonatomic) __weak id <CNQuickActionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
@property(nonatomic) _Bool sortsWithDuet; // @synthesize sortsWithDuet=_sortsWithDuet;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)actionsManager:(id)arg1 actionDidPerform:(id)arg2;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
@property(readonly, nonatomic) double maximumWidth;
- (double)_widthForButtonCount:(long long)arg1 itemSize:(struct CGSize *)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)willMoveToWindow:(id)arg1;
- (void)updateContentSize;
- (void)reloadData;
- (void)_updateActions;
@property(nonatomic) double interspace;
- (id)initWithContact:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

