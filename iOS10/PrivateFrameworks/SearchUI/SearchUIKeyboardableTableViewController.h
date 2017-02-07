//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UITextField;

@interface SearchUIKeyboardableTableViewController : UITableViewController
{
    UITextField *_textField;
    double _keyboardHeight;
}

@property double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)scrollIndexPathToVisible:(id)arg1;
- (void)moveCursorToPosition:(id)arg1;
- (void)moveCursorToEnd;
- (void)moveCursorToBeginning;
- (_Bool)canHighlightRowAtIndexPath:(id)arg1;
- (void)selectHighlightedRow;
- (void)highlightRowAtIndexPath:(id)arg1;
- (void)downArrowPressed:(id)arg1;
- (void)upArrowPressed:(id)arg1;
- (void)returnPressed;
- (void)goBack;
- (void)deletePressed;
- (void)leftArrowPressed;
- (void)rightArrowPressed;
- (_Bool)isLeftToRightOrientation;
- (_Bool)isOnCard;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)addKeyCommandForKey:(id)arg1 action:(SEL)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)keyboardFrameChanged:(id)arg1;
- (id)init;

@end
