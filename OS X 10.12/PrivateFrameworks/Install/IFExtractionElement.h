//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Install/IFTaskElement.h>

@class NSDictionary;

@interface IFExtractionElement : IFTaskElement
{
    NSDictionary *_remoteExtractionBOMErrorDictionary;
}

- (long long)run;
- (void)setInstallElement:(id)arg1;
- (void)_packageExtractionErrorNotificationHandler:(id)arg1;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (id)init;

@end
