//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ATVLegacyContentKit/UITableViewDataSource-Protocol.h>

@class NSArray, NSString;

@interface TVOptionDialogListDataSource : NSObject <UITableViewDataSource>
{
    NSArray *_menuItems;
}

@property(readonly, copy, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)menuItemAtIndexPath:(id)arg1;
- (id)initWithMenuItems:(id)arg1 listView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

