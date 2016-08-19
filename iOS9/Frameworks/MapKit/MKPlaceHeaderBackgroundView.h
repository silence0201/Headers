//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/MKPlaceHeaderViewCinematics-Protocol.h>

@class MKMapItem, NSString;
@protocol MKPlaceHeaderBackgroundViewDelegate;

@interface MKPlaceHeaderBackgroundView : UIView <MKPlaceHeaderViewCinematics>
{
    long long _backgroundType;
    MKMapItem *_mapItem;
    id <MKPlaceHeaderBackgroundViewDelegate> _delegate;
    long long _preparationState;
}

+ (id)backgroundViewForMapItem:(id)arg1 headerView:(id)arg2;
+ (id)backgroundViewForBackgroundType:(long long)arg1 mapItem:(id)arg2 headerView:(id)arg3;
+ (Class)classForBackgroundType:(long long)arg1;
+ (long long)backgroundTypeForMapItem:(id)arg1;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) long long backgroundType; // @synthesize backgroundType=_backgroundType;
@property(nonatomic) long long preparationState; // @synthesize preparationState=_preparationState;
@property(nonatomic) __weak id <MKPlaceHeaderBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)reset;
- (void)present;
- (void)prepareForPresentation;
- (id)initWithFrame:(struct CGRect)arg1 mapItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

