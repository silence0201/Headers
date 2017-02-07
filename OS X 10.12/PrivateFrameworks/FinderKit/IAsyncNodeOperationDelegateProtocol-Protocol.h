//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class FI_IAsyncNodeOperation;

@protocol IAsyncNodeOperationDelegateProtocol <NSObject>

@optional
- (int)asyncNodeOperation:(FI_IAsyncNodeOperation *)arg1 completedNotification:(const struct OperationMonitor *)arg2;
- (int)asyncNodeOperation:(FI_IAsyncNodeOperation *)arg1 subOperationCompleted:(unsigned int)arg2 targetNode:(const struct TFENode *)arg3;
- (int)asyncNodeOperation:(FI_IAsyncNodeOperation *)arg1 subOperationStarted:(unsigned int)arg2;
- (int)asyncNodeOperation:(FI_IAsyncNodeOperation *)arg1 errorNotification:(const struct OperationMonitor *)arg2 error:(const struct OperationErrorRecord *)arg3 reply:(struct NodeEventReply *)arg4;
- (int)asyncNodeOperation:(FI_IAsyncNodeOperation *)arg1 statusNotification:(const struct OperationMonitor *)arg2;
@end
