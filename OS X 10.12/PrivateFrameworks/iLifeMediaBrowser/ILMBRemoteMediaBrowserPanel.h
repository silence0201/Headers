//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PBOXRemoteMediaBrowserPanel;

@interface ILMBRemoteMediaBrowserPanel : NSObject
{
    PBOXRemoteMediaBrowserPanel *_browserPanel;
}

+ (id)sharedInstance;
- (void)setAutosaveName:(id)arg1;
- (id)autosaveName;
- (void)setBrowserType:(unsigned long long)arg1;
- (unsigned long long)browserType;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)hidePanel;
- (void)showPanel;
- (void)toggle;
- (id)init;

@end
