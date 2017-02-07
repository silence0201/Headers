//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CARSessionConfiguration, NSNumber;

@interface CARSession : NSObject
{
    CARSessionConfiguration *_configuration;
}

@property(readonly, nonatomic) CARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)description;
- (id)requestTurnByTurnNavigationOwnership;
- (void)takeScreenForConnection;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (_Bool)recognizingSpeech;
- (_Bool)ownsTurnByTurnNavigation;
- (_Bool)ownsScreen;
- (void)requestCarUIForURL:(id)arg1;
- (void)requestCarUI;
- (id)MFiCertificateSerialNumber;
@property(readonly, copy, nonatomic) NSNumber *electronicTollCollectionAvailable;
@property(readonly, copy, nonatomic) NSNumber *limitUserInterfaces;
@property(readonly, copy, nonatomic) NSNumber *nightMode;
- (id)initWithFigEndpoint:(id)arg1;

@end
