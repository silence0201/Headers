//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibraryViewConfiguration.h>

@interface MusicLibraryAdaptiveViewConfiguration : MusicLibraryViewConfiguration
{
    MusicLibraryViewConfiguration *_compactWidthConfiguration;
    MusicLibraryViewConfiguration *_regularWidthConfiguration;
}

- (void).cxx_destruct;
- (id)loadRegularWidthConfiguration;
- (id)loadCompactWidthConfiguration;
- (void)enumerateContentViewConfigurationsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) MusicLibraryViewConfiguration *regularWidthConfiguration;
@property(readonly, nonatomic) MusicLibraryViewConfiguration *compactWidthConfiguration;
- (id)init;

@end
