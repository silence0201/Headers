//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface EKUIEventActionHandler : NSObject
{
    NSDictionary *_serializedEventSnapshot;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *serializedEventSnapshot; // @synthesize serializedEventSnapshot=_serializedEventSnapshot;
- (void).cxx_destruct;
- (void)_recordSignalWithAction:(unsigned long long)arg1 onEvent:(id)arg2;
- (void)_shouldRecordSignalWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)_actionWithName:(id)arg1;
- (void)handleAction:(id)arg1;
- (void)unsetEventBeingEdited:(id)arg1;
- (void)setEventBeingEdited:(id)arg1;

@end

