//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskDependencyTree.h>

@class NSMutableDictionary, NSURL, __NSCFURLSessionTaskDependencyTreeNode;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTaskDependencyTree : NSURLSessionTaskDependencyTree
{
    NSURL *_mainDocumentURL;
    NSMutableDictionary *_dependencies;
    __NSCFURLSessionTaskDependencyTreeNode *_effectiveTree;
}

+ (id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2;
- (void)set_effectiveTree:(id)arg1;
- (id)_effectiveTree;
- (void)set_dependencies:(id)arg1;
- (id)_dependencies;
- (void)setMainDocumentURL:(id)arg1;
- (id)mainDocumentURL;
- (void)dealloc;

@end
