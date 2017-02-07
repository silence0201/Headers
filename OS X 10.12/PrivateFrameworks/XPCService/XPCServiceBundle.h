//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XPCService/XPCServiceArchiver-Protocol.h>

@class NSBundle, NSDictionary, NSString;
@protocol OS_xpc_object;

@interface XPCServiceBundle : NSObject <XPCServiceArchiver>
{
    NSBundle *_bundle;
    NSString *_serviceIdentifier;
    long long _serviceIdentifierPredicate;
    NSString *_executablePath;
    long long _executablePathPredicate;
    NSString *_realExecutablePath;
    long long _realExecutablePathPredicate;
    long long _serviceType;
    long long _serviceTypePredicate;
    NSDictionary *_serviceDictionary;
    long long _serviceDictionaryPredicate;
    NSDictionary *_launchdJobDictionary;
    long long _launchdJobDictionaryPredicate;
    NSObject<OS_xpc_object> *_xpcJobData;
    long long _xpcJobDataPredicate;
}

+ (id)XPCServiceBundleForMainExecutable;
+ (id)XPCServiceBundleFromExecutableAtPath:(id)arg1;
+ (id)XPCServiceBundleAtPath:(id)arg1;
+ (id)createXPCJobsArrayFromArray:(id)arg1;
+ (struct _launch_data *)createLaunchDataFromArray:(id)arg1;
+ (BOOL)useRestrictiveRoleAccountSecurityPolicy;
- (id)xpcJobData;
- (struct _launch_data *)launchdJobLaunchData;
- (id)launchdJobPropertyListString;
- (id)launchdJobPropertyListData;
- (id)launchdJobDictionary;
- (BOOL)isSystemService;
- (long long)serviceType;
- (id)bundle;
- (id)arrayForServiceDictionaryKey:(id)arg1;
- (id)dictionaryForServiceDictionaryKey:(id)arg1;
- (id)stringForServiceDictionaryKey:(id)arg1;
- (BOOL)boolForServiceDictionaryKey:(id)arg1;
- (id)objectForServiceDictionaryKey:(id)arg1;
- (id)serviceDictionary;
- (id)realExecutablePath;
- (id)executablePath;
- (id)identifier;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (void)dealloc;
- (id)archiveForCache;
- (id)initWithArchive:(id)arg1;
- (id)initWithBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
