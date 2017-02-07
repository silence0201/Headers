//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class FCFeedGroup, NSString;

@interface FCArticleListGroupEmittingOperation : FCFeedGroupEmittingOperation
{
    CDUnknownBlockType _headlineFilter;
    NSString *_articleList;
    FCFeedGroup *_group;
}

@property(readonly, nonatomic) FCFeedGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) NSString *articleList; // @synthesize articleList=_articleList;
@property(copy, nonatomic) CDUnknownBlockType headlineFilter; // @synthesize headlineFilter=_headlineFilter;
- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithContext:(id)arg1 articleList:(id)arg2 group:(id)arg3;

@end
