//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextRange.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WKTextRange : UITextRange
{
    struct CGRect _startRect;
    struct CGRect _endRect;
    _Bool _isNone;
    _Bool _isRange;
    _Bool _isEditable;
    NSArray *_selectionRects;
    unsigned long long _selectedTextLength;
}

+ (id)textRangeWithState:(_Bool)arg1 isRange:(_Bool)arg2 isEditable:(_Bool)arg3 startRect:(struct CGRect)arg4 endRect:(struct CGRect)arg5 selectionRects:(id)arg6 selectedTextLength:(unsigned long long)arg7;
@property(copy, nonatomic) NSArray *selectionRects; // @synthesize selectionRects=_selectionRects;
@property(nonatomic) unsigned long long selectedTextLength; // @synthesize selectedTextLength=_selectedTextLength;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) _Bool isRange; // @synthesize isRange=_isRange;
@property(nonatomic) _Bool isNone; // @synthesize isNone=_isNone;
@property(nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(nonatomic) struct CGRect startRect; // @synthesize startRect=_startRect;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEmpty;
- (id)end;
- (id)start;
- (id)description;
- (void)dealloc;
- (_Bool)_isRanged;
- (_Bool)_isCaret;

@end
