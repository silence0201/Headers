//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol CAMIrisRequest <NSObject>
- (_Bool)shouldPersistToLivePhotoDirectory;
- (_Bool)isOriginalLocalVideoDestinationURL:(NSURL *)arg1;
- (NSURL *)irisLocalVideoDestinationURLForOriginal:(_Bool)arg1;
- (NSString *)irisVideoPersistenceUUIDForOriginal:(_Bool)arg1;
- (NSString *)irisStillImagePersistenceUUIDForOriginal:(_Bool)arg1;
- (NSString *)irisIdentifierForOriginal:(_Bool)arg1;
@end
