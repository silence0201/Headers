//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSString;

@interface TVPhotoSource : NSObject
{
    NSExtension *_extension;
}

- (void).cxx_destruct;
- (void)_performWithExtensionProxy:(CDUnknownBlockType)arg1;
- (void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCollectionsWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *sourceName;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier;
- (id)description;
- (id)_initWithExtension:(id)arg1;
- (id)init;

@end
