//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFDialog, _SFDialogController;

@protocol _SFDialogControllerDelegate <NSObject>

@optional
- (void)dialogController:(_SFDialogController *)arg1 didDismissDialog:(_SFDialog *)arg2;
- (void)dialogController:(_SFDialogController *)arg1 willPresentDialog:(_SFDialog *)arg2;
- (_Bool)dialogController:(_SFDialogController *)arg1 shouldSuppressDialog:(_SFDialog *)arg2;
@end
