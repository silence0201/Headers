//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class CalUILabel, NSColor;

@interface EKUIAutocompleteView : NSTableCellView
{
    NSColor *_originalTextColor;
    CalUILabel *_label;
}

@property(retain) CalUILabel *label; // @synthesize label=_label;
@property(retain) NSColor *originalTextColor; // @synthesize originalTextColor=_originalTextColor;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;
- (id)initWithViewController:(id)arg1;

@end
