//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScriptWhoseTest, NSString;

@interface IFRequirement : NSObject
{
    NSString *_level;
    NSScriptWhoseTest *_test;
    NSString *_label;
    NSString *_title;
    NSString *_message;
    BOOL _isPathBased;
}

+ (BOOL)isFatalErrorIfFailedOnLevel:(id)arg1;
+ (id)allLevels;
+ (id)testWithDictionaryRepresentation:(id)arg1 withPkgIdentifier:(id)arg2;
- (BOOL)isPathBased;
- (BOOL)doesEvaluateSecurely;
- (id)description;
- (id)message;
- (id)title;
- (id)label;
- (id)test;
- (id)level;
- (BOOL)isTrueForTarget:(id)arg1;
- (void)dealloc;
- (id)initWithLevel:(id)arg1 test:(id)arg2 label:(id)arg3 title:(id)arg4 message:(id)arg5;
- (id)initWithDictionaryRepresentation:(id)arg1 fromBundle:(id)arg2 withPkgIdentifier:(id)arg3;
- (BOOL)_isAnySubtestPathBased:(id)arg1;

@end
