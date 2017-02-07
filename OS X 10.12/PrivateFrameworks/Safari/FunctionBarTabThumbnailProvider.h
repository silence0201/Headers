//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BrowserTabViewItem, NSString;

__attribute__((visibility("hidden")))
@interface FunctionBarTabThumbnailProvider : NSObject
{
    BrowserTabViewItem *_tabViewItem;
}

@property(nonatomic) __weak BrowserTabViewItem *tabViewItem; // @synthesize tabViewItem=_tabViewItem;
- (void).cxx_destruct;
- (id)_generateWebViewThumbnail;
- (id)_generateThumbnailImageViewWithImageNamed:(id)arg1;
- (id)_generateStartPageThumbnail;
- (id)_generateGenericThumbnail;
- (BOOL)_willGenerateWKThumbnailView;
- (id)generateThumbnail;
@property(readonly, nonatomic) NSString *thumbnailSizeObservationKey;
@property(readonly, nonatomic) BOOL wantsContentHugging;
- (id)initWithTabViewItem:(id)arg1;

@end
