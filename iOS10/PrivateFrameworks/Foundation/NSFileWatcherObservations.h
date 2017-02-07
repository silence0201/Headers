//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSFileWatcherObservations : NSObject
{
    _Bool _attributesChanged;
    _Bool _contentsChanged;
    _Bool _deleted;
    _Bool _moved;
    NSString *_lastObservedPath;
    _Bool _didResetPath;
    NSString *_path;
}

- (void)notifyObserver:(CDUnknownBlockType)arg1;
- (id)description;
- (void)addAnnouncedMoveToPath:(id)arg1;
- (void)addDetectedMoveToPath:(id)arg1;
- (void)addDeletion;
- (void)addContentsChange;
- (void)addAttributeChange;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

