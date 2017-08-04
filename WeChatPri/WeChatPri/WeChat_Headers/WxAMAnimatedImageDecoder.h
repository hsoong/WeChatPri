//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAnimatedImageDecoder.h"

@class NSData, UIImage;

@interface WxAMAnimatedImageDecoder : MMAnimatedImageDecoder
{
    NSData *m_data;
    void *m_decoder;
    struct StWxAMFrame *m_curWxFrame;
    _Bool m_hasDecodeOneLoop;
    _Bool m_isSingleFrame;
    int m_frameCount;
    int m_currentFrameId;
    UIImage *m_currentFrameImage;
    double m_currentFrameDuration;
    struct CGSize m_imageSize;
}

+ (void)updateMaxWidth:(unsigned int)arg1;
+ (id)imageOfFrame:(struct StWxAMFrame *)arg1 scale:(double)arg2;
+ (double)secondsOfFrame:(struct StWxAMFrame *)arg1;
+ (id)imageWithWxAMData:(id)arg1 scale:(double)arg2;
+ (int)frameCountForImageData:(id)arg1;
+ (_Bool)isWxAMData:(id)arg1;
- (_Bool)isSingleFrame;
- (_Bool)hasDecodeOneLoop;
- (int)currentFrameId;
- (struct CGSize)imageSize;
- (int)frameCount;
- (double)currentFrameDuration;
- (void).cxx_destruct;
- (_Bool)configDecoderWithWXGifData:(id)arg1;
- (void)uninitDecoder;
- (void)setScale:(double)arg1;
- (id)currentFrameImage;
- (void)seekToNextFrame;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
