//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScreen.h>

@interface NSScreen (SafariNSScreenExtras)
+ (id)safari_menuBarScreen;
+ (struct CGRect)coreGraphicsScreenRectForAppKitScreenRect:(struct CGRect)arg1;
+ (struct CGPoint)coreGraphicsScreenPointForAppKitScreenPoint:(struct CGPoint)arg1;
+ (id)shortestScreen;
+ (id)screenForMouseLocation;
+ (id)safari_screenForPoint:(struct CGPoint)arg1;
- (struct CGRect)safari_visibleFrame;
@end

