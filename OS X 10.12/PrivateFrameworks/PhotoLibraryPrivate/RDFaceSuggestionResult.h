//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RDFace;

@interface RDFaceSuggestionResult : NSObject
{
    BOOL _confirmed;
    RDFace *_face;
    NSArray *_matchingFaceLocalIdentifiers;
}

@property BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(copy, nonatomic) NSArray *matchingFaceLocalIdentifiers; // @synthesize matchingFaceLocalIdentifiers=_matchingFaceLocalIdentifiers;
@property(retain) RDFace *face; // @synthesize face=_face;
- (void).cxx_destruct;
- (id)asPLPhotoAnalysisFaceSuggestion;
- (id)suggestionDictionaryRepresentation;

@end
