//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalExhangeGetDelegeteFolderPermissionsOperation : NSObject
{
}

+ (id)permissionForPrincipal:(id)arg1 fromPermissions:(id)arg2 withBinding:(id)arg3;
+ (int)delegateUserPermissionForCalendarPermission:(int)arg1;
+ (int)permissionFromEWSCalendarPermission:(id)arg1;
+ (int)permissionFromEWSPermission:(id)arg1;
+ (BOOL)executeWithAccount:(id)arg1 withDelegate:(id)arg2 withError:(id *)arg3 inContext:(id)arg4;

@end

