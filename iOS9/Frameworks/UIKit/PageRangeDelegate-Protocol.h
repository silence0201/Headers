//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@protocol PageRangeDelegate <NSObject>
- (_Bool)canShowMenuBar;
- (void)addAllPages:(id)arg1;
- (_Bool)canAddAllPages:(id)arg1;
- (void)removePage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;
- (void)addPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
@end

