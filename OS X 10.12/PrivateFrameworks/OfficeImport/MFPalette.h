//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFObject-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFPalette : NSObject <MFObject>
{
    NSMutableArray *m_colours;
}

+ (id)paletteWithColours:(id)arg1;
- (id)getColour:(int)arg1;
- (BOOL)resize:(int)arg1;
- (BOOL)setEntries:(int)arg1:(id)arg2;
- (int)selectInto:(id)arg1;
- (void)dealloc;
- (id)initWithColours:(id)arg1;
- (id)init;

@end
