//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKExtendedAttributeEnumerator : NSObject
{
    NSString *_path;
    char *_nameBuffer;
    long long _nameBufferSize;
    char *_currentName;
    long long _currentByteOffset;
    int _options;
}

- (id)_dataForAttributeName:(char *)arg1;
- (void)rewindToBeginning;
- (id)nextAttribute;
- (void)dealloc;
- (id)initWithFileAtPath:(id)arg1 options:(int)arg2;

@end

