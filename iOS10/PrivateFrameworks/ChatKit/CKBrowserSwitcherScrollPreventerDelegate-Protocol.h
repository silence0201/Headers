//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserSwitcherScrollPreventer;

@protocol CKBrowserSwitcherScrollPreventerDelegate <NSObject>
- (void)scrollPreventerDidLayoutSubviews:(CKBrowserSwitcherScrollPreventer *)arg1;
- (void)scrollPreventerDidEndDecelerating:(CKBrowserSwitcherScrollPreventer *)arg1;
- (void)scrollPreventer:(CKBrowserSwitcherScrollPreventer *)arg1 scrolledToOffset:(struct CGPoint)arg2;
- (void)scrollPreventerWillBeginDragging:(CKBrowserSwitcherScrollPreventer *)arg1;
@end
