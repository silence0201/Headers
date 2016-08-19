//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class PKGroup, PKPassGroupStackView, UIView;

@protocol PKPassGroupStackViewDatasource <NSObject>
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)indexOfGroup:(PKGroup *)arg1;
- (PKGroup *)groupAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfGroups;

@optional
- (UIView *)groupStackView:(PKPassGroupStackView *)arg1 subheaderForPassType:(unsigned long long)arg2;
- (UIView *)groupStackView:(PKPassGroupStackView *)arg1 headerForPassType:(unsigned long long)arg2;
- (_Bool)groupStackView:(PKPassGroupStackView *)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
- (_Bool)groupStackViewShouldShowHeaderViews:(PKPassGroupStackView *)arg1;
@end

