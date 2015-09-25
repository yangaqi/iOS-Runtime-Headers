/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKEffectsRenderer : NSObject {
    id /* block */ __atomicPreviewStartedBlock;
    BOOL __atomicPreviewStartedNotificationNeeded;
    BOOL __inBackground;
    BOOL __previewLayerEnabled;
    CMKEffectsFullsizeView *__renderEffectsFullsizeView;
    CMKEffectsGridView *__renderGridView;
    int _atomicCameraMode;
    unsigned int _atomicFilterIndex;
    BOOL _atomicMirrorFilterRendering;
    CMKVideoPreviewView *_atomicVideoPreviewView;
    CIContext *_ciContext;
    <PLCameraEffectsRendererDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _droppedFramesSinceLastReportedFrameDrop;
    EAGLContext *_eaglContext;
    BOOL _gridTransitionInFlight;
    BOOL _gridTransitionIsAnimated;
    BOOL _isShowingGrid;
    double _lastReportedFrameDropTime;
    unsigned int _totalFramesSinceLastReportedFrameDrop;
}

@property (getter=_isInBackground, setter=_setInBackground:) BOOL _inBackground;
@property (setter=_setPreviewLayerEnabled:, nonatomic) BOOL _previewLayerEnabled;
@property (setter=_setPreviewStartedBlock:, copy) id /* block */ _previewStartedBlock;
@property (setter=_setPreviewStartedNotificationNeeded:) BOOL _previewStartedNotificationNeeded;
@property (setter=_setRenderEffectsFullsizeView:, retain) CMKEffectsFullsizeView *_renderEffectsFullsizeView;
@property (setter=_setRenderGridView:, retain) CMKEffectsGridView *_renderGridView;
@property unsigned int atomicFilterIndex;
@property (retain) CMKVideoPreviewView *atomicVideoPreviewView;
@property int cameraMode;
@property (nonatomic) <PLCameraEffectsRendererDelegate> *delegate;
@property (nonatomic) unsigned int filterIndex;
@property BOOL mirrorFilterRendering;
@property (getter=isShowingGrid, nonatomic) BOOL showGrid;
@property (nonatomic, retain) CMKVideoPreviewView *videoPreviewView;

- (void).cxx_destruct;
- (void)_animateGridLayerZoomToGrid:(BOOL)arg1;
- (void)_animateLayer:(id)arg1 startFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 endFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 viewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg4 animationDuration:(double)arg5 animationTimingFunction:(id)arg6 animationDelegate:(id)arg7;
- (void)_animateToGrid:(BOOL)arg1 layer:(id)arg2 fadeOutLayer:(id)arg3 startFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 endFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 completion:(id /* block */)arg6;
- (id)_animatedLayerForView:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_createContextIfNecessary;
- (void)_destroyEffectsFullsizeView;
- (void)_destroyEffectsGridView;
- (void)_deviceStarted:(id)arg1;
- (void)_forceResetToFilteredRendering:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameToZoomFromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withinFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_gridFrameForCurrentFilters;
- (BOOL)_gridTransitionInFlight;
- (void)_handlePreviewStartedFiltered:(BOOL)arg1;
- (BOOL)_isInBackground;
- (void)_notifyOfRenderIfNecessary;
- (BOOL)_previewLayerEnabled;
- (void)_previewStarted:(id)arg1;
- (id /* block */)_previewStartedBlock;
- (BOOL)_previewStartedNotificationNeeded;
- (id)_renderEffectsFullsizeView;
- (id)_renderGridView;
- (void)_renderWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_reportStatsForFrameDrops;
- (void)_resumeRendering;
- (void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(id /* block */)arg1;
- (void)_setGridTransitionIsInFlight:(BOOL)arg1;
- (void)_setInBackground:(BOOL)arg1;
- (void)_setPreviewLayerEnabled:(BOOL)arg1;
- (void)_setPreviewStartedBlock:(id /* block */)arg1;
- (void)_setPreviewStartedNotificationNeeded:(BOOL)arg1;
- (void)_setRenderEffectsFullsizeView:(id)arg1;
- (void)_setRenderGridView:(id)arg1;
- (void)_setVideoDataOutputEnabled:(BOOL)arg1;
- (id)_setupEffectsFullsizeView;
- (id)_setupEffectsGridView;
- (void)_setupEffectsView:(id)arg1;
- (void)_tearDownEffectsView:(id)arg1 removeFromSuperview:(BOOL)arg2;
- (void)_transitionFromGrid:(id /* block */)arg1;
- (void)_transitionToGrid:(id /* block */)arg1;
- (void)_updateEffectsFullsizeView;
- (void)_updateStatsForFrameWasDropped:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_zoomedFrameForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromFullFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toZoomFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (unsigned int)atomicFilterIndex;
- (id)atomicVideoPreviewView;
- (int)cameraMode;
- (void)dealloc;
- (id)delegate;
- (void)didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (unsigned int)filterIndex;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (BOOL)isShowingGrid;
- (BOOL)mirrorFilterRendering;
- (void)renderWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setAtomicFilterIndex:(unsigned int)arg1;
- (void)setAtomicVideoPreviewView:(id)arg1;
- (void)setCameraMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilterIndex:(unsigned int)arg1;
- (void)setFilterIndex:(unsigned int)arg1 forceStateChange:(BOOL)arg2 renderNotifyBlock:(id /* block */)arg3;
- (void)setMirrorFilterRendering:(BOOL)arg1;
- (void)setShowGrid:(BOOL)arg1;
- (void)setShowGrid:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setVideoPreviewView:(id)arg1;
- (id)videoPreviewView;

@end
