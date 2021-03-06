//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPKPopover, CPKPopoverController, CPKWindowTitleView, NSButton, NSWindow;
@protocol CPKCharacterEntity;

__attribute__((visibility("hidden")))
@interface CPKWindowPrivateStorage : NSObject
{
    CPKPopover *_parentPopover;
    CPKPopoverController *_smallViewController;
    NSButton *_smallViewCloseButton;
    CPKWindowTitleView *_smallViewTitleField;
    struct CGRect _lastWindowFrame;
    NSWindow *_lastKeyWindow;
    BOOL _bringBackLastKeyWindow;
    BOOL _transformPrepared;
    BOOL _transformFromPopover;
    BOOL _nowTransforming;
    id <CPKCharacterEntity> _pendingCharacter;
    CDUnknownBlockType _measureFramerateBlock;
}

@property(copy) CDUnknownBlockType measureFramerateBlock; // @synthesize measureFramerateBlock=_measureFramerateBlock;
@property BOOL nowTransforming; // @synthesize nowTransforming=_nowTransforming;
@property BOOL transformFromPopover; // @synthesize transformFromPopover=_transformFromPopover;
@property BOOL transformPrepared; // @synthesize transformPrepared=_transformPrepared;
@property(retain) id <CPKCharacterEntity> pendingCharacter; // @synthesize pendingCharacter=_pendingCharacter;
@property BOOL bringBackLastKeyWindow; // @synthesize bringBackLastKeyWindow=_bringBackLastKeyWindow;
@property struct CGRect lastWindowFrame; // @synthesize lastWindowFrame=_lastWindowFrame;
@property NSWindow *lastKeyWindow; // @synthesize lastKeyWindow=_lastKeyWindow;
@property(retain) CPKWindowTitleView *smallViewTitleField; // @synthesize smallViewTitleField=_smallViewTitleField;
@property(retain) NSButton *smallViewCloseButton; // @synthesize smallViewCloseButton=_smallViewCloseButton;
@property(retain) CPKPopoverController *smallViewController; // @synthesize smallViewController=_smallViewController;
@property CPKPopover *parentPopover; // @synthesize parentPopover=_parentPopover;
- (void)dealloc;

@end

