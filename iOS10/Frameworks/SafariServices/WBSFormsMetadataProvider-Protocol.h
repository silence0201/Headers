//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@protocol WBSFormsMetadataProvider <NSObject>
@property(readonly, nonatomic) unsigned long long formCount;
- (void)enumerateFormsUsingBlock:(void (^)(struct OpaqueFormAutoFillFrame *, WBSFormMetadata *, _Bool *))arg1;
@end

