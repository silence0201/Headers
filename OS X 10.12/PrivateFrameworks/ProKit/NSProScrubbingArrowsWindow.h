//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface NSProScrubbingArrowsWindow : NSWindow
{
    NSTimer *selfDestructTimer;
    struct CGRect referenceFrame;
}

- (void)finalize;
- (void)dealloc;
- (void)selfDestructIfNecessaryWithTimer:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)startSelfDestructTimer;
- (void)setReferenceFrame:(struct CGRect)arg1;
- (struct CGRect)referenceFrame;

@end

