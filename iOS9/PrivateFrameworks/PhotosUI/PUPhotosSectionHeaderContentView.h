//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUPhotosSectionHeaderContentView : UIView
{
    UILabel *titleLabel;
    UILabel *locationsLabel;
    UILabel *dateLabel;
    UIImageView *locationsIconView;
}

@property(retain, nonatomic) UIImageView *locationsIconView; // @synthesize locationsIconView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel;
@property(retain, nonatomic) UILabel *locationsLabel; // @synthesize locationsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

