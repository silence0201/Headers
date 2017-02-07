//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLSessionTask, NSURLSessionTaskDependencyDescription;

@interface NSURLSessionTaskDependency : NSObject
{
}

+ (id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1;
+ (id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(_Bool)arg3;

// Remaining properties
@property(readonly, retain, nonatomic) NSURLSessionTask *mainDocumentTask; // @dynamic mainDocumentTask;
@property(readonly, retain, nonatomic) NSURLSessionTask *parentTask; // @dynamic parentTask;
@property(retain, nonatomic) NSURLSessionTaskDependencyDescription *taskDependencyDescription; // @dynamic taskDependencyDescription;

@end

