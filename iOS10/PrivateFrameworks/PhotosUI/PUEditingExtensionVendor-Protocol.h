//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class PHAdjustmentData;

@protocol PUEditingExtensionVendor
- (void)cancelContentEditing;
- (void)finishContentEditing;
- (void)beginContentEditingWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(void (^)(_Bool))arg1;
- (void)queryHandlingCapabilityForAdjustmentData:(PHAdjustmentData *)arg1 withResponseHandler:(void (^)(_Bool))arg2;
@end

