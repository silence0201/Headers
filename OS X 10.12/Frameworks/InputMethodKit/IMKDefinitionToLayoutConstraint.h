//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMKDefinitionToLayoutConstraint : NSObject
{
    double _maxWidth;
    double _minWidth;
    double _maxHeight;
    double _minHeight;
    unsigned long long _maxNumberOfCandidatesPerLine;
    double _minimumCellLineSize;
    unsigned long long _numberOfSimilarWidthCandidates;
    BOOL _shouldAddExtraLine;
    BOOL _optimizedLayoutForFixedSize;
}

@property(nonatomic) BOOL shouldAddExtraLine; // @synthesize shouldAddExtraLine=_shouldAddExtraLine;
@property(nonatomic) BOOL optimizedLayoutForFixedSize; // @synthesize optimizedLayoutForFixedSize=_optimizedLayoutForFixedSize;
@property(nonatomic) unsigned long long numberOfSimilarWidthCandidates; // @synthesize numberOfSimilarWidthCandidates=_numberOfSimilarWidthCandidates;
@property(nonatomic) double minimumCellLineSize; // @synthesize minimumCellLineSize=_minimumCellLineSize;
@property(nonatomic) unsigned long long maxNumberOfCandidatesPerLine; // @synthesize maxNumberOfCandidatesPerLine=_maxNumberOfCandidatesPerLine;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;

@end
