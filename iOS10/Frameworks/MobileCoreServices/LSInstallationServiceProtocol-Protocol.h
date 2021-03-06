//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol LSInstallationServiceProtocol <NSObject>
- (void)uninstallApplication:(NSString *)arg1 withOptions:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)installApplication:(NSString *)arg1 atURL:(NSURL *)arg2 withOptions:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)restoreSystemApplicationWithBundleIdentifier:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)removeSystemApplicationWithBundleIdentifier:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
@end

