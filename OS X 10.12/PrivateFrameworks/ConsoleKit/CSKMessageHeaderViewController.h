//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConsoleKit/CSKHeaderViewController.h>

#import <ConsoleKit/CSKExtendedTextFieldDelegate-Protocol.h>

@class CSKMessage, NSString;

@interface CSKMessageHeaderViewController : CSKHeaderViewController <CSKExtendedTextFieldDelegate>
{
    CSKMessage *_message;
}

@property(nonatomic) __weak CSKMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)extendedTextFieldDidSwitch:(id)arg1 showsAlternate:(BOOL)arg2;
- (void)_updateHeaderViewsWithMessage:(id)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
