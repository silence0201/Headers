//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BookmarksFileImporter : NSObject
{
}

+ (id)sharedImporter;
- (id)_uniqueImportFolderName;
- (id)_dateForImportFolderName;
- (id)_collectionNamed:(id)arg1;
- (int)importBookmarksFrom:(id)arg1 intoBookmarksFolder:(id)arg2;
- (id)importBookmarksFrom:(id)arg1;
- (void)importBookmarksFromFilesAtURLs:(id)arg1;
- (void)importBookmarks;
@property(readonly, nonatomic) BOOL canImportBookmarks;

@end
