//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSDictionary, UICalloutBar;

@protocol UICalloutBarDelegate <NSObject>

@optional
- (void)calloutBar:(UICalloutBar *)arg1 didFinishAnimation:(NSDictionary *)arg2;
- (void)calloutBar:(UICalloutBar *)arg1 willStartAnimation:(NSDictionary *)arg2;
@end

