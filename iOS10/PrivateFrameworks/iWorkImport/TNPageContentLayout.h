//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

@class TNPageLayout;

__attribute__((visibility("hidden")))
@interface TNPageContentLayout : TSDLayout
{
    TNPageLayout *mPageLayout;
    unsigned long long mPageNumber;
}

@property(readonly) unsigned long long pageNumber; // @synthesize pageNumber=mPageNumber;
@property TNPageLayout *pageLayout; // @synthesize pageLayout=mPageLayout;
- (Class)repClassOverride;
- (unsigned long long)pageCount;
- (id)computeLayoutGeometry;
- (void)validate;
- (id)initWithPageLayout:(id)arg1;

@end
