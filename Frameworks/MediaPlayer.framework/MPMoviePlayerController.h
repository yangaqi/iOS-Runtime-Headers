/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
    id _implementation;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, copy) NSURL *contentURL;
@property (nonatomic) int controlStyle;
@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (getter=isFullscreen, nonatomic) BOOL fullscreen;
@property (nonatomic, readonly) BOOL isPreparedToPlay;
@property (nonatomic, readonly) unsigned int loadState;
@property (nonatomic, readonly) int playbackState;
@property (nonatomic, readonly) BOOL readyForDisplay;
@property (nonatomic) int repeatMode;
@property (nonatomic) int scalingMode;
@property (nonatomic) BOOL shouldAutoplay;
@property (nonatomic, readonly) UIView *view;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)allInstancesResignActive;

- (void).cxx_destruct;
- (BOOL)_isReadyForDisplay;
- (void)_resignActive;
- (BOOL)allowsAirPlay;
- (id)backgroundView;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (id)contentURL;
- (int)controlStyle;
- (float)currentPlaybackRate;
- (double)currentPlaybackTime;
- (void)dealloc;
- (double)duration;
- (double)endPlaybackTime;
- (void)endSeeking;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (double)initialPlaybackTime;
- (BOOL)isAirPlayVideoActive;
- (BOOL)isFullscreen;
- (BOOL)isPreparedToPlay;
- (unsigned int)loadState;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned int)movieMediaTypes;
- (int)movieSourceType;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)pause;
- (void)play;
- (double)playableDuration;
- (int)playbackState;
- (void)prepareToPlay;
- (BOOL)readyForDisplay;
- (int)repeatMode;
- (int)scalingMode;
- (void)setAllowsAirPlay:(BOOL)arg1;
- (void)setContentURL:(id)arg1;
- (void)setControlStyle:(int)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setFullscreen:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setMovieSourceType:(int)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setScalingMode:(int)arg1;
- (void)setShouldAutoplay:(BOOL)arg1;
- (BOOL)shouldAutoplay;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)stop;
- (id)view;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (void)preparePrerollAds;

- (id)_iAd_prerollController;
- (void)cancelPreroll;
- (void)playPrerollAdWithCompletionHandler:(id /* block */)arg1;
- (void)set_iAd_prerollController:(id)arg1;

@end
