//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface SiriUIImageMaskView : NSView
{
    NSImage *_maskImage;
}

+ (id)imageMaskViewWithImage:(id)arg1;
+ (id)imageMaskViewWithDefaultChevron;
@property(retain, nonatomic) NSImage *maskImage; // @synthesize maskImage=_maskImage;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setMaskColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

