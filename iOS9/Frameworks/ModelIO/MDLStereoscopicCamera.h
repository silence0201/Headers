//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLCamera.h>

@interface MDLStereoscopicCamera : MDLCamera
{
    float _interPupillaryDistance;
    float _leftVergence;
    float _rightVergence;
    float _overlap;
}

@property(nonatomic) float overlap; // @synthesize overlap=_overlap;
@property(nonatomic) float rightVergence; // @synthesize rightVergence=_rightVergence;
@property(nonatomic) float leftVergence; // @synthesize leftVergence=_leftVergence;
@property(nonatomic) float interPupillaryDistance; // @synthesize interPupillaryDistance=_interPupillaryDistance;
// Error parsing type for property rightProjectionMatrix:
// Property attributes: T{?=[4]},R,N

// Error parsing type for property leftProjectionMatrix:
// Property attributes: T{?=[4]},R,N

// Error parsing type for property rightViewMatrix:
// Property attributes: T{?=[4]},R,N

// Error parsing type for property leftViewMatrix:
// Property attributes: T{?=[4]},R,N

- (id)init;

@end
