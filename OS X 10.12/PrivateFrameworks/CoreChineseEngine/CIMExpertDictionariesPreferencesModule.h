//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreChineseEngine/CIMPreferencesModule.h>

@class NSArray, NSTableView;

@interface CIMExpertDictionariesPreferencesModule : CIMPreferencesModule
{
    NSTableView *_tableView;
    NSArray *_dictionaries;
}

@property(retain, nonatomic) NSArray *dictionaries; // @synthesize dictionaries=_dictionaries;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
