//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EOSPackagePreflightController : NSObject
{
}

+ (id)sharedController;
- (BOOL)_extractRestoreBundleFromPackage:(id)arg1 toDestination:(id)arg2;
- (id)_restoreBundleSpecifierFromFirmwareBundleComponent:(id)arg1 packageSpecifier:(id)arg2;
- (id)_restoreBundleSpecifiersInPackageSpecifiers:(id)arg1;
- (void)preflightPackageSpecifiers:(id)arg1 request:(id)arg2 tagPrefix:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

