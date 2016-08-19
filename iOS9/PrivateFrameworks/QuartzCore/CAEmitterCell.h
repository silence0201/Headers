//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/CAMediaTiming-Protocol.h>
#import <QuartzCore/CAPropertyInfo-Protocol.h>
#import <QuartzCore/NSCoding-Protocol.h>
#import <QuartzCore/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSCoding, CAMediaTiming>
{
    void *_attr[2];
    void *_state;
    unsigned int _flags;
}

+ (void)CAMLParserStartElement:(id)arg1;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)emitterCell;
+ (id)properties;
@property(copy) NSArray *emitterCells;
@property float minificationFilterBias;
@property(copy) NSString *minificationFilter;
@property(copy) NSString *magnificationFilter;
@property double contentsScale;
@property struct CGRect contentsRect;
@property(retain) id contents;
@property float alphaSpeed;
@property float alphaRange;
@property float blueSpeed;
@property float blueRange;
@property float greenSpeed;
@property float greenRange;
@property float redSpeed;
@property float redRange;
@property struct CGColor *color;
@property double spinRange;
@property double spin;
@property double rotationRange;
@property double rotation;
@property double orientationRange;
@property double orientationLongitude;
@property double orientationLatitude;
@property double scaleSpeed;
@property double scaleRange;
@property double scale;
@property double zAcceleration;
@property double yAcceleration;
@property double xAcceleration;
@property double velocityRange;
@property double velocity;
@property double emissionRange;
@property double emissionLongitude;
@property double emissionLatitude;
@property float lifetimeRange;
@property float lifetime;
@property float birthRate;
@property(copy) NSDictionary *style;
@property(getter=isEnabled) _Bool enabled;
@property(copy) NSString *name;
@property(copy) NSString *fillMode;
@property _Bool autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property float speed;
@property double duration;
@property double timeOffset;
@property double beginTime;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)debugDescription;
- (void)didChangeValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property float contentsFramesPerSecond;
@property unsigned int contentsFramesPerRow;
@property unsigned int contentsFrameCount;
@property(copy) NSString *contentsFrameMode;
@property(copy) NSArray *emitterBehaviors;
@property float massRange;
@property float mass;
@property(copy) NSString *particleType;

@end

