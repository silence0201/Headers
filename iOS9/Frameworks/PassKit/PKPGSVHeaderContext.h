//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface PKPGSVHeaderContext : NSObject
{
    UIView *_headerView;
    UIView *_subheaderView;
    struct UIEdgeInsets _headerMargins;
    struct UIEdgeInsets _subheaderMargins;
}

+ (void)animateDisappearanceForLayer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)animateAppearanceForLayer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)createUpdatedHeaderContextForGroupStackView:(id)arg1 passType:(unsigned long long)arg2 currentContext:(id)arg3 allowSubheader:(_Bool)arg4;
@property(nonatomic) struct UIEdgeInsets subheaderMargins; // @synthesize subheaderMargins=_subheaderMargins;
@property(readonly, nonatomic) UIView *subheaderView; // @synthesize subheaderView=_subheaderView;
@property(nonatomic) struct UIEdgeInsets headerMargins; // @synthesize headerMargins=_headerMargins;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) double totalHeight;
- (double)_subheaderHeight;
- (double)_headerHeight;
- (struct CGRect)boundsForSubheaderViewInContainerFrame:(struct CGRect)arg1;
- (struct CGRect)boundsForHeaderViewInContainerFrame:(struct CGRect)arg1;
- (struct CGPoint)positionForSubheaderViewInContainerFrame:(struct CGRect)arg1;
- (struct CGPoint)positionForHeaderViewInContainerFrame:(struct CGRect)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithHeaderView:(id)arg1 headerMargins:(struct UIEdgeInsets)arg2 subheaderView:(id)arg3 subheaderMargins:(struct UIEdgeInsets)arg4;
- (id)init;

@end

