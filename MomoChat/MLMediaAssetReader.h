//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAssetReader, AVAssetReaderOutput, NSObject<OS_dispatch_queue>;

@interface MLMediaAssetReader : NSObject
{
    _Bool _playAtActualSpeed;
    _Bool _shouldRepeat;
    _Bool _keepLooping;
    _Bool _synchronizedReading;
    _Bool _audioEncodingIsFinished;
    _Bool _videoEncodingIsFinished;
    _Bool _ended;
    AVAsset *_asset;
    id <MLMediaAssetReaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    AVAssetReader *_assetReader;
    double _startProcessingTime;
    AVAssetReaderOutput *_videoOutput;
    AVAssetReaderOutput *_audioOutput;
    CDStruct_1b6d18a9 _processingFrameTime;
}

@property(retain, nonatomic) AVAssetReaderOutput *audioOutput; // @synthesize audioOutput=_audioOutput;
@property(retain, nonatomic) AVAssetReaderOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(nonatomic) _Bool ended; // @synthesize ended=_ended;
@property(nonatomic) _Bool videoEncodingIsFinished; // @synthesize videoEncodingIsFinished=_videoEncodingIsFinished;
@property(nonatomic) _Bool audioEncodingIsFinished; // @synthesize audioEncodingIsFinished=_audioEncodingIsFinished;
@property(nonatomic) CDStruct_1b6d18a9 processingFrameTime; // @synthesize processingFrameTime=_processingFrameTime;
@property(nonatomic) double startProcessingTime; // @synthesize startProcessingTime=_startProcessingTime;
@property(nonatomic) _Bool synchronizedReading; // @synthesize synchronizedReading=_synchronizedReading;
@property(nonatomic) _Bool keepLooping; // @synthesize keepLooping=_keepLooping;
@property(retain, nonatomic) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <MLMediaAssetReaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) _Bool playAtActualSpeed; // @synthesize playAtActualSpeed=_playAtActualSpeed;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (const struct opaqueCMFormatDescription *)audioOutputFormatHint;
- (void)cancelReading;
- (void)endProcessing;
@property(readonly, nonatomic) float progress;
- (_Bool)readNextAudioSampleFromOutput:(id)arg1;
- (_Bool)readNextVideoFrameFromOutput:(id)arg1;
- (_Bool)readNextAudioSample;
- (_Bool)readNextVideoFrame;
- (void)runSynchronouslyOnAssetReadingQueue:(CDUnknownBlockType)arg1;
- (void)processAsset;
- (id)createAssetReader;
- (void)startProcessing;
- (void)startReading;
- (id)initWithAsset:(id)arg1;

@end
