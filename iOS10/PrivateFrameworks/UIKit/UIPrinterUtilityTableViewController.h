//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrinterUtilityTableViewController : UITableViewController
{
    PKPrinter *_printer;
    _Bool _showSupplyDataUnderPrinterName;
    long long _mainPrinterCellSection;
    long long _printerNameAndLocationSection;
    long long _identifyPrinterSection;
    long long _removeKeychainItemSection;
    NSArray *_supplyData;
}

@property(retain, nonatomic) NSArray *supplyData; // @synthesize supplyData=_supplyData;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setShowContactingPrinter:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithPrinter:(id)arg1;

@end

