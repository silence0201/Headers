//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMChatItem.h>

@class NSString;

@interface IMTranscriptChatItem : IMChatItem
{
    NSString *_guid;
    unsigned char _contiguousType;
    unsigned char _attachmentContiguousType;
    unsigned int _contiguousLoaded:1;
}

@property(copy, nonatomic, setter=_setGUID:) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
- (void)_setAttachmentContiguousType:(unsigned char)arg1;
- (void)_setContiguousType:(unsigned char)arg1;
- (void)_setContiguousLoaded:(_Bool)arg1;
- (_Bool)_isContiguousLoaded;
@property(readonly, nonatomic, getter=isContiguous) _Bool contiguous;
@property(readonly, nonatomic) unsigned char attachmentContiguousType;
@property(readonly, nonatomic) unsigned char contiguousType;
- (_Bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (_Bool)isContiguousWithChatItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

