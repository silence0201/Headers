//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MFModernAtomIconView : UIView
{
    NSArray *_iconImages;
    double _iconPadding;
    struct CGPoint _drawingOffset;
}

@property(nonatomic) struct CGPoint drawingOffset; // @synthesize drawingOffset=_drawingOffset;
@property(nonatomic) double iconPadding; // @synthesize iconPadding=_iconPadding;
@property(retain, nonatomic) NSArray *iconImages; // @synthesize iconImages=_iconImages;
- (double)preferredWidth;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

