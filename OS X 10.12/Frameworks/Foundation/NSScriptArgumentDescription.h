//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSScriptArgumentDescription : NSObject
{
    NSString *_key;
    unsigned int _appleEventCode;
    NSObject *_typeNameOrDescription;
    BOOL _isOptional;
    BOOL _isHidden;
    unsigned long long _requiresAccess;
    NSString *_presentableDescription;
    NSObject *_presentableNameOrNames;
    NSArray *_synonymDescriptions;
}

+ (id)argumentDescriptionFromName:(id)arg1 implDeclaration:(id)arg2 presoDeclaration:(id)arg3 suiteName:(id)arg4 commandName:(id)arg5;
- (id)parameterDescriptorFromEvent:(id)arg1;
- (id)firstPresentableName;
- (id)presentableNames;
- (id)presentableDescription;
- (BOOL)actualValueIsWritable;
- (unsigned long long)requiresAccess;
- (BOOL)isHidden;
- (BOOL)isOptional;
- (id)typeDescription;
- (unsigned int)appleEventCode;
- (id)key;
- (void)reconcileToSuiteRegistry:(id)arg1 suiteName:(id)arg2 commandName:(id)arg3;
- (void)dealloc;
- (id)initWithKey:(id)arg1 appleEventCode:(unsigned int)arg2 type:(id)arg3 isOptional:(BOOL)arg4 presentableDescription:(id)arg5 nameOrNames:(id)arg6;
- (id)initWithKey:(id)arg1 appleEventCode:(unsigned int)arg2 type:(id)arg3 isOptional:(BOOL)arg4 isHidden:(BOOL)arg5 requiresAccess:(unsigned long long)arg6 presentableDescription:(id)arg7 name:(id)arg8 synonymDescriptions:(id)arg9;
- (unsigned short)appendParameterDeclarationsToAETEData:(id)arg1;
- (id)description;
- (id)_descriptionWithTabCount:(unsigned long long)arg1;

@end

