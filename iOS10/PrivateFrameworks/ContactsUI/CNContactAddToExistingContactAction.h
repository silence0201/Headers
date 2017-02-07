//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

#import <ContactsUI/CNContactPickerDelegate-Protocol.h>
#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>

@class CNContact, CNContactPickerViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddToExistingContactAction : CNContactAction <CNContactPickerDelegate, CNContactViewControllerDelegate>
{
    CNContact *_chosenContact;
    CNContactPickerViewController *_contactPicker;
}

@property(retain, nonatomic) CNContactPickerViewController *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain, nonatomic) CNContact *chosenContact; // @synthesize chosenContact=_chosenContact;
- (void).cxx_destruct;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)performActionWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
