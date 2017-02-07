//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUI/SVSAceCommandRecordDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol SVSAceCommandRecordsDelegate;

__attribute__((visibility("hidden")))
@interface SVSAceCommandRecords : NSObject <SVSAceCommandRecordDelegate>
{
    id <SVSAceCommandRecordsDelegate> _delegate;
    NSMutableDictionary *_recordsByCommandIdentifier;
    NSMutableDictionary *_addViewsCommandIdentifierByViewIdentifier;
}

@property(readonly, nonatomic, getter=_addViewsCommandIdentifierByViewIdentifier) NSMutableDictionary *addViewsCommandIdentifierByViewIdentifier; // @synthesize addViewsCommandIdentifierByViewIdentifier=_addViewsCommandIdentifierByViewIdentifier;
@property(readonly, nonatomic, getter=_recordsByCommandIdentifier) NSMutableDictionary *recordsByCommandIdentifier; // @synthesize recordsByCommandIdentifier=_recordsByCommandIdentifier;
@property(nonatomic) __weak id <SVSAceCommandRecordsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)resultForAceCommand:(id)arg1;
- (void)recordActionCompletedUnsuccessfullyForAceCommand:(id)arg1;
- (void)recordActionCompletedSuccessfullyForAceCommand:(id)arg1;
- (void)recordActionStartedForAceCommand:(id)arg1;
- (id)_recordForAceCommand:(id)arg1;
- (id)aceAddViewsCommandWithViewIdentifier:(id)arg1;
- (id)aceCommandWithIdentifier:(id)arg1;
- (void)registerAceCommand:(id)arg1;
- (void)aceCommandRecordDidChangeResult:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
