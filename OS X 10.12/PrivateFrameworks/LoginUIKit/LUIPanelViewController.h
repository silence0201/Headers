//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LoginUIKit/LUICredViewController.h>

@class LUIPanel;

@interface LUIPanelViewController : LUICredViewController
{
    LUIPanel *_panelWindow;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)arg1;
@property(readonly) LUIPanel *panelWindow; // @synthesize panelWindow=_panelWindow;
- (id)mainWindow;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)tearDownController;
- (struct CGPoint)pointForPopover:(int)arg1;
- (struct CGRect)progressRect;
- (BOOL)usesWindow;
- (void)shake;
- (void)togglePanelStyle;
- (void)setPanelStyle:(int)arg1;
- (void)setSecureTextFieldHidden:(BOOL)arg1;
- (BOOL)secureTextFieldIsHidden;
- (void)_setupContentView;
- (void)_layoutContentView;
- (void)optionReturnHit:(id)arg1;
- (BOOL)keyPressed:(id)arg1;

@end
