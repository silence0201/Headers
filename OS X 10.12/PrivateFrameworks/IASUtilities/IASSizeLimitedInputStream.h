//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IASUtilities/IASInputStream.h>

@interface IASSizeLimitedInputStream : IASInputStream
{
    unsigned long long _endOfFileOffset;
}

@property(nonatomic) unsigned long long endOfFileOffset; // @synthesize endOfFileOffset=_endOfFileOffset;
- (BOOL)seekToOffset:(unsigned long long)arg1 error:(id *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;

@end
