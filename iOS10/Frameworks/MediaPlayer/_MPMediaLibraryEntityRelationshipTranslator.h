//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPMediaLibraryEntityTranslator;

@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject
{
    _Bool _transient;
    struct ModelPropertyBase *_foreignPropertyBase;
    Class _relationshipModelClass;
}

@property(nonatomic) _Bool transient; // @synthesize transient=_transient;
@property(nonatomic) Class relationshipModelClass; // @synthesize relationshipModelClass=_relationshipModelClass;
@property(nonatomic) struct ModelPropertyBase *foreignPropertyBase; // @synthesize foreignPropertyBase=_foreignPropertyBase;
@property(readonly, nonatomic) MPMediaLibraryEntityTranslator *entityTranslator;

@end

