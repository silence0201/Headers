//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class IKAppDocument, MusicJSSearchNativeViewController, NSDictionary, NSString;

@protocol MusicJSSearchNativeViewControllerDelegate <NSObject>
- (void)jsSearchNativeViewController:(MusicJSSearchNativeViewController *)arg1 selectMediaPickerItem:(NSDictionary *)arg2;
- (void)jsSearchNativeViewController:(MusicJSSearchNativeViewController *)arg1 setSearchTerm:(NSString *)arg2;
- (void)jsSearchNativeViewController:(MusicJSSearchNativeViewController *)arg1 setStoreSearchResultsDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
@end
