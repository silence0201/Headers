//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ML3DatabaseModuleContext;

@interface ML3DatabaseModule : NSObject
{
    NSString *_name;
    struct sqlite3_module *_moduleMethods;
    id <ML3DatabaseModuleContext> _context;
}

@property(retain, nonatomic) id <ML3DatabaseModuleContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) struct sqlite3_module *moduleMethods; // @synthesize moduleMethods=_moduleMethods;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 moduleMethods:(struct sqlite3_module *)arg2;

@end

