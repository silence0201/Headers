//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIContext.h>

@interface CICGContext : CIContext
{
    struct CICGContextPrivate *_cgPriv;
}

+ (id)contextWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
+ (id)contextWithCGContext:(struct CGContext *)arg1;
- (id)initWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
- (id)initWithCGContext:(struct CGContext *)arg1;

@end
