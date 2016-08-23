//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSImage, NSImageView, NSProgressIndicator, NSString, NSTextField, NSTrackingArea;

@interface NSNavProgressStatusViewController : NSViewController
{
    NSProgressIndicator *_progress;
    NSTextField *_titleText;
    NSTextField *_messageText;
    NSButton *_cancelButton;
    NSImageView *_imageView;
    NSImageView *_badgeView;
    NSTrackingArea *_cancelButtonTrackingArea;
    NSString *_titleString;
    NSString *_messageString;
    NSString *_cancelMessageString;
    NSImage *_image;
    NSImage *_badgeImage;
    BOOL _indeterminate;
    BOOL _hasCancel;
    long long _percentComplete;
}

@property long long percentComplete; // @synthesize percentComplete=_percentComplete;
@property BOOL hasCancel; // @synthesize hasCancel=_hasCancel;
@property BOOL indeterminate; // @synthesize indeterminate=_indeterminate;
@property(retain) NSImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *cancelMessageString; // @synthesize cancelMessageString=_cancelMessageString;
@property(copy) NSString *messageString; // @synthesize messageString=_messageString;
@property(copy) NSString *titleString; // @synthesize titleString=_titleString;
@property(readonly, retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)cancel:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)loadView;
- (void)_updateTrackingAreas:(id)arg1;
- (void)dealloc;
- (id)init;

@end
