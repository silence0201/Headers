//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKCSSParseObject.h>

@class IKCSSParseBlock, NSArray;

@interface IKCSSParseRule : IKCSSParseObject
{
    NSArray *_prelude;
    IKCSSParseBlock *_block;
}

@property(retain, nonatomic) IKCSSParseBlock *block; // @synthesize block=_block;
@property(retain, nonatomic) NSArray *prelude; // @synthesize prelude=_prelude;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
