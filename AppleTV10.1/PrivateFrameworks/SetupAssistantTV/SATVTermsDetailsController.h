//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SetupAssistantTV/TVTableViewDelegate-Protocol.h>
#import <SetupAssistantTV/UITableViewDataSource-Protocol.h>

@class NSString, SATVHeaderView, SATVLegalPresentation, UITableView;

@interface SATVTermsDetailsController : UIViewController <TVTableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    long long _numberOfRows;
    NSString *_tvOSTerms;
    NSString *_warrantyTerms;
    NSString *_privacyTerms;
    NSString *_iCloudTerms;
    NSString *_gameCenterTerms;
    SATVHeaderView *_bannerView;
    SATVLegalPresentation *_legalPresentation;
}

@property(retain, nonatomic) SATVLegalPresentation *legalPresentation; // @synthesize legalPresentation=_legalPresentation;
@property(retain, nonatomic) SATVHeaderView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSString *gameCenterTerms; // @synthesize gameCenterTerms=_gameCenterTerms;
@property(retain, nonatomic) NSString *iCloudTerms; // @synthesize iCloudTerms=_iCloudTerms;
@property(retain, nonatomic) NSString *privacyTerms; // @synthesize privacyTerms=_privacyTerms;
@property(retain, nonatomic) NSString *warrantyTerms; // @synthesize warrantyTerms=_warrantyTerms;
@property(retain, nonatomic) NSString *tvOSTerms; // @synthesize tvOSTerms=_tvOSTerms;
@property(nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) struct CGSize sizeThatFits;
- (id)preferredFocusEnvironments;
- (void)viewDidLayoutSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
