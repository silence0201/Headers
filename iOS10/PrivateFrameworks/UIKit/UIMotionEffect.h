//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/NSCopying-Protocol.h>

@class NSString, _UIMotionAnalyzerSettings;

@interface UIMotionEffect : NSObject <NSCopying, NSCoding>
{
    _UIMotionAnalyzerSettings *_preferredMotionAnalyzerSettings;
    NSString *_animationIdentifier;
}

- (void).cxx_destruct;
- (id)_animationIdentifier;
- (void)_setPreferredMotionAnalyzerSettings:(id)arg1;
- (id)_preferredMotionAnalyzerSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;
- (id)init;

@end

