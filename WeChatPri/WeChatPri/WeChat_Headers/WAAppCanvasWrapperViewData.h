//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppCanvasWrapperViewData : NSObject
{
    unsigned int _debugMode;
    NSString *_appId;
    unsigned long long _version;
    NSString *_pagepath;
    NSString *_cacheKey;
    NSString *_title;
    unsigned long long _scene;
    NSString *_cpKey;
    NSString *_imageFlowStatId;
    NSString *_uniqStatId;
    struct CGSize _canvasSize;
}

@property(retain, nonatomic) NSString *uniqStatId; // @synthesize uniqStatId=_uniqStatId;
@property(retain, nonatomic) NSString *imageFlowStatId; // @synthesize imageFlowStatId=_imageFlowStatId;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end
