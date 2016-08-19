//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSDictionary, NSString;
@protocol SCNProgramDelegate;

@protocol SCNProgramJSExport <JSExport>
+ (id)program;
@property(nonatomic) id <SCNProgramDelegate> delegate;
@property(nonatomic, getter=isOpaque) _Bool opaque;
@property(copy, nonatomic) NSString *geometryShader;
@property(copy, nonatomic) NSString *tessellationEvaluationShader;
@property(copy, nonatomic) NSString *tessellationControlShader;
@property(copy, nonatomic) NSString *fragmentShader;
@property(copy, nonatomic) NSString *vertexShader;
- (id)copy;
- (NSString *)semanticForSymbol:(NSString *)arg1;
- (void)setSemantic:(NSString *)arg1 forSymbol:(NSString *)arg2 options:(NSDictionary *)arg3;
@end

