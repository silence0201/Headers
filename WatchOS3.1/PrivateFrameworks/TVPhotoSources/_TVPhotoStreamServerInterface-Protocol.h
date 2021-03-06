//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVPhotoSources/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol _TVPhotoStreamServerInterface <NSObject>
- (void)fetchImageForAssetURL:(NSURL *)arg1 completion:(void (^)(NSString *))arg2;
- (void)fetchAssetsForCollectionWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)fetchCollectionsWithCompletion:(void (^)(NSArray *))arg1;
- (void)syncWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end

