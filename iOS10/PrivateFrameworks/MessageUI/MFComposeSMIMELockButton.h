//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface MFComposeSMIMELockButton : UIButton
{
    UIImageView *_lockedImageView;
    UIImageView *_unlockedImageView;
    _Bool _wantsEncryption;
    _Bool _canEncrypt;
    struct UIEdgeInsets touchInsets;
}

@property(nonatomic) _Bool canEncrypt; // @synthesize canEncrypt=_canEncrypt;
@property(nonatomic) _Bool wantsEncryption; // @synthesize wantsEncryption=_wantsEncryption;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_closeLock;
- (void)_openLock;
- (void)_updateButtonAppearanceAnimated:(_Bool)arg1;
- (void)_updateButtonAppearance;
- (void)setWantsEncryption:(_Bool)arg1 canEncrypt:(_Bool)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

