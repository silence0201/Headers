//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, SCRCMathExpression;

@interface UIAccessibilityMathViewController : UIViewController
{
    SCRCMathExpression *_mathExpression;
    NSDictionary *_mathDictionary;
}

+ (id)_uiaxBundle;
@property(readonly, nonatomic) NSDictionary *mathDictionary; // @synthesize mathDictionary=_mathDictionary;
- (void)_styleBarButtonItem:(id)arg1;
- (void)_doneButtonTapped;
- (id)_htmlString;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithMathDictionary:(id)arg1;

@end
