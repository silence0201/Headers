//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASVoiceSearchFinalResult : SABaseClientBoundCommand
{
}

+ (id)voiceSearchFinalResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voiceSearchFinalResult;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *voiceSearchResults;
@property(copy, nonatomic) NSString *recognitionText;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

