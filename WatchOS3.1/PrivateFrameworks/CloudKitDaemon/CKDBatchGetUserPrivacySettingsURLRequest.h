//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSArray *_containerPrivacySettings;
}

@property(retain, nonatomic) NSArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (_Bool)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;

@end

