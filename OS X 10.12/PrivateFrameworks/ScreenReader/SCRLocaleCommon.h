//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/SCRLocaleInfoProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRLocaleCommon : NSObject <SCRLocaleInfoProviding>
{
    unsigned long long _characterDirection;
}

@property(readonly, nonatomic) unsigned long long characterDirection; // @synthesize characterDirection=_characterDirection;
@property(readonly, nonatomic) BOOL isLocaleCharacterDirectionRightToLeft;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
