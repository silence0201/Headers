//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WKActionSheetAssistant;

@interface _WKElementAction : NSObject
{
    struct RetainPtr<NSString> _title;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _dismissalHandler;
    WKActionSheetAssistant *_defaultActionSheetAssistant;
    long long _type;
}

+ (id)elementActionWithType:(long long)arg1;
+ (id)elementActionWithType:(long long)arg1 customTitle:(id)arg2;
+ (id)_elementActionWithType:(long long)arg1 assistant:(id)arg2;
+ (id)_elementActionWithType:(long long)arg1 customTitle:(id)arg2 assistant:(id)arg3;
+ (id)_elementActionWithType:(long long)arg1 title:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;
+ (id)elementActionWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)runActionWithElementInfo:(id)arg1;
- (void)_runActionWithElementInfo:(id)arg1 forActionSheetAssistant:(id)arg2;
@property(readonly, nonatomic) NSString *title;
- (void)dealloc;
- (id)_initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 type:(long long)arg3 assistant:(id)arg4;

@end

