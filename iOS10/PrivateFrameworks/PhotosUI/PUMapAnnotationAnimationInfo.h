//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUMapAnnotationAnimationInfo : NSObject
{
    _Bool _remove;
    id _annotation;
    id _destinationAnnotation;
    long long _fadeType;
    id _annotationForCountSwap;
    long long _reason;
    struct CLLocationCoordinate2D _sourceCoordinate;
    struct CLLocationCoordinate2D _destinationCoordinate;
}

@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, retain, nonatomic) id annotationForCountSwap; // @synthesize annotationForCountSwap=_annotationForCountSwap;
@property(readonly, nonatomic) _Bool remove; // @synthesize remove=_remove;
@property(readonly, nonatomic) long long fadeType; // @synthesize fadeType=_fadeType;
@property(readonly, nonatomic) struct CLLocationCoordinate2D destinationCoordinate; // @synthesize destinationCoordinate=_destinationCoordinate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D sourceCoordinate; // @synthesize sourceCoordinate=_sourceCoordinate;
@property(readonly, retain, nonatomic) id destinationAnnotation; // @synthesize destinationAnnotation=_destinationAnnotation;
@property(readonly, retain, nonatomic) id annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (id)initWithAnnotation:(id)arg1 destinationAnnotation:(id)arg2 sourceCoordinate:(struct CLLocationCoordinate2D)arg3 destinationCoordinate:(struct CLLocationCoordinate2D)arg4 fadeType:(long long)arg5 remove:(_Bool)arg6 annotationForCountSwap:(id)arg7 reason:(long long)arg8;

@end

