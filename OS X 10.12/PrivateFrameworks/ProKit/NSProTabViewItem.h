//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTabViewItem.h>

@class NSView;

@interface NSProTabViewItem : NSTabViewItem
{
    NSView *_accessoryView;
    int _rodStyle;
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (void)initialize;
- (void)setAccessoryView:(id)arg1;
- (id)accessoryView;
- (void)setPreferredRodStyle:(int)arg1;
- (int)preferredRodStyle;
- (id)_labelColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

