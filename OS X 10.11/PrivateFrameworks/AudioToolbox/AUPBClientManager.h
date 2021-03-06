//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AudioToolbox/AUPBInspecting-Protocol.h>
#import <AudioToolbox/AUPBRegistrarListening-Protocol.h>

@class NSMutableArray, NSString, NSXPCConnection;
@protocol AUPBRegistrarHosting;

__attribute__((visibility("hidden")))
@interface AUPBClientManager : NSObject <AUPBRegistrarListening, AUPBInspecting>
{
    NSXPCConnection *mRegistrarConnection;
    id <AUPBRegistrarHosting> mProxyInterface;
    NSMutableArray *mRemoteServers;
    struct vector<PropertyListener, std::__1::allocator<PropertyListener>> mPropertyListeners;
    struct vector<NewServerListener, std::__1::allocator<NewServerListener>> mNewServerListeners;
    unsigned long long mServerRefCounter;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)setAUParameter:(unsigned int)arg1 onServer:(unsigned long long)arg2 audioUnit:(unsigned long long)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 value:(float)arg6;
- (int)getAUParameter:(unsigned int)arg1 onServer:(unsigned long long)arg2 audioUnit:(unsigned long long)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoValue:(float *)arg6;
- (int)setAUProperty:(unsigned int)arg1 onServer:(unsigned long long)arg2 audioUnit:(unsigned long long)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 withValue:(const void *)arg6 size:(unsigned int)arg7;
- (int)getAUProperty:(unsigned int)arg1 onServer:(unsigned long long)arg2 audioUnit:(unsigned long long)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoBufer:(void **)arg6 withSize:(unsigned int *)arg7;
- (int)getAUPropertyInfo:(unsigned int)arg1 onServer:(unsigned long long)arg2 audioUnit:(unsigned long long)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 intoDataSize:(unsigned int *)arg6 writeable:(char *)arg7;
- (int)setPBProperty:(unsigned int)arg1 onServer:(unsigned long long)arg2 block:(unsigned long long)arg3 value:(void *)arg4;
- (int)copyPBProperty:(unsigned int)arg1 onServer:(unsigned long long)arg2 block:(unsigned long long)arg3 intoValue:(const void **)arg4;
- (int)removePropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(unsigned long long)arg2 block:(unsigned long long)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;
- (int)addPropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(unsigned long long)arg2 block:(unsigned long long)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;
- (int)removeServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;
- (int)addNewServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;
- (void)notifyListenersServer:(unsigned long long)arg1 block:(unsigned long long)arg2 propertyChanged:(unsigned int)arg3;
- (id)serverFromRef:(unsigned long long)arg1;
- (void)processingBlock:(unsigned long long)arg1 propertiesChanged:(id)arg2 withQualifierData:(id)arg3;
- (void)processingBlock:(unsigned long long)arg1 propertyChanged:(unsigned int)arg2;
- (void)newServerAdded:(id)arg1;
- (void)handleRegistrarCrash;
- (void)startRegistarConnection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

