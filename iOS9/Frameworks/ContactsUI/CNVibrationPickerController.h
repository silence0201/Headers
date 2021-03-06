//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class TKVibrationPickerViewController;
@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNVibrationPickerController : UINavigationController
{
    TKVibrationPickerViewController *_vibrationPicker;
}

@property(readonly, nonatomic) TKVibrationPickerViewController *vibrationPicker; // @synthesize vibrationPicker=_vibrationPicker;
- (void).cxx_destruct;
- (void)cancelButton:(id)arg1;
- (void)doneButton:(id)arg1;
- (id)initWithAlertType:(int)arg1 selectedToneIdentifier:(id)arg2 selectedVibrationIdentifier:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <CNPickerControllerDelegate> delegate; // @dynamic delegate;

@end

