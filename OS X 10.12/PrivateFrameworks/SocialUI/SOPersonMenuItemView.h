//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSString, NSTextField;

@interface SOPersonMenuItemView : NSView
{
    NSImageView *_checkmarkImageView;
    NSTextField *_titleTextField;
    NSTextField *_labelTextField;
    NSImageView *_iconImageView;
}

@property(retain) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain) NSTextField *labelTextField; // @synthesize labelTextField=_labelTextField;
@property(retain) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain) NSImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)init;
@property(copy) NSString *label;
@property(copy) NSString *title;

@end

