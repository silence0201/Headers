//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXFeedbackStore;

@interface PXFeedbackCollector : NSObject
{
    PXFeedbackStore *_feedbackStore;
}

@property(readonly, nonatomic) PXFeedbackStore *feedbackStore; // @synthesize feedbackStore=_feedbackStore;
- (void).cxx_destruct;
- (id)_appVersion;
- (id)_uniqueSystemIdentifier;
- (void)removeFeedbackEntry:(id)arg1;
- (id)addFeedbackFromDictionary:(id)arg1;
- (void)addFeedbackEntry:(id)arg1;
- (id)feedbackEntryFromDictionary:(id)arg1;
- (id)init;

@end
