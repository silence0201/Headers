//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNInstructionContents-Protocol.h>

@class MNSpokenInstructionContents, NSArray, NSString;

@interface MNDebugInstructionContents : NSObject <MNInstructionContents>
{
    MNSpokenInstructionContents *_contents;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasServerContent;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives;
- (id)instruction;
- (id)stringForDistance:(double)arg1;
@property(nonatomic) int junctionAngle;
@property(retain, nonatomic) NSArray *towardNames;
@property(retain, nonatomic) NSArray *branchNames;
@property(retain, nonatomic) NSString *destinationName;
@property(retain, nonatomic) NSString *exitNumber;
@property(retain, nonatomic) NSString *intersectionName;
@property(retain, nonatomic) NSString *roadName;
@property(nonatomic) _Bool toFreeway;
@property(nonatomic) int maneuverType;
@property(nonatomic) int transportType;
@property(nonatomic) _Bool suppressFallback;
@property(nonatomic) _Bool suppressNames;
@property(nonatomic) long long context;
- (id)init;

@end

