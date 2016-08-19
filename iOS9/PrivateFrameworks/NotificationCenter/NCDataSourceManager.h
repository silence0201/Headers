//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotificationCenter/_NCParentDataSourceManager-Protocol.h>

@class NCSnippetDataSourceManager, NCWidgetDataSourceManager, NSMutableDictionary, NSString;

@interface NCDataSourceManager : NSObject <_NCParentDataSourceManager>
{
    NSMutableDictionary *_identifiersToSnippetChangeHandlers;
    NSMutableDictionary *_identifiersToWidgetChangeHandlers;
    NCSnippetDataSourceManager *_snippetDataSourceManager;
    NCWidgetDataSourceManager *_widgetDataSourceManager;
}

+ (void)requestSharedDataSourceManager:(CDUnknownBlockType)arg1;
+ (id)__sharedInstance;
- (void)childDataSourceManagerDataSourcesDidChange:(id)arg1;
- (void)removeChangeHandlersWithIdentifier:(id)arg1;
- (void)addWidgetDataSourceChangeHandler:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (void)addSnippetDataSourceChangeHandler:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (void)_stop:(CDUnknownBlockType)arg1;
- (void)_start:(CDUnknownBlockType)arg1;
- (void)_begin:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

