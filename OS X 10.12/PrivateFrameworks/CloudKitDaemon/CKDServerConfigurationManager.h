//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDGlobalConfigurationOperation, CKDServerConfiguration, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDServerConfigurationManager : NSObject
{
    BOOL _usesBackgroundSession;
    BOOL _allowsCellularAccess;
    int _iCloudEnvNotifToken;
    NSObject<OS_dispatch_source> *_switchNotifSource;
    NSOperationQueue *_configurationQueue;
    CKDServerConfiguration *_globalConfiguration;
    CKDGlobalConfigurationOperation *_globalConfigurationOp;
    NSOperationQueue *_containerSpecificInfoQueue;
    NSMutableDictionary *_containerSpecificInfos;
    NSMutableDictionary *_containerSpecificInfoOperations;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)expireConfigurationForContext:(id)arg1;
+ (void)expireGlobalConfiguration;
+ (id)sharedManagerUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2;
@property(nonatomic) int iCloudEnvNotifToken; // @synthesize iCloudEnvNotifToken=_iCloudEnvNotifToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *containerSpecificInfoOperations; // @synthesize containerSpecificInfoOperations=_containerSpecificInfoOperations;
@property(retain, nonatomic) NSMutableDictionary *containerSpecificInfos; // @synthesize containerSpecificInfos=_containerSpecificInfos;
@property(retain, nonatomic) NSOperationQueue *containerSpecificInfoQueue; // @synthesize containerSpecificInfoQueue=_containerSpecificInfoQueue;
@property(retain, nonatomic) CKDGlobalConfigurationOperation *globalConfigurationOp; // @synthesize globalConfigurationOp=_globalConfigurationOp;
@property(retain, nonatomic) CKDServerConfiguration *globalConfiguration; // @synthesize globalConfiguration=_globalConfiguration;
@property(retain, nonatomic) NSOperationQueue *configurationQueue; // @synthesize configurationQueue=_configurationQueue;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) BOOL usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *switchNotifSource; // @synthesize switchNotifSource=_switchNotifSource;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)_expireConfigurationForContext:(id)arg1;
- (void)_expireGlobalConfiguration;
- (void)_behaviorOptionsChanged:(id)arg1;
- (void)_dropAllConfigurations;
- (void)serverEnvironmentForContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)containerScopedUserIDForContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publicURLForServerType:(long long)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)configurationForContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchContainerSpecificInfoForContext:(id)arg1 needUserID:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchGlobalConfigWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)_watchForSwitchPrefFileChanges;
- (id)_uniqueStringForContainerAndAccount:(id)arg1;

@end
