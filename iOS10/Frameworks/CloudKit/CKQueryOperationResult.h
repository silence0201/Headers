//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperationResult.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKQueryCursor;

@interface CKQueryOperationResult : CKOperationResult <NSSecureCoding>
{
    CKQueryCursor *_cursor;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;

@end

