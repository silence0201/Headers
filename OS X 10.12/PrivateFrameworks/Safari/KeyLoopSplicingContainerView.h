//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface KeyLoopSplicingContainerView : NSView
{
    NSView *_externalNextKeyView;
    NSView *_firstKeyView;
    NSView *_lastKeyView;
}

@property(nonatomic) __weak NSView *lastKeyView; // @synthesize lastKeyView=_lastKeyView;
@property(nonatomic) __weak NSView *firstKeyView; // @synthesize firstKeyView=_firstKeyView;
- (void).cxx_destruct;
- (void)setNextKeyView:(id)arg1;

@end
