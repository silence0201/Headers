//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/ProgressiveResultsHandlerProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol>
{
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
}

- (void)dealloc;
- (void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2;
- (void)completedWithError:(id)arg1;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
