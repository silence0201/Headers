//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL;

@interface _HKCDADocumentCollectionImporter : NSObject
{
    NSURL *_url;
    NSMutableArray *_collection;
    _Bool _loaded;
    _Bool _passwordProtectedZipArchive;
}

- (void).cxx_destruct;
- (id)_extractFirstOccurrenceOfTagRule:(id)arg1 extactor:(id)arg2;
- (void)_loadCollectionFromXMLData:(id)arg1;
- (void)_loadCollectionFromXMLFile:(id)arg1;
- (void)_loadCollectionFromZipArchive:(id)arg1;
- (_Bool)_containsPasswordProtectedData:(id)arg1;
- (void)_loadCollection;
- (_Bool)archiveIsPasswordProtected;
- (void)enumerateDocumentsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end

