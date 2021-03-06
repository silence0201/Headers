//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OSAKit/NSCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface OSAScriptElement : NSObject <NSCoding>
{
    OSAScriptElement *_superElement;
    NSMutableArray *_subElements;
    NSString *_text;
    NSString *_remainingText;
    struct _NSRange _range;
    struct _NSRange _nameRange;
    struct _NSRange _lineRange;
}

+ (id)elementWithSuperElement:(id)arg1;
+ (id)elementWithText:(id)arg1 range:(struct _NSRange)arg2;
+ (id)elementWithText:(id)arg1;
+ (id)element;
- (BOOL)generateSubElementsIntoText:(id)arg1 indent:(unsigned long long)arg2;
- (BOOL)generateIntoText:(id)arg1 indent:(unsigned long long)arg2;
- (void)addIndents:(unsigned long long)arg1 intoText:(id)arg2;
- (id)previousElementWithKindOfClass:(Class)arg1;
- (id)previousElement;
- (id)nextElementWithKindOfClass:(Class)arg1;
- (id)nextElement;
- (id)elementWithKindOfClass:(Class)arg1 andName:(id)arg2;
- (id)elementsWithMemberOfClass:(Class)arg1;
- (id)elementsWithKindOfClass:(Class)arg1;
- (void)removeAllElements;
- (void)removeElement:(id)arg1;
- (void)addElement:(id)arg1 beforeElement:(id)arg2;
- (void)addElement:(id)arg1 afterElement:(id)arg2;
- (void)addElement:(id)arg1;
- (id)title;
- (unsigned long long)level;
- (struct _NSRange)rangeOfSubElements;
- (struct _NSRange)lineRangeOfSubElements;
- (void)setLineRange:(struct _NSRange)arg1;
- (struct _NSRange)lineRange;
- (void)setNameRange:(struct _NSRange)arg1;
- (struct _NSRange)nameRange;
- (void)setRange:(struct _NSRange)arg1;
- (struct _NSRange)range;
- (void)setName:(id)arg1;
- (id)name;
- (void)setRemainingText:(id)arg1;
- (id)remainingText;
- (void)setText:(id)arg1;
- (id)text;
- (void)setSubElements:(id)arg1;
- (id)subElements;
- (void)setSuperElement:(id)arg1;
- (id)superElement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithSuperElement:(id)arg1;
- (id)initWithText:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithText:(id)arg1;
- (id)init;

@end

