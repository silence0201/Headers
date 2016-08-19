//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCoding-Protocol.h>

@class NSArray, NSDate, NSURL;

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerRestorableState : NSObject <NSCoding>
{
    _Bool _scrolledToNewest;
    NSDate *_date;
    NSArray *_centerAssetUUIDs;
    NSArray *_centerAssetFrames;
    NSURL *_centerSectionEntryURIRepresentation;
    struct CGSize _collectionViewSize;
    struct CGRect _centerSectionFrame;
}

@property(nonatomic) struct CGSize collectionViewSize; // @synthesize collectionViewSize=_collectionViewSize;
@property(nonatomic) struct CGRect centerSectionFrame; // @synthesize centerSectionFrame=_centerSectionFrame;
@property(copy, nonatomic) NSURL *centerSectionEntryURIRepresentation; // @synthesize centerSectionEntryURIRepresentation=_centerSectionEntryURIRepresentation;
@property(copy, nonatomic) NSArray *centerAssetFrames; // @synthesize centerAssetFrames=_centerAssetFrames;
@property(copy, nonatomic) NSArray *centerAssetUUIDs; // @synthesize centerAssetUUIDs=_centerAssetUUIDs;
@property(nonatomic) _Bool scrolledToNewest; // @synthesize scrolledToNewest=_scrolledToNewest;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

