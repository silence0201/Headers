//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@interface IOBluetoothObjectPushUIController : NSWindowController
{
}

+ (id)alloc;
- (BOOL)isTransferInProgress;
- (void)setIconImage:(id)arg1;
- (id)getDevice;
- (id)getTitle;
- (void)setTitle:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (int)beginSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)stop;
- (void)runPanel;
- (void)runModal;
- (id)initObjectPushWithBluetoothDevice:(id)arg1 withFiles:(id)arg2 delegate:(id)arg3;

@end
