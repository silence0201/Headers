//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface HICocoaWindowContentView : NSView
{
    BOOL _didReceiveEvent;
}

- (BOOL)_receivedEvent;
- (void)_resetEventReceivedFlag;
- (void)scrollWheel:(id)arg1;
- (struct OpaqueControlRef *)getContentHIView;
- (void)invalidateHICocoaViewSubViewsOf:(struct OpaqueControlRef *)arg1 withInvalidRect:(struct CGRect)arg2 ofView:(struct OpaqueControlRef *)arg3;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (id)_accessibilityParentForSubview:(id)arg1;

@end

