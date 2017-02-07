//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

@interface NSProApplication : NSApplication
{
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (void)_setActionDelegate:(id)arg1;
- (void)endModalSession:(struct _NSModalSession *)arg1;
- (struct _NSModalSession *)_commonBeginModalSessionForWindow:(id)arg1 relativeToWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)terminate:(id)arg1;
- (BOOL)_shouldTerminate;
- (id)targetForAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (BOOL)_handleKeyEquivalent:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)_handleContrastLiveChangeTestWithEvent:(id)arg1;
- (void)_lookDidChange;
- (void)finishLaunching;
- (BOOL)_delegateDisabledGradationChanges;
- (void)setMainMenu:(id)arg1;
- (BOOL)_useProMenubarPreference;
- (void)_addShowCharacterPaletteCommand;
- (void)_installLookGradationMenuItems;
- (void)_installModuleLayoutMenuItems;
- (BOOL)_shouldInstallModuleLayoutMenuItems;
- (void)_registerLookGradationHotKeysAndDistributedNotification;
- (void)_registerLookGradationHotKeysForF1F2;
- (void)_registerLookGradationHotKeysForEmbeddedKeyboard;
- (BOOL)isKeyboardExternalEmbedded;
- (void)_updateContrastControlToLookGradation:(long long)arg1;
- (void)_fadeOutContrastControl:(id)arg1;
- (void)_minimizeLookContrast:(id)arg1;
- (void)_maximizeLookContrast:(id)arg1;
- (void)_changeLookGradation:(id)arg1;
- (void)_contrastGradationChangeDistributedNotification:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_didFinishLaunching;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (void)dealloc;
- (id)versionCreditsString;
- (void)orderOutProSplash:(id)arg1;
- (void)orderFrontProSplash:(id)arg1;
- (void)orderFrontStandardAboutPanel:(id)arg1;

@end
