//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCellLayoutManager.h>

@interface EKCalendarChooserCellLayoutManager : UITableViewCellLayoutManager
{
    id _realLayoutManager;
}

+ (id)sharedLayoutManagerForStyle:(long long)arg1;
- (void).cxx_destruct;
- (_Bool)rect:(struct CGRect)arg1 trailsOtherRect:(struct CGRect)arg2 byDistance:(double *)arg3;
- (void)getTextLabelRect:(struct CGRect *)arg1 detailTextLabelRect:(struct CGRect *)arg2 forCell:(id)arg3 rowWidth:(double)arg4;
- (id)defaultDetailTextLabelFontForCell:(id)arg1;
- (id)defaultTextLabelFontForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;
- (double)defaultTextLabelFontSizeForCell:(id)arg1;
- (struct CGRect)textRectForCell:(id)arg1;
- (id)initWithCellStyle:(long long)arg1;

@end

