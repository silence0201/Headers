//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton;

@interface AMActionRelevanceRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *leftExpressionPopup;
    NSPopUpButton *operatorPopup;
    NSPopUpButton *rightExpressionPopup;
    BOOL hasCreatedViews;
}

- (double)matchForPredicate:(id)arg1;
- (id)predicateWithSubpredicates:(id)arg1;
- (void)setPredicate:(id)arg1;
- (id)templateViews;
- (void)createViewsIfNecessary;
- (void)dealloc;

@end

