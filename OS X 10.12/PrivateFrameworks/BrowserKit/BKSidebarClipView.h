//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSClipView.h>

__attribute__((visibility("hidden")))
@interface BKSidebarClipView : NSClipView
{
    id _delegate;
    BOOL _usesInsetColors;
}

@property BOOL usesInsetColors; // @synthesize usesInsetColors=_usesInsetColors;
@property id delegate; // @synthesize delegate=_delegate;
- (id)menuForEvent:(id)arg1;
- (id)backgroundColor;

@end
