//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@interface UXSegmentedControl : NSSegmentedControl
{
}

- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)removeAllSegments;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (long long)numberOfSegments;
@property BOOL userInteractionEnabled;
@property long long selectedSegmentIndex;
- (id)initWithItems:(id)arg1;

@end
