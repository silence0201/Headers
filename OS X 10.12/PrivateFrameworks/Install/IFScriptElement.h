//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Install/IFTaskElement.h>

@class IFDiskObject, NSString;

@interface IFScriptElement : IFTaskElement
{
    NSString *_action;
    BOOL _runScriptInTemp;
    IFDiskObject *_targetVolume;
}

- (long long)run;
- (void)setTaskEnvironment;
- (id)description;
- (id)logDescription;
- (void)setRunScriptInTemp:(BOOL)arg1;
- (void)dealloc;
- (id)initWithAction:(id)arg1 stateDelegate:(id)arg2 targetVolume:(id)arg3 packageController:(id)arg4;

@end
