//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UIWebPDFLinkAction : NSObject
{
    int type;
    NSString *title;
    CDUnknownBlockType handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
@property(nonatomic) int type; // @synthesize type;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void)dealloc;

@end

