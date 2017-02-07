//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@class NSArray, NSMutableDictionary;

@interface WBSAutomaticReadingListAppExtensionSource : WBSAutomaticReadingListSocialSource
{
    NSArray *_activeExtensions;
    NSMutableDictionary *_identifierToEntriesMap;
    id _extensionMatchingContext;
    NSArray *_extensions;
}

+ (id)hostingAppIconForExtension:(id)arg1;
+ (id)displayNameForExtension:(id)arg1;
+ (id)sharedSource;
@property(retain, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
- (void).cxx_destruct;
- (void)setShowItems:(BOOL)arg1 forExtension:(id)arg2;
- (BOOL)showItemsForExtension:(id)arg1;
- (BOOL)isActive;
- (id)_findAccounts;
- (id)recordsInfo;
- (id)_items;
- (void)requestMoreItemsWithAge:(int)arg1;
- (id)servicePluginIdentifier;
- (id)servicePluginName;
- (id)serviceImage;
- (id)serviceName;
- (id)serviceType;
- (id)accountTypeIdentifier;
- (id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2;
- (id)resourceURLString;
- (void)_extensionsDidChange;
- (void)_beginExtensionDiscovery;
- (id)init;

@end
