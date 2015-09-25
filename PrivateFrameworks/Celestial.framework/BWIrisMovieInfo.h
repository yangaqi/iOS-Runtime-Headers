/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisMovieInfo : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _audioOffset;
    BOOL _finalEnqueuedIrisRequest;
    BOOL _finalReferenceMovie;
    BOOL _keyFrameForStillImageEmitted;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _masterMovieStartTime;
    NSURL *_masterMovieURL;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _movieEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _movieStartTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _movieTrimEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _movieTrimStartTime;
    NSURL *_outputMovieURL;
    FigCaptureMovieFileRecordingSettings *_settings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _stillImageCaptureHostTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _stillImageCaptureTime;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } audioOffset;
@property (nonatomic, readonly) BOOL containsTrims;
@property (getter=isFinalEnqueuedIrisRequest, nonatomic) BOOL finalEnqueuedIrisRequest;
@property (getter=isFinalReferenceMovie, nonatomic) BOOL finalReferenceMovie;
@property (nonatomic) BOOL keyFrameForStillImageEmitted;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } masterMovieStartTime;
@property (nonatomic, retain) NSURL *masterMovieURL;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieStartTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieTrimEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieTrimStartTime;
@property (nonatomic, readonly) NSURL *outputMovieURL;
@property (nonatomic, readonly) FigCaptureMovieFileRecordingSettings *settings;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageCaptureHostTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageCaptureTime;

+ (id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 stillImageCaptureHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;

- (id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 stillImageCaptureHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })audioOffset;
- (BOOL)containsTrims;
- (void)dealloc;
- (id)description;
- (BOOL)isFinalEnqueuedIrisRequest;
- (BOOL)isFinalReferenceMovie;
- (BOOL)keyFrameForStillImageEmitted;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })masterMovieStartTime;
- (id)masterMovieURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieStartTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieTrimEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieTrimStartTime;
- (id)outputMovieURL;
- (void)setAudioOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFinalEnqueuedIrisRequest:(BOOL)arg1;
- (void)setFinalReferenceMovie:(BOOL)arg1;
- (void)setKeyFrameForStillImageEmitted:(BOOL)arg1;
- (void)setMasterMovieStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMasterMovieURL:(id)arg1;
- (void)setMovieEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTrimEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTrimStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)settings;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageCaptureHostTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageCaptureTime;

@end
