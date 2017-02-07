//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

@class NSMutableSet, NSSet;

@interface TSKAnnotationAuthorStorage : TSPObject
{
    NSMutableSet *mAuthors;
}

@property(readonly, nonatomic) NSSet *authors; // @synthesize authors=mAuthors;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (id)packageLocator;
- (unsigned int)delayedArchivingPriority;
- (_Bool)shouldDelayArchiving;
- (id)description;
- (void)didRemoveAuthorRelationshipFromDocument;
- (void)didAddAuthorRelationshipToDocument;
- (id)nextAuthorColor;
- (id)authorWithName:(id)arg1;
- (void)removeAuthor:(id)arg1;
- (void)p_addAuthor:(id)arg1 isFromDocumentSupport:(_Bool)arg2;
- (void)addAuthor:(id)arg1;
- (void)dealloc;

@end
