//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitMathMLBinaryNode.h>

#import <TSReading/EQKitLayoutSchemataSubsuperscript-Protocol.h>

@class NSString;

@interface EQKitMathMLMSubscript : EQKitMathMLBinaryNode <EQKitLayoutSchemataSubsuperscript>
{
}

- (id)schemataSuperscript;
- (id)schemataSubscript;
- (id)schemataKernel;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
