//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (HealthDaemon)
- (_Bool)_hd_removeDatabaseFilesAtDatabaseURL:(id)arg1 extensionSuffixes:(id)arg2 preserveCopy:(_Bool)arg3;
- (_Bool)hd_removeHFDDatabaseAtURL:(id)arg1 preserveCopy:(_Bool)arg2;
- (_Bool)hd_removeSQLiteDatabaseAtURL:(id)arg1 preserveCopy:(_Bool)arg2;
@end
