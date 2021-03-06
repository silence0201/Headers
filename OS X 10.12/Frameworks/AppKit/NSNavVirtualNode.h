//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSNavNode.h>

@class NSDate, NSImage, NSMutableArray, NSString;

@interface NSNavVirtualNode : NSNavNode
{
    NSNavNode *_parent;
    NSString *_name;
    NSString *_displayName;
    NSString *_path;
    NSNavNode *_originalNode;
    struct OpaqueIconRef *_iconRef;
    BOOL _isContainer;
    BOOL _isVisible;
    BOOL _isPackage;
    BOOL _isAlias;
    BOOL _isVolume;
    BOOL _isExtensionHidden;
    BOOL _isDisconnectedMountPoint;
    BOOL _isUnauthenticatedMountPoint;
    NSDate *_modDate;
    NSDate *_creationDate;
    long long _physicalSize;
    long long _logicalSize;
    long long _usedSize;
    NSString *_kind;
    NSString *_fileType;
    NSString *_shortVersion;
    NSString *_comment;
    NSMutableArray *_children;
    NSImage *_icon;
    NSImage *_sidebarIcon;
}

+ (id)nodeWithPath:(id)arg1 logonOK:(BOOL)arg2;
+ (id)containerNodeWithChildren:(id)arg1;
+ (id)containerNode;
+ (id)node;
+ (id)userHomeNode;
@property(retain, nonatomic) NSImage *sidebarIcon; // @synthesize sidebarIcon=_sidebarIcon;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (BOOL)acceptsRootNode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setChildren:(id)arg1;
- (id)children;
- (id)labelName;
- (id)labelColor;
- (void)setComment:(id)arg1;
- (id)comment;
- (void)setShortVersion:(id)arg1;
- (id)shortVersion;
- (void)setFileType:(id)arg1;
- (id)fileType;
- (void)setKind:(id)arg1;
- (id)kind;
- (void)setUsedSize:(long long)arg1;
- (long long)usedSize;
- (void)setLogicalSize:(long long)arg1;
- (long long)logicalSize;
- (void)setPhysicalSize:(long long)arg1;
- (long long)physicalSize;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (void)setModDate:(id)arg1;
- (id)modDate;
- (void)setIsUnauthenticatedMountPoint:(BOOL)arg1;
- (BOOL)isUnauthenticatedMountPoint;
- (void)setIsDisconnectedMountPoint:(BOOL)arg1;
- (BOOL)isDisconnectedMountPoint;
- (void)setIsExtensionHidden:(BOOL)arg1;
- (BOOL)isExtensionHidden;
- (void)setIsVolume:(BOOL)arg1;
- (BOOL)isVolume;
- (void)setIsAlias:(BOOL)arg1;
- (BOOL)isAlias;
- (void)setIsPackage:(BOOL)arg1;
- (BOOL)isPackage;
- (void)setIsVisible:(BOOL)arg1;
- (BOOL)isVisible;
- (void)setIsContainer:(BOOL)arg1;
- (BOOL)isContainer;
- (void)setIconRef:(struct OpaqueIconRef *)arg1;
- (id)previewThumbnailImage;
- (struct OpaqueIconRef *)copyPreviewIcon;
- (struct OpaqueIconRef *)copyIcon;
- (void)setOriginalNode:(id)arg1;
- (id)getNodeAsDeepResolvedNode:(BOOL)arg1;
- (id)getNodeAsResolvedNode:(BOOL)arg1 withError:(int *)arg2;
- (void)setPath:(id)arg1;
- (id)path;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
- (void)setName:(id)arg1;
- (id)name;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (id)addChildWithPath:(id)arg1;
- (void)removeObjectFromChildrenAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildrenAtIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithQueryString:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 logonOK:(BOOL)arg2;
- (id)init;

@end

