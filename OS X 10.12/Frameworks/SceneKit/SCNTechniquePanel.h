//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

__attribute__((visibility("hidden")))
@interface SCNTechniquePanel : NSPanel
{
    id _controller;
}

+ (id)techniquePanelForView:(id)arg1;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)close;
- (void)open;
- (id)controller;
- (void)setController:(id)arg1;
- (void)dealloc;

@end

