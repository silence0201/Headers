//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject
{
}

+ (id)notesSharedViaICloudFromNotes:(id)arg1;
+ (unsigned long long)sharedNoteTypeForNotes:(id)arg1;
+ (id)messageForSharedNotesType:(unsigned long long)arg1;
+ (id)titleForSharedNotesType:(unsigned long long)arg1;
+ (void)showDeletingSharedNotesAlertWithType:(unsigned long long)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)showAlertsIfNecessaryForDeletingSharedNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
