//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSURL, UIDocumentPickerViewController;

@protocol UIDocumentPickerDelegate <NSObject>
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentAtURL:(NSURL *)arg2;

@optional
- (void)documentPickerWasCancelled:(UIDocumentPickerViewController *)arg1;
@end

