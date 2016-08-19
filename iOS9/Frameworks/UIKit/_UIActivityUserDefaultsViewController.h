//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UIImage, _UIActivityUserDefaults;

__attribute__((visibility("hidden")))
@interface _UIActivityUserDefaultsViewController : UITableViewController
{
    NSArray *_activities;
    _UIActivityUserDefaults *_userDefaults;
    UIImage *_placeholderImage;
}

@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
- (void).cxx_destruct;
- (long long)preferredActivityCategory;
- (id)settingsImageForActivity:(id)arg1;
- (void)toggleActivityHiddenForRowAtIndexPath:(id)arg1;
- (void)toggleActivityHiddenForControl:(id)arg1;
- (id)activityForRowAtIndexPath:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithActivities:(id)arg1 userDefaults:(id)arg2;

@end

