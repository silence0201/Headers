//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UITabBarItem, UIView;

__attribute__((visibility("hidden")))
@interface UITabBarItemProxy : NSObject
{
    UITabBarItem *_item;
    UIView *_view;
}

- (id)view;
- (id)item;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1;
- (id)initWithItem:(id)arg1 inTabBar:(id)arg2;

@end

