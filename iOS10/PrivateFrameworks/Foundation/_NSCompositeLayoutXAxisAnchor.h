//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLayoutXAxisAnchor.h>

#import <Foundation/NSCompositeLayoutAnchor-Protocol.h>

@class NSArray, NSLayoutDimension;

@interface _NSCompositeLayoutXAxisAnchor : NSLayoutXAxisAnchor <NSCompositeLayoutAnchor>
{
    NSLayoutXAxisAnchor *_xAxisAnchor;
    double _constant;
    double _dimensionMultiplier;
    NSLayoutDimension *_dimension;
}

- (long long)_directionAbstraction;
@property(readonly) NSArray *_childAnchors;
- (id)equationDescription;
- (double)_valueInEngine:(id)arg1;
- (id)_expressionInContext:(CDStruct_6db0658e)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithAnchor:(id)arg1;
- (id)initWithAnchor:(id)arg1 plusDimension:(id)arg2 times:(double)arg3 plus:(double)arg4;

@end

