//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKXMLValidator : NSObject
{
    struct _xmlSchema *_xsdSchema;
}

- (_Bool)validateXML:(id)arg1 simpleError:(id *)arg2 detailedErrors:(id *)arg3;
- (void)dealloc;
- (id)initWithPathToXSD:(id)arg1;
- (id)initWithXSD:(id)arg1;

@end

