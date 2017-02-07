//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PackageKit/PKPackageReferable-Protocol.h>

@class NSMutableArray, NSString, PKDistribution;

@interface PKDistributionPackageReference : NSObject <PKPackageReferable>
{
    NSMutableArray *_pkgRefElements;
    NSString *_pkgRefIdentifier;
    PKDistribution *_distribution;
}

- (id)_distValueFromExternalValue:(id)arg1 forExternalName:(id)arg2;
- (id)_externalValueFromDistValue:(id)arg1 forExternalName:(id)arg2;
- (id)_distNameFromExternalName:(id)arg1;
- (id)componentIdentifierToSearchIdentifierMap;
- (id)objectInMustCloseAppsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfMustCloseApps;
- (void)setBundleComponents:(id)arg1;
- (id)bundleComponents;
- (id)_bundleVersionElementCreatingIfNeeded:(BOOL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)attributesAsDictionary;
- (id)scriptForAttributeName:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)scriptForAttributeName:(id)arg1;
- (void)setValue:(id)arg1 forAttributeName:(id)arg2;
- (id)valueForAttributeName:(id)arg1;
- (id)_pkgRefElementForWriting:(BOOL)arg1 passingBlock:(CDUnknownBlockType)arg2;
- (void)setURL:(id)arg1;
- (void)setPackageIdentifier:(id)arg1;
- (id)packageIdentifier;
- (BOOL)validatePkgRefIdentifier:(id *)arg1 error:(id *)arg2;
- (void)setPkgRefIdentifier:(id)arg1;
- (id)pkgRefIdentifier;
- (id)URL;
- (id)version;
- (id)identifier;
- (void)_replacePkgRefIdentifier:(id)arg1;
- (id)_pkgRefElements;
- (void)_removePkgRefElement:(id)arg1;
- (void)_addPkgRefElement:(id)arg1;
- (void)_setDistribution:(id)arg1;
- (id)distribution;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)_initWithDistribution:(id)arg1 pkgRefIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
