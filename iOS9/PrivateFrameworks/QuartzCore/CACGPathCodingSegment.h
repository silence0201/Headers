//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/NSCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface CACGPathCodingSegment : NSObject <NSCoding>
{
    int _type;
    struct CGPoint _points[3];
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addToCGPath:(struct CGPath *)arg1;
- (id)initWithCGPathElement:(const struct CGPathElement *)arg1;

@end

