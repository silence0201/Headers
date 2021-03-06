//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionSection : NSObject <NSCopying>
{
    NSArray *_actions;
    NSString *_sectionID;
}

+ (id)actionsFromSections:(id)arg1;
@property(readonly, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)copyOfActions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithActions:(id)arg1;

@end

