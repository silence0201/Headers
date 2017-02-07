//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICVariant, NSMutableDictionary, NSURL;

@interface ICIconset : NSObject
{
    NSURL *_URL;
    ICVariant *_primaryVariant;
    NSMutableDictionary *_additionalVariants;
}

+ (id)iconsetWithURL:(id)arg1 error:(id *)arg2;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (BOOL)writeAsICNSToURL:(id)arg1 flags:(int)arg2 error:(id *)arg3;
- (BOOL)writeAsICNSToURL:(id)arg1 flags:(int)arg2;
- (id)icnsWithFlags:(int)arg1;
@property(readonly) NSMutableDictionary *additionalVariants; // @synthesize additionalVariants=_additionalVariants;
@property(readonly) ICVariant *primaryVariant; // @synthesize primaryVariant=_primaryVariant;
- (void)loadResources;
- (BOOL)addResouceWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1;

@end
