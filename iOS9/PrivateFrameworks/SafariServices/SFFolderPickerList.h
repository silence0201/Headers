//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebBookmarkCollection;

@interface SFFolderPickerList : NSObject
{
    unsigned long long _style;
    WebBookmarkCollection *_bookmarkCollection;
}

- (void).cxx_destruct;
- (void)_appendFolderAndChildren:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4;
- (void)_appendChildrenOfFolder:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4;
- (id)folderListItemsIgnoringIdentifiers:(id)arg1;
- (id)initWithBookmarkCollection:(id)arg1 style:(unsigned long long)arg2;

@end

