//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;
@protocol _UIDocumentPickerOverviewDelegate;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerOverviewViewController : UITableViewController
{
    _Bool _manage;
    id <_UIDocumentPickerOverviewDelegate> _delegate;
    NSArray *_allPickers;
    NSString *_currentExtensionIdentifier;
    NSArray *_auxiliaryOptions;
    NSArray *_fileTypes;
    unsigned long long _mode;
}

@property(nonatomic) _Bool manage; // @synthesize manage=_manage;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSArray *fileTypes; // @synthesize fileTypes=_fileTypes;
@property(retain, nonatomic) NSArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
@property(retain, nonatomic) NSString *currentExtensionIdentifier; // @synthesize currentExtensionIdentifier=_currentExtensionIdentifier;
@property(retain, nonatomic) NSArray *allPickers; // @synthesize allPickers=_allPickers;
@property(nonatomic) __weak id <_UIDocumentPickerOverviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updatePreferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateContents;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2 auxiliaryOptions:(id)arg3 includeManagementItem:(_Bool)arg4;

@end

