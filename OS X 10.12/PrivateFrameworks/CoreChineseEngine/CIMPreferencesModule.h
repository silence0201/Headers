//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPreferencesModule.h>

@class CIMPreferences, NSString;

@interface CIMPreferencesModule : NSPreferencesModule
{
    NSString *_inputSourceIdentifier;
    id _notificationObserver;
}

@property(retain, nonatomic) id notificationObserver; // @synthesize notificationObserver=_notificationObserver;
@property(copy, nonatomic) NSString *inputSourceIdentifier; // @synthesize inputSourceIdentifier=_inputSourceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) CIMPreferences *preferences;
- (void)dealloc;
- (id)init;

@end

