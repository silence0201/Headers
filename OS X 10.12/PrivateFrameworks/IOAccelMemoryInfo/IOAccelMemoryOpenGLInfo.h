//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IOAccelMemoryOpenGLInfo : NSObject
{
    int pid;
    NSString *sharegroup;
    unsigned long long objectType;
    int name;
    int blamedProcess;
    NSString *objectDescription;
    NSString *debugLabel;
    id _expansionData;
}

@property(retain) NSString *debugLabel; // @synthesize debugLabel;
@property(retain) NSString *objectDescription; // @synthesize objectDescription;
@property int blamedProcess; // @synthesize blamedProcess;
@property int name; // @synthesize name;
@property unsigned long long objectType; // @synthesize objectType;
@property(retain) NSString *sharegroup; // @synthesize sharegroup;
@property int pid; // @synthesize pid;
- (void)dealloc;
- (id)description;

@end

