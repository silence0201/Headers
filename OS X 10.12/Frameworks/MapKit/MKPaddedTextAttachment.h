//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextAttachment.h>

@class NSImage;

@interface MKPaddedTextAttachment : NSTextAttachment
{
    double _leadingPadding;
    double _trailingPadding;
    NSImage *_image;
    double _verticalOffset;
}

@property(nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
- (void).cxx_destruct;
@property(retain) NSImage *image; // @synthesize image=_image;
- (void)setLeadingPadding:(double)arg1 trailingPadding:(double)arg2;

@end

