//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface UIWebOverflowContentView : UIView
{
    CALayer *_webLayer;
}

@property(retain, nonatomic) CALayer *webLayer; // @synthesize webLayer=_webLayer;
- (void)_setCachedSubviews:(id)arg1;
- (void)fixUpViewAfterInsertion;
- (id)superview;
- (void)willBeRemoved;
- (void)replaceLayer:(id)arg1;
- (id)initWithLayer:(id)arg1;

@end

