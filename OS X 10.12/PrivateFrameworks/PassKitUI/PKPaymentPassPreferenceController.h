//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentPreferenceController.h>

@class PKPaymentPreferenceContact;

@interface PKPaymentPassPreferenceController : PKPaymentPreferenceController
{
    PKPaymentPreferenceContact *_billingPreference;
}

@property(retain, nonatomic) PKPaymentPreferenceContact *billingPreference; // @synthesize billingPreference=_billingPreference;
- (void).cxx_destruct;
- (void)_setupPreferences;
- (long long)numberOfMenuItemsInSection:(long long)arg1;
- (void)updatePreferences;
- (void)setModel:(id)arg1;

@end

