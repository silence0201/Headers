//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QTKit/QTCaptureOperationDescriptor-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QTCaptureFileOutputPauseOperationDescriptor : NSObject <QTCaptureOperationDescriptor>
{
    BOOL _shouldPause;
}

+ (id)operationThatShouldPause:(BOOL)arg1;
- (id)operationDescriptorCoalescedWithExistingOperationDescriptor:(id)arg1;
- (BOOL)shouldPause;
- (id)initOperationThatShouldPause:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
