//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MKInstructionContents : NSObject
{
    int _maneuverType;
    int _transportType;
    NSString *_intersectionName;
    NSString *_destinationName;
    NSString *_exitNumber;
    NSArray *_branchNames;
    NSArray *_towardNames;
    int _junctionAngle;
    _Bool _toFreeway;
}

+ (id)contentsWithManeuverType:(int)arg1 transportType:(int)arg2;
+ (id)contentsWithSubstep:(id)arg1 transportType:(int)arg2;
+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2;
@property(nonatomic) int junctionAngle; // @synthesize junctionAngle=_junctionAngle;
@property(nonatomic) _Bool toFreeway; // @synthesize toFreeway=_toFreeway;
@property(retain, nonatomic) NSArray *towardNames; // @synthesize towardNames=_towardNames;
@property(retain, nonatomic) NSArray *branchNames; // @synthesize branchNames=_branchNames;
@property(retain, nonatomic) NSString *exitNumber; // @synthesize exitNumber=_exitNumber;
@property(retain, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) NSString *intersectionName; // @synthesize intersectionName=_intersectionName;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
- (void).cxx_destruct;
- (id)instruction;
- (id)_walkingInstructionForStart;
- (id)_walkingInstructionForRoundabout;
- (id)_walkingInstructionForUTurn;
- (id)_walkingInstructionForContinue;
- (id)_walkingInstructionForTurn;
- (id)_instructionForChangeHighway;
- (id)_instructionForExit;
- (id)_instructionForStart;
- (id)_instructionForArrival;
- (id)_instructionForFerry;
- (id)_instructionForRoundabout;
- (id)_instructionForUTurn;
- (id)_instructionForContinue;
- (id)_instructionForBranch;
- (id)_instructionForTurn;
- (id)_instructionsForSigns;
- (id)description;
@property(readonly, nonatomic) NSString *primaryName;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool useTowardNames;
@property(readonly, nonatomic) _Bool useDestinationName;
@property(readonly, nonatomic) _Bool useIntersectionName;
@property(readonly, nonatomic) _Bool useRoadName;
@property(readonly, nonatomic) _Bool isExitManeuver;
@property(retain, nonatomic) NSString *roadName;
- (void)_populateFromSubstep:(id)arg1;
- (void)_populateFromStep:(id)arg1;
- (id)_exitNumberFromNameInfo:(id)arg1;
- (id)_stringFromNameInfo:(id)arg1;
- (void)setName:(id)arg1 signposts:(id)arg2;
- (id)init;

@end

