//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INIntentSlotDescription, NSArray, NSData, NSObject, NSString;

@protocol INIntentResolutionResultExport <NSObject, JSExport>
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(NSArray *)arg2;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(NSObject *)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(NSArray *)arg1;
+ (id)resolutionResultSuccessWithResolvedValue:(NSObject *)arg1;
+ (id)unsupportedWithReason:(unsigned long long)arg1;
@property(nonatomic) unsigned long long unsupportedReason;
@property(retain, nonatomic) NSObject *itemToConfirm;
@property(retain, nonatomic) NSObject *incompleteValue;
@property(retain, nonatomic) NSObject *resolvedValue;
@property(retain, nonatomic) NSArray *neededParameterKeyPaths;
@property(retain, nonatomic) NSArray *incompleteParameterKeyPaths;
@property(retain, nonatomic) NSString *conflictingParameterKeyPath;
@property(retain, nonatomic) NSArray *alternatives;
@property(retain, nonatomic) NSArray *disambiguationItems;
- (NSData *)_dataForIntentSlotDescription:(INIntentSlotDescription *)arg1;
- (id)init;
@end
