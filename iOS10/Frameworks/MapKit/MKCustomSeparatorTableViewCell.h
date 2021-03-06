//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

__attribute__((visibility("hidden")))
@interface MKCustomSeparatorTableViewCell : MKTableViewCell
{
    double _leftSeparatorInset;
    double _rightSeparatorInset;
}

@property(nonatomic) double rightSeparatorInset; // @synthesize rightSeparatorInset=_rightSeparatorInset;
@property(nonatomic) double leftSeparatorInset; // @synthesize leftSeparatorInset=_leftSeparatorInset;
@property(nonatomic) double trailingSeparatorInset;
@property(nonatomic) double leadingSeparatorInset;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
- (void)_updateSeparatorInset;
- (struct CGRect)_separatorFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

