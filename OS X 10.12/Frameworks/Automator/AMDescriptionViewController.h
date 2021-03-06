//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AMDescriptionViewItem, NSArrayController, NSBox, NSImageView, NSStackView, NSTextField;

@interface AMDescriptionViewController : NSViewController
{
    NSArrayController *itemsController;
    NSBox *contentBox;
    NSImageView *imageView;
    NSTextField *nameTextField;
    NSTextField *summaryTextField;
    NSStackView *itemsContainer;
    AMDescriptionViewItem *_descriptionViewItem;
}

@property(retain) AMDescriptionViewItem *descriptionViewItem; // @synthesize descriptionViewItem=_descriptionViewItem;
- (void)scrollToTop;
- (void)updatePreferredMaxLayoutWidth:(id)arg1;
- (void)loadView;
- (void)dealloc;

@end

