//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSString, UIView;

@protocol CalloutViewControllerProtocol <NSObject>
@property(retain, nonatomic) UIView *detailView;
@property(retain, nonatomic) UIView *rightView;
@property(retain, nonatomic) UIView *leftView;
@property(copy, nonatomic) NSString *calloutSubtitle;
@property(copy, nonatomic) NSString *calloutTitle;
- (void)beginMapsTransitionMovingSideways;
- (_Bool)canDisplayCompleteTitleWhenExpanded;
- (void)setDetailView:(UIView *)arg1 animated:(_Bool)arg2;
- (void)setRightView:(UIView *)arg1 animated:(_Bool)arg2;
- (void)setLeftView:(UIView *)arg1 animated:(_Bool)arg2;
- (void)setCalloutSubtitle:(NSString *)arg1 animated:(_Bool)arg2;
@end

