//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNActionGroup.h>

@class NSString;

@interface SCNActionReference : SCNActionGroup
{
    NSString *referenceName;
}

@property(copy, nonatomic) NSString *referenceName; // @synthesize referenceName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_isAReference;
- (void)dealloc;

@end

