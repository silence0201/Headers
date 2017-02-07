//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import <XQuery/XQueryExprBehavior-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XQueryTypeDeclaration : XQueryExpr <XQueryExprBehavior>
{
    long long _type;
    int _occuranceType;
    id _data;
}

+ (id)anyKind;
+ (id)text;
+ (id)comment;
+ (id)pi:(id)arg1;
+ (id)attribute:(id)arg1;
+ (id)element:(id)arg1;
+ (id)document:(id)arg1;
+ (id)item;
+ (id)empty;
+ (id)atomic:(id)arg1;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)data;
- (int)occuranceType;
- (long long)type;
- (void)setOccuranceType:(int)arg1;
- (id)initWithType:(long long)arg1 data:(id)arg2;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
