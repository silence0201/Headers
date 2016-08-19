//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKeyboardMenuView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView
{
    NSMutableArray *m_menuOptions;
    struct CGSize m_preferredSize;
    CDUnknownBlockType _finishSplitTransitionBlock;
}

+ (id)activeInstance;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock; // @synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock;
- (void)didFinishSplitTransition;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)setSplitAndUndocked:(_Bool)arg1;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultSelectedIndex;
- (struct CGSize)preferredSize;
- (unsigned long long)numberOfItems;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

