//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SIUSharingNamesModel : NSObject
{
    NSString *_baseComputerName;
    NSURL *_importFileURL;
    NSMutableDictionary *_namingDict;
}

@property(retain, nonatomic) NSString *baseComputerName; // @synthesize baseComputerName=_baseComputerName;
@property(retain, nonatomic) NSURL *importFileURL; // @synthesize importFileURL=_importFileURL;
- (id)zeroConfNameFromComputerName:(id)arg1;
- (id)plainASCIIName:(id)arg1;
- (id)canonicalMACAddress:(id)arg1;
- (id)readTextFile:(id)arg1 error:(id *)arg2;
- (id)propertyListFromRowData:(id)arg1 headers:(id)arg2 usingSeparator:(id)arg3;
- (id)extractTabSeparatedExport:(id)arg1;
- (id)extractSharingNamesFromRawText:(id)arg1;
- (id)extractHeadersFromEntry:(id)arg1 usingSeparator:(id)arg2;
- (id)extractCommaSeparatedExport:(id)arg1;
- (id)convertUserPropertyList:(id)arg1;
- (id)namingDictionaryWithError:(id *)arg1;
- (void)dealloc;
- (id)init;

@end
