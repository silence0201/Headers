//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProKit/NSProBrowser.h>

__attribute__((visibility("hidden")))
@interface BKColumnHierarchyView : NSProBrowser
{
    id _delegateModule;
}

- (void)setCellClass:(Class)arg1;
- (void)setMatrixClass:(Class)arg1;
- (void)setLastMouseDownColumn:(long long)arg1 row:(long long)arg2;
- (id)menuForEvent:(id)arg1 column:(long long)arg2 row:(long long)arg3;

@end
