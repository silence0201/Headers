//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _INAggregator : NSObject
{
}

+ (void)resetSynapseVocabularyUpdate;
+ (void)logReceivedCount:(unsigned long long)arg1 ofVocabularyStringType:(long long)arg2;
+ (double)roundCount:(unsigned long long)arg1 toSignificantFigure:(unsigned long long)arg2;
+ (id)_distributionKeyForVocabularyStringType:(long long)arg1;
+ (_Bool)_canReportDistributionOfVocabularyStringType:(long long)arg1;
+ (unsigned long long)_singificantFigureForVocabularyStringType:(long long)arg1;

@end

