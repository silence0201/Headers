//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMJSDialog, NSView, NSWindow;

@interface MMJSDialogController : NSObject
{
    NSView *_parentView;
    MMJSDialog *_mmJSDialog;
    struct OpaqueJSContext *_jsContext;
}

@property struct OpaqueJSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain) MMJSDialog *mmJSDialog; // @synthesize mmJSDialog=_mmJSDialog;
- (void)dealloc;
@property(readonly, retain) NSWindow *parentWindow; // @dynamic parentWindow;
- (id)initWithParentView:(id)arg1;

@end
