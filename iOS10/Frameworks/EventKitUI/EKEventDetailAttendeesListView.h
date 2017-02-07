//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <EventKitUI/EKEventDetailAttendeesList-Protocol.h>

@class NSArray, NSString, UIColor, UIViewController;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesListView : UIView <EKEventDetailAttendeesList>
{
    _Bool _highlighted;
    _Bool _groupsNames;
    NSArray *_accepted;
    NSArray *_maybe;
    NSArray *_declined;
    NSArray *_noReply;
    NSArray *_ungrouped;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool groupsNames; // @synthesize groupsNames=_groupsNames;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSArray *ungrouped; // @synthesize ungrouped=_ungrouped;
@property(retain, nonatomic) NSArray *noReply; // @synthesize noReply=_noReply;
@property(retain, nonatomic) NSArray *declined; // @synthesize declined=_declined;
@property(retain, nonatomic) NSArray *maybe; // @synthesize maybe=_maybe;
@property(retain, nonatomic) NSArray *accepted; // @synthesize accepted=_accepted;
- (void).cxx_destruct;
- (void)_drawColumnOfStrings:(id)arg1 inRange:(struct _NSRange)arg2 startingAtPoint:(struct CGPoint)arg3 givenWidth:(double)arg4;
- (void)drawInvitees:(id)arg1 withStatus:(id)arg2 startingAtPoint:(struct CGPoint)arg3 givenWidth:(double)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)setup;
- (double)_offsetFromOffsetToBaseline:(double)arg1 withFont:(id)arg2;
- (double)_heightForGroupOfAttendeeNames:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

