//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSColor, NSDictionary;

@interface _NSToolbarAuxiliary : NSObject
{
    NSColor *backgroundColor;
    NSArray *draggedTypes;
    double windowOriginOffsetWhenHidingHint;
    struct __NSToolbarMetrics *savedMetrics;
    NSDictionary *identifiedItems;
    NSArray *defaultItems;
    NSArray *allowedItems;
    NSArray *selectableItems;
    struct {
        unsigned int wiringNibConnections:1;
        unsigned int firstMoveableItemIndex:6;
        unsigned int reserved:25;
    } _tbaFlags;
    unsigned short _fullScreenAuxiliaryViewForceVisibleCounter;
    double auxMinHeight;
    double auxMaxHeight;
    double autohideHeight;
    unsigned long long originalAutoresizingMask;
}

@end

