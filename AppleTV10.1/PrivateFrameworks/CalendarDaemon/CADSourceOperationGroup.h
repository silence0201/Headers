//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADSourceInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADSourceRefresh:(CDStruct_1ef3fb1f)arg1 isUserRequested:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADSourceGetConstraints:(CDStruct_1ef3fb1f)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetSources:(CDUnknownBlockType)arg1;

@end
