//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFEWSResponseOperation.h>

@class EWSCopyItemResponseType, NSArray;

@interface MFEWSCopyItemsResponseOperation : MFEWSResponseOperation
{
    NSArray *_newEWSItemIdStrings;
    unsigned long long _expectedResponseCount;
}

@property(nonatomic) unsigned long long expectedResponseCount; // @synthesize expectedResponseCount=_expectedResponseCount;
@property(copy) NSArray *destinationEWSItemIdStrings; // @synthesize destinationEWSItemIdStrings=_newEWSItemIdStrings;
- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
@property(retain) EWSCopyItemResponseType *response;

@end
