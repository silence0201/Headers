//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLObject.h>

@class NSString;

@interface MDLLight : MDLObject
{
    struct RTLight *_light;
    NSString *_colorSpace;
    struct CGColorSpace *_cgColorSpace;
    unsigned long long _lightType;
}

@property(nonatomic) unsigned long long lightType; // @synthesize lightType=_lightType;
- (void).cxx_destruct;
-     // Error parsing type: 16@0:8, name: position
- (void)setTransform:(id)arg1;
- (struct CGColor *)irradianceAtPoint:(struct CGColorSpace *)arg1 colorSpace: /* Error: Ran out of types for this method. */;
- (struct CGColor *)irradianceAtPoint: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) struct RTLight *rtLight;
- (void)dealloc;
- (id)init;
@property(copy, nonatomic) NSString *colorSpace;

@end

