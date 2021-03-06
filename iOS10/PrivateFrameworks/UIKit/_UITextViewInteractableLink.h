//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UITextViewInteractableItem.h>

#import <UIKit/DDDetectionControllerInteractionDelegate-Protocol.h>

@class LSAppLink, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UITextViewInteractableLink : _UITextViewInteractableItem <DDDetectionControllerInteractionDelegate>
{
    NSURL *_link;
    LSAppLink *_appLink;
}

+ (id)interactableLinkWithURL:(id)arg1 range:(struct _NSRange)arg2 subRange:(struct _NSRange)arg3;
@property(retain, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (void)actionDidFinish:(id)arg1;
- (void)action:(id)arg1 didDismissAlertController:(id)arg2;
- (void)_dataDetectorAction:(id)arg1;
- (void)_linkInteractionShareLink;
- (void)_linkInteractionCopyLink;
- (_Bool)_isMobileSafariRestricted;
- (void)_linkInteractionAddToReadingList;
- (void)_linkInteractionOpenURLInExternalApplication;
- (void)_linkInteractionOpenURLInDefaultBrowser;
- (void)_linkInteractionOpenURL;
- (_Bool)_linkInteractionPerformDefaultAction;
- (id)dataDetectorActionsForTextView:(id)arg1;
- (id)linkActions;
- (id)defaultAction;
- (id)actions;
- (_Bool)allowInteraction:(long long)arg1;
- (id)localizedTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

