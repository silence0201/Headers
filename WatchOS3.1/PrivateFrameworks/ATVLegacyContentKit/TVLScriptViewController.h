//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TVLDocument, TVLScriptArrayElement;

@interface TVLScriptViewController : UIViewController
{
    TVLScriptArrayElement *_feedElement;
    TVLDocument *_feedDocument;
}

@property(retain, nonatomic) TVLDocument *feedDocument; // @synthesize feedDocument=_feedDocument;
@property(retain, nonatomic) TVLScriptArrayElement *feedElement; // @synthesize feedElement=_feedElement;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)context;
- (id)initWithFeedElement:(id)arg1;

@end

