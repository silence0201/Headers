//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@interface _AMiPhoto5Item : SBObject
{
}

- (void)stopSlideshow;
- (void)startSlideshowUsingAlbum:(id)arg1;
- (void)select;
- (void)removeFrom:(id)arg1;
- (void)newAlbumName:(id)arg1;
- (void)importFrom:(id)arg1 to:(id)arg2;
- (void)emptyTrash;
- (void)duplicateTo:(id)arg1;
- (void)assignKeywordString:(id)arg1;
- (void)addTo:(id)arg1;
- (void)saveAs:(id)arg1 in_:(id)arg2;
- (void)quitSaving:(int)arg1;
- (void)moveTo:(id)arg1;
- (BOOL)exists;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
- (void)setProperties:(id)arg1;
- (id)properties;
- (id)objectClass;

@end

