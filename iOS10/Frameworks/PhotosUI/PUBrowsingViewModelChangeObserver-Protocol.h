//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChangeObserver-Protocol.h>

@class PUBrowsingViewModel, PUBrowsingViewModelChange;

@protocol PUBrowsingViewModelChangeObserver <PUViewModelChangeObserver>

@optional
- (void)viewModel:(PUBrowsingViewModel *)arg1 didChange:(PUBrowsingViewModelChange *)arg2;
@end

