//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CJKCandidateUIStringProperties, NSDictionary, NSString;

@interface CJKCandidateUIProperties : NSObject
{
    NSDictionary *_dictionary;
    NSString *_title;
    CJKCandidateUIStringProperties *_annotationStringProperties;
    CJKCandidateUIStringProperties *_groupStringProperties;
    CJKCandidateUIStringProperties *_guideStringProperties;
    CJKCandidateUIStringProperties *_titleStringProperties;
    CJKCandidateUIStringProperties *_noCandidatesStringProperties;
    double _arrowViewSquare;
    double _candidateThickness;
    double _minimumCandidateWidthForHorizontal;
    double _minimumCandidateWidthForHorizontalCompressed;
    double _groupBarThickness;
    double _selectionViewHeight;
    double _leftMarginHorizontal;
    double _leftMarginVertical;
    double _candidateLeftMarginHorizontal;
    double _candidateLeftMarginVertical;
    double _middleMargin;
    double _rightMargin;
    long long _windowCategory;
    BOOL _showsGuideNumbers;
}

+ (id)propertiesForIdentifier:(id)arg1;
@property(nonatomic) BOOL showsGuideNumbers; // @synthesize showsGuideNumbers=_showsGuideNumbers;
@property(nonatomic) long long windowCategory; // @synthesize windowCategory=_windowCategory;
@property(readonly, nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, nonatomic) double middleMargin; // @synthesize middleMargin=_middleMargin;
@property(readonly, nonatomic) double selectionViewHeight; // @synthesize selectionViewHeight=_selectionViewHeight;
@property(readonly, nonatomic) double groupBarThickness; // @synthesize groupBarThickness=_groupBarThickness;
@property(nonatomic) double minimumCandidateWidthForHorizontalCompressed; // @synthesize minimumCandidateWidthForHorizontalCompressed=_minimumCandidateWidthForHorizontalCompressed;
@property(readonly, nonatomic) double minimumCandidateWidthForHorizontal; // @synthesize minimumCandidateWidthForHorizontal=_minimumCandidateWidthForHorizontal;
@property(readonly, nonatomic) double candidateThickness; // @synthesize candidateThickness=_candidateThickness;
@property(readonly, nonatomic) double arrowViewSquare; // @synthesize arrowViewSquare=_arrowViewSquare;
@property(readonly, nonatomic) CJKCandidateUIStringProperties *noCandidatesStringProperties; // @synthesize noCandidatesStringProperties=_noCandidatesStringProperties;
@property(readonly, nonatomic) CJKCandidateUIStringProperties *titleStringProperties; // @synthesize titleStringProperties=_titleStringProperties;
@property(readonly, nonatomic) CJKCandidateUIStringProperties *guideStringProperties; // @synthesize guideStringProperties=_guideStringProperties;
@property(readonly, nonatomic) CJKCandidateUIStringProperties *groupStringProperties; // @synthesize groupStringProperties=_groupStringProperties;
@property(readonly, nonatomic) CJKCandidateUIStringProperties *annotationStringProperties; // @synthesize annotationStringProperties=_annotationStringProperties;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) double candidateLeftMargin;
@property(readonly, nonatomic) double leftMargin;
- (id)valueForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
