//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Install/IFInstallQueueElement.h>

@class IFInstallActionsGroup;

@interface IFInstallActionsElement : IFInstallQueueElement
{
    IFInstallActionsGroup *_actions;
}

+ (BOOL)canRunForPackage:(id)arg1;
- (int)runTask:(id)arg1;
- (id)pathForComponentId:(id)arg1;
- (id)actionsGroup;
- (void)setActionsGroup:(id)arg1;
- (long long)run;
- (id)logDescription;
- (void)dealloc;
- (id)init;

@end
