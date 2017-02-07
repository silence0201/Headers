//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, TDSchemaCategory;

@interface TDSchemaDefinition : NSManagedObject
{
}

+ (const CDStruct_b2911908 *)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2;
+ (const CDStruct_b2911908 *)sortedElementDefinitionAtIndex:(unsigned long long)arg1 withSchema:(id)arg2;
+ (unsigned long long)elementDefinitionCountWithSchema:(id)arg1;
- (id)displayName;
- (id)previewImage;

// Remaining properties
@property(retain, nonatomic) TDSchemaCategory *category; // @dynamic category;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *parts; // @dynamic parts;
@property BOOL published; // @dynamic published;

@end
