//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SecurityInterface/SFPasswordAsstController.h>

@class NSTextField, SFPasswordAssistantInspectorController, SFPasswordStrengthTextField;

__attribute__((visibility("hidden")))
@interface SFPasswordStrengthController : SFPasswordAsstController
{
    NSTextField *_pwStrengthStr;
    SFPasswordStrengthTextField *_pwStrengthTitleStr;
    SFPasswordAssistantInspectorController *insp;
    struct _NSRange _pwdStrengthWeakRange;
    struct _NSRange _pwdStrengthFairRange;
    struct _NSRange _pwdStrengthGoodRange;
    unsigned long long _pwdStrengthExcellent;
}

- (void)setNewPasswordField:(id)arg1;
- (void)_setPasswordStrengthTitleToolTip:(id)arg1;
- (void)_setPasswordStrengthTitleString:(id)arg1;
- (void)_setPasswordStrengthString:(id)arg1;
- (void)_pwaDidUpdateNewPasswordField:(id)arg1;
- (void)_setInspectorController:(id)arg1;
- (void)_reCalcQualityBarWidth;
- (id)init;
- (void)controlTextDidCh:(id)arg1;
- (void)updateStrengthBar:(id)arg1;
- (void)setExcellentEntropy:(unsigned long long)arg1;
- (void)setGoodEntropyRange:(struct _NSRange)arg1;
- (void)setFairEntropyRange:(struct _NSRange)arg1;
- (void)setWeakEntropyRange:(struct _NSRange)arg1;

@end
