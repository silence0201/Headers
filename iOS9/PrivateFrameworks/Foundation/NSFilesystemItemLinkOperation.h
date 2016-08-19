//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFilesystemItemCopyOperation.h>

__attribute__((visibility("hidden")))
@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation
{
}

+ (id)filesystemItemLinkOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;
+ (_Bool)_needsStatInfo;
+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (void)_handleFTSEntry:(struct _ftsent *)arg1;
- (_Bool)_validatePaths:(id *)arg1;
- (_Bool)_shouldLinkItemAtPath:(const char *)arg1 toPath:(const char *)arg2;
- (_Bool)shouldLinkItemAtPath:(id)arg1 toPath:(id)arg2;
- (_Bool)_shouldProceedAfterErrno:(int)arg1 linkingItemAtPath:(const char *)arg2 toPath:(const char *)arg3;
- (_Bool)shouldProceedAfterError:(id)arg1 linkingItemAtPath:(id)arg2 toPath:(id)arg3;

@end

