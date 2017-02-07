//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVBInterface;
@protocol OS_dispatch_queue;

@interface AVBInterfaceStreamingManager : NSObject
{
    unsigned int _service;
    unsigned int _connection;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    struct IONotificationPort *_notificationPort;
    unsigned int _interestNotification;
    AVBInterface *_interface;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
@property(readonly) AVBInterface *interface; // @synthesize interface=_interface;
- (void)dealloc;
- (BOOL)getQueue:(unsigned int)arg1 physicalLaunchTimeOffset:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)getQueue:(unsigned int)arg1 mbufLaunchTimeOffset:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)createIIDCIOSurfaceOutputStreamWithID:(unsigned long long)arg1 onVLANID:(unsigned short)arg2 withPriorityCodePoint:(unsigned char)arg3 andDestiantionMAC:(id)arg4 withMaximumSurfacesPerSecond:(unsigned int)arg5 maximumSurfaceDataLength:(unsigned long long)arg6 maximumSurfaceDataLengthPerPDU:(unsigned long long)arg7 streamBandwidth:(unsigned long long)arg8 error:(id *)arg9;
- (BOOL)createIIDCIOSurfaceInputStreamWithID:(unsigned long long)arg1 onVLANID:(unsigned short)arg2 withPriorityCodePoint:(unsigned char)arg3 andDestiantionMAC:(id)arg4 withMaximumSurfacesPerSecond:(unsigned int)arg5 maximumSurfaceDataLength:(unsigned long long)arg6 maximumSurfaceDataLengthPerPDU:(unsigned long long)arg7 error:(id *)arg8;
- (BOOL)destroyOutputStreamWithID:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)createUserSpaceOutputStreamWithID:(unsigned long long)arg1 usingEtherType:(unsigned short)arg2 onVLANID:(unsigned short)arg3 withPriorityCodePoint:(unsigned char)arg4 andDestiantionMAC:(id)arg5 withNumberOfPackets:(unsigned int)arg6 ofHeaderSize:(unsigned int)arg7 andPayloadSize:(unsigned int)arg8 timerPeriod:(unsigned int)arg9 streamBandwidth:(unsigned long long)arg10 error:(id *)arg11;
- (BOOL)createUserSpaceOutputStreamWithID:(unsigned long long)arg1 onVLANID:(unsigned short)arg2 withPriorityCodePoint:(unsigned char)arg3 andDestiantionMAC:(id)arg4 withNumberOfPackets:(unsigned int)arg5 ofHeaderSize:(unsigned int)arg6 andPayloadSize:(unsigned int)arg7 timerPeriod:(unsigned int)arg8 streamBandwidth:(unsigned long long)arg9 error:(id *)arg10;
- (BOOL)destroyInputStreamWithID:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)createUserSpaceInputStreamWithID:(unsigned long long)arg1 usingEtherType:(unsigned short)arg2 onVLANID:(unsigned short)arg3 withPriorityCodePoint:(unsigned char)arg4 andDestiantionMAC:(id)arg5 withNumberOfPackets:(unsigned int)arg6 ofHeaderSize:(unsigned int)arg7 andPayloadSize:(unsigned int)arg8 error:(id *)arg9;
- (BOOL)createUserSpaceInputStreamWithID:(unsigned long long)arg1 onVLANID:(unsigned short)arg2 withPriorityCodePoint:(unsigned char)arg3 andDestiantionMAC:(id)arg4 withNumberOfPackets:(unsigned int)arg5 ofHeaderSize:(unsigned int)arg6 andPayloadSize:(unsigned int)arg7 error:(id *)arg8;
- (unsigned long long)streamIDForStreamIndex:(unsigned short)arg1;
- (BOOL)releaseStreamIndex:(unsigned short)arg1 error:(id *)arg2;
- (BOOL)nextAvailableStreamIndex:(unsigned short *)arg1 error:(id *)arg2;
- (void)serviceTerminated;
- (id)initWithInterface:(id)arg1;
- (id)init;

@end
