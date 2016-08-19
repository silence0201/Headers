//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchKit/SPRemoteInterfaceProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, SPRemoteInterfaceDataDelegateProtocol;

@interface SPRemoteInterface : NSObject <SPRemoteInterfaceProtocol>
{
    id <SPRemoteInterfaceDataDelegateProtocol> _dataDelegate;
    NSMutableArray *_activeComplicationsConnections;
    id _runLoopObserver;
    NSMutableDictionary *_interfaceControllers;
    NSMutableDictionary *_interfaceControllersOwners;
    NSMutableSet *_missingInterfaceControllers;
    NSObject<OS_dispatch_queue> *_interfaceControllersAccessQueue;
    NSString *_rootViewControllerID;
    NSString *_navigatingViewControllerID;
    NSString *_appClientIdentifier;
    CDUnknownBlockType _textInputCompletion;
    CDUnknownBlockType _textInputSuggestions;
    CDUnknownBlockType _mediaPlayerControllerCompletion;
    CDUnknownBlockType _audioRecorderControllerCompletion;
    NSMutableArray *_openParentRequests;
    CDUnknownBlockType _addPassesCompletion;
}

+ (id)controller:(id)arg1 setupProperties:(id)arg2 viewControllerID:(id)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5 classForType:(CDUnknownFunctionPointerType)arg6;
+ (void)notificationController:(id)arg1 showNotificationInterfaceType:(long long)arg2;
+ (_Bool)sendDataToApp:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (_Bool)sendDataToApp:(id)arg1;
+ (void)sendCacheRequestMessage:(id)arg1;
+ (void)sendCacheRequest:(id)arg1;
+ (_Bool)openParentApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 interfaceController:(id)arg4;
+ (void)didFinishHandlingActivity:(id)arg1;
+ (void)addPasses:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)controllerDismissAddPassesController:(id)arg1;
+ (void)controller:(id)arg1 presentAddPassesControllerWithPasses:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)openSystemURL:(id)arg1;
+ (void)controllerDismissTextInputController:(id)arg1;
+ (void)controller:(id)arg1 presentTextInputControllerWithSuggestionsForLanguage:(CDUnknownBlockType)arg2 allowedInputMode:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)controller:(id)arg1 presentTextInputControllerWithSuggestions:(id)arg2 allowedInputMode:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)controllerDismiss:(id)arg1;
+ (void)controller:(id)arg1 presentInterfaceControllers:(id)arg2 contexts:(id)arg3;
+ (void)controller:(id)arg1 presentInterfaceController:(id)arg2 context:(id)arg3;
+ (void)controllerBecomeCurrentPage:(id)arg1;
+ (void)removePageControllerAtIndexes:(id)arg1;
+ (void)movePageControllerAtIndex:(long long)arg1 toIndex:(long long)arg2;
+ (void)insertPageControllerAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3;
+ (void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2;
+ (void)controllerPopToRoot:(id)arg1;
+ (void)controllerPop:(id)arg1;
+ (void)controller:(id)arg1 pushInterfaceController:(id)arg2 context:(id)arg3;
+ (void)_logDuplicate:(id)arg1 controller:(id)arg2 key:(id)arg3 property:(id)arg4 value:(id)arg5;
+ (void)setController:(id)arg1 key:(id)arg2 property:(id)arg3 value:(id)arg4;
+ (void)setControllerInactive:(id)arg1;
+ (void)setControllerActive:(id)arg1;
+ (void)clearStorageForController:(id)arg1;
+ (void)_setupStorageForController:(id)arg1;
+ (void)handleEvent:(CDUnknownBlockType)arg1;
+ (id)SerializablePropertyValue:(id)arg1;
+ (void)_updateAccessibility;
+ (id)cacheIdentifier;
+ (id)_remoteIdentifier;
+ (id)startRemoteInterface;
@property(copy, nonatomic) CDUnknownBlockType addPassesCompletion; // @synthesize addPassesCompletion=_addPassesCompletion;
@property(retain, nonatomic) NSMutableArray *openParentRequests; // @synthesize openParentRequests=_openParentRequests;
@property(copy, nonatomic) CDUnknownBlockType audioRecorderControllerCompletion; // @synthesize audioRecorderControllerCompletion=_audioRecorderControllerCompletion;
@property(copy, nonatomic) CDUnknownBlockType mediaPlayerControllerCompletion; // @synthesize mediaPlayerControllerCompletion=_mediaPlayerControllerCompletion;
@property(copy, nonatomic) CDUnknownBlockType textInputSuggestions; // @synthesize textInputSuggestions=_textInputSuggestions;
@property(copy, nonatomic) CDUnknownBlockType textInputCompletion; // @synthesize textInputCompletion=_textInputCompletion;
@property(retain, nonatomic) NSString *appClientIdentifier; // @synthesize appClientIdentifier=_appClientIdentifier;
@property(retain, nonatomic) NSString *navigatingViewControllerID; // @synthesize navigatingViewControllerID=_navigatingViewControllerID;
@property(retain, nonatomic) NSString *rootViewControllerID; // @synthesize rootViewControllerID=_rootViewControllerID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *interfaceControllersAccessQueue; // @synthesize interfaceControllersAccessQueue=_interfaceControllersAccessQueue;
@property(retain, nonatomic) NSMutableSet *missingInterfaceControllers; // @synthesize missingInterfaceControllers=_missingInterfaceControllers;
@property(retain, nonatomic) NSMutableDictionary *interfaceControllersOwners; // @synthesize interfaceControllersOwners=_interfaceControllersOwners;
@property(retain, nonatomic) NSMutableDictionary *interfaceControllers; // @synthesize interfaceControllers=_interfaceControllers;
@property(retain, nonatomic) id runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(retain, nonatomic) NSMutableArray *activeComplicationsConnections; // @synthesize activeComplicationsConnections=_activeComplicationsConnections;
@property(retain, nonatomic) id <SPRemoteInterfaceDataDelegateProtocol> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
- (void).cxx_destruct;
- (void)receiveNativeComplicationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)complicationDefaultImagesAssetName;
- (id)controllerMethods:(id)arg1;
- (void)_fillDataWithRandom:(id)arg1 length:(long long)arg2;
- (void)getComplicationData:(id)arg1;
- (void)_handleActionForNotificationWithInfo:(id)arg1;
- (_Bool)_handleAction:(id)arg1 forNotification:(id)arg2 remoteNotificationContext:(id)arg3 localNotification:(id)arg4 handler:(id)arg5 controller:(id)arg6;
- (void)layoutDirection:(long long)arg1;
- (void)preferredContentSizeCategory:(id)arg1;
- (void)dataInterfaceWillResignActive:(id)arg1;
- (void)dataInterfaceDidBecomeActive:(id)arg1;
- (void)applicationIsStillActive;
- (void)applicationDidReceiveLocalNotification:(id)arg1 clientIdentifier:(id)arg2;
- (void)applicationDidReceiveRemoteNotification:(id)arg1 clientIdentifier:(id)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishConnecting:(id)arg1;
- (void)applicationContentsDidReset:(id)arg1;
- (void)applicationDidTerminate:(id)arg1;
- (void)handlePlist:(id)arg1 fromIdentifier:(id)arg2;
- (void)receiveData:(id)arg1 fromIdentifier:(id)arg2;
- (void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;
- (void)removeInterfaceControllersForClient:(id)arg1;
- (void)_dumpInterfaceDictionary;
- (void)_deregisterInterfaceControllerID:(id)arg1;
- (void)_registerInterfaceController:(id)arg1 interfaceControllerID:(id)arg2 interfaceControllerClientID:(id)arg3 applicationRootController:(_Bool)arg4;
- (id)_interfaceControllerIDsForClientID:(id)arg1;
- (id)_interfaceControllerClientIDForControllerID:(id)arg1;
- (id)_interfaceControllerID:(id)arg1;
- (id)_interfaceControllerWithID:(id)arg1;
- (void)recoverFromMissingIntefaceControllerWithID:(id)arg1;
- (void)sendWillActivateReplyForController:(id)arg1;
- (void)notificationController:(id)arg1 showNotificationInterfaceType:(long long)arg2;
- (void)didFinishHandlingActivity:(id)arg1;
- (void)addPasses:(id)arg1;
- (void)controllerDismissAddPassesController:(id)arg1;
- (void)controllerPresentAddPassesController:(id)arg1 passes:(id)arg2;
- (void)openSystemURL:(id)arg1;
- (void)controllerDismissTextInputController:(id)arg1;
- (void)controllerPresentTextInputController:(id)arg1 allowedInputMode:(id)arg2 suggestions:(id)arg3;
- (void)controllerDismiss:(id)arg1;
- (void)controller:(id)arg1 presentInterfaceControllers:(id)arg2 initializationContextIDs:(id)arg3;
- (void)controller:(id)arg1 presentInterfaceController:(id)arg2 initializationContextID:(id)arg3;
- (void)controllerBecomeCurrentPage:(id)arg1;
- (void)removePageControllerAtIndexes:(id)arg1;
- (void)movePageControllerAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)insertPageControllerAtIndexes:(id)arg1 withNames:(id)arg2 initializationContextIDs:(id)arg3;
- (void)reloadRootControllersWithNames:(id)arg1 initializationContextIDs:(id)arg2;
- (void)controllerPopToRoot:(id)arg1;
- (void)controllerPop:(id)arg1;
- (void)controller:(id)arg1 pushInterfaceController:(id)arg2 initializationContextID:(id)arg3;
- (id)interfaceCreationContextForID:(id)arg1;
- (id)storeInterfaceCreationContext:(id)arg1;
- (_Bool)_sendDataToApp:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendCacheRequestMessage:(id)arg1;
- (_Bool)openParentApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_sendOpenParentApplicationRequest;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 controller:(id)arg4;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendComplicationObject:(id)arg1;
- (void)replyTimingData:(id)arg1;
- (void)_requestTimingData:(id)arg1;
- (void)extensionDidEndNotificationUICreation;
- (void)extensionDidBeginNotificationUICreation;
- (void)sendPlist:(id)arg1 clientIdentifiers:(id)arg2;
- (void)sendData:(id)arg1 clientIdentifiers:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)sendData:(id)arg1 clientIdentifiers:(id)arg2;
- (void)_callDidDeactivate;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setupSignalHandlers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

