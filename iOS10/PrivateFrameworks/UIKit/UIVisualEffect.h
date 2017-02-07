//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@class _UIBackdropViewSettings, _UIVisualEffectConfig;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>
{
    _Bool __isATVStyle;
    _Bool __isAutomaticStyle;
    _UIBackdropViewSettings *_effectSettings;
    _UIVisualEffectConfig *_effectConfig;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _UIVisualEffectConfig *effectConfig; // @synthesize effectConfig=_effectConfig;
@property(readonly, nonatomic) _Bool _isAutomaticStyle; // @synthesize _isAutomaticStyle=__isAutomaticStyle;
@property(readonly, nonatomic) _Bool _isATVStyle; // @synthesize _isATVStyle=__isATVStyle;
@property(readonly, nonatomic) _UIBackdropViewSettings *effectSettings; // @synthesize effectSettings=_effectSettings;
- (void).cxx_destruct;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectConfigForQuality:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

