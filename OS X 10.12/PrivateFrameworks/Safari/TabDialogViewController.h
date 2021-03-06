//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/TabDialogViewDelegate-Protocol.h>

@class NSString, NSWindow, TabDialogConfiguration;

__attribute__((visibility("hidden")))
@interface TabDialogViewController : NSViewController <TabDialogViewDelegate>
{
    NSWindow *_viewWindow;
    int _webProcessPID;
    TabDialogConfiguration *_configuration;
}

- (void).cxx_destruct;
- (void)didDismissTabDialogView:(id)arg1;
- (void)didAcceptTabDialogView:(id)arg1 withPromptResponse:(id)arg2;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)nibName;
@property(readonly, copy, nonatomic) NSString *dialogMessage;
- (id)initWithDialogConfiguration:(id)arg1 webPID:(int)arg2;

@end

