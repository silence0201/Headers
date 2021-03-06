//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CNAvatarViewController, CNContact, NSString, NSTextField;

@interface CalUIParticipantView : NSView
{
    CNContact *_contact;
    NSString *_contactIdentifier;
    CNAvatarViewController *_avatarViewController;
    NSTextField *_nameField;
}

@property(retain) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(retain) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)touchesEndedWithEvent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)init;

@end

