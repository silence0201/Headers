//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCalibratedRGBColor.h>

@interface NSDeviceRGBColor : NSCalibratedRGBColor
{
}

+ (id)_cachedLookupWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)colorSpace;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(double)arg1;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1;

@end

