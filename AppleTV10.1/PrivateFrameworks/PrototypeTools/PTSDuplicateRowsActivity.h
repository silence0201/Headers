//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICopyToPasteboardActivity.h>

@class NSMutableArray;

@interface PTSDuplicateRowsActivity : UICopyToPasteboardActivity
{
    NSMutableArray *_rows;
}

- (void).cxx_destruct;
- (void)_duplicateSettings:(id)arg1 inGroup:(id)arg2;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

@end

