//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class CNContact, NSString, PHPerson, PXPeopleNamePickerViewController;

@protocol PXPeopleNamePickerViewControllerDelegate <NSObject>
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickString:(NSString *)arg2;
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickContact:(CNContact *)arg2;
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickPerson:(PHPerson *)arg2;
- (void)namePickerControllerDidEndEditing:(PXPeopleNamePickerViewController *)arg1;
- (void)namePickerControllerDidStartEditing:(PXPeopleNamePickerViewController *)arg1;
@end

