//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemMigration/SMMigrationEngineStep.h>

@class SMWindowsMacPathMapper;

@interface SMWindowsMigrateUserAccountsStep : SMMigrationEngineStep
{
    SMWindowsMacPathMapper *windowsMacPathMap;
}

@property(retain) SMWindowsMacPathMapper *windowsMacPathMap; // @synthesize windowsMacPathMap;
- (void).cxx_destruct;
- (id)uniqueHomeDirectoryForUserWithName:(id)arg1;
- (double)estimatedTimeToCompletePhase:(unsigned long long)arg1;
- (id)createUserAccount:(id)arg1 withShortname:(id)arg2 longname:(id)arg3 homeDirectory:(id)arg4 outUID:(long long *)arg5;
- (id)process;
- (id)initWithEngine:(id)arg1 pathMap:(id)arg2;

@end

