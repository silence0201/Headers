//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DiagnosticExtensions/DEAttachmentItem.h>

#import <DiagnosticExtensions/NSSecureCoding-Protocol.h>

@class NSArray, NSURL;

@interface DEAttachmentGroup : DEAttachmentItem <NSSecureCoding>
{
    NSURL *_rootURL;
    NSArray *_attachmentItems;
}

+ (BOOL)supportsSecureCoding;
+ (id)createWithName:(id)arg1 rootURL:(id)arg2 attachmentItems:(id)arg3;
@property(retain, nonatomic) NSArray *attachmentItems; // @synthesize attachmentItems=_attachmentItems;
@property(retain, nonatomic) NSURL *rootURL; // @synthesize rootURL=_rootURL;
- (void).cxx_destruct;
- (id)attachWithDestinationDir:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

