/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHVideoScrubberView : UIView <PUVideoScrubberControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    PUFilmstripView *__filmStripView;
    BOOL __needsUpdateFilmStripView;
    BOOL __needsUpdateVideoScrubberController;
    PUPlayheadView *__playheadView;
    UIScrollView *__scrollView;
    PUVideoScrubberController *__videoScrubberController;
    double _estimatedDuration;
    UIImage *_placeholderThumbnail;
    AVPlayer *_player;
    unsigned int _previousPlayState;
}

@property (setter=_setFilmStripView:, nonatomic, retain) PUFilmstripView *_filmStripView;
@property (setter=_setNeedsUpdateFilmStripView:, nonatomic) BOOL _needsUpdateFilmStripView;
@property (setter=_setNeedsUpdateVideoScrubberController:, nonatomic) BOOL _needsUpdateVideoScrubberController;
@property (setter=_setPlayheadView:, nonatomic, retain) PUPlayheadView *_playheadView;
@property (setter=_setScrollView:, nonatomic, retain) UIScrollView *_scrollView;
@property (setter=_setVideoScrubberController:, nonatomic, retain) PUVideoScrubberController *_videoScrubberController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double estimatedDuration;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *placeholderThumbnail;
@property (nonatomic, retain) AVPlayer *player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentAVAsset;
- (id)_filmStripView;
- (void)_handleInteractionBegan;
- (void)_handleInteractionEndedAndTogglePlayState:(BOOL)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_handleTouchGesture:(id)arg1;
- (void)_invalidateFilmStripView;
- (void)_invalidateVideoScrubberController;
- (BOOL)_isUserInteractingWithScrollView;
- (float)_lengthForDuration:(double)arg1;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateFilmStripView;
- (BOOL)_needsUpdateVideoScrubberController;
- (BOOL)_playerIsPlaying;
- (id)_playheadView;
- (id)_scrollView;
- (void)_setFilmStripView:(id)arg1;
- (void)_setNeedsUpdateFilmStripView:(BOOL)arg1;
- (void)_setNeedsUpdateVideoScrubberController:(BOOL)arg1;
- (void)_setPlayheadView:(id)arg1;
- (void)_setScrollView:(id)arg1;
- (void)_setVideoScrubberController:(id)arg1;
- (void)_startObservingPlayerStatus;
- (void)_stopObservingPlayerStatus;
- (void)_updateFilmStripViewIfNeeded;
- (void)_updateIfNeeded;
- (void)_updatePlayheadFrame;
- (void)_updateScrollViewContentOffset;
- (void)_updateVideoscrubberControllerIfNeeded;
- (void)_updateVisibleRectOfFilmStripView;
- (id)_videoScrubberController;
- (void)dealloc;
- (double)estimatedDuration;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)placeholderThumbnail;
- (id)player;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setEstimatedDuration:(double)arg1;
- (void)setPlaceholderThumbnail:(id)arg1;
- (void)setPlayer:(id)arg1;
- (float)videoScrubberController:(id)arg1 lengthForDuration:(double)arg2;
- (void)videoScrubberControllerDidUpdate:(id)arg1;

@end
