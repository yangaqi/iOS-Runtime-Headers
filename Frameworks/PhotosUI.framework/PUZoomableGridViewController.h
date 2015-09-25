/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUZoomableGridViewController : PUPhotosGridViewController <PLCPLStatusDelegate, PUMagnfiedViewControllerDelegate> {
    PLCPLStatus *__cplStatus;
    NSTimer *__cplStatusUpdateTimer;
    struct CGPoint { 
        float x; 
        float y; 
    } __frozeMagnifierAtPosition;
    PUGridPinchGestureRecognizer *__gridPinchGestureRecognizer;
    BOOL __hasAppearedOnce;
    float __lastUpdateWidth;
    NSIndexPath *__lastZoomInTransitionAnchorIndexPath;
    unsigned int __magnifierState;
    NSArray *__syncProgressAlbums;
    UITapGestureRecognizer *__tapGestureRecognizer;
    NSIndexPath *__transitionExplicitAnchorIndexPath;
    PUGridZoomLevelInfo *__zoomLevelInfo;
    PUZoomableGridTransition *_currentGridZoomTransitionInfo;
    PUGridMagnifiedImageViewController *_magnifiedImageViewController;
    unsigned int _zoomLevel;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    PUZoomableGridViewControllerSpec *_zoomableGridSpec;
}

@property (setter=_setCplStatus:, nonatomic, retain) PLCPLStatus *_cplStatus;
@property (nonatomic) NSTimer *_cplStatusUpdateTimer;
@property (setter=_setFrozeMagnifierAtPosition:, nonatomic) struct CGPoint { float x1; float x2; } _frozeMagnifierAtPosition;
@property (setter=_setGridPinchGestureRecognizer:, nonatomic, retain) PUGridPinchGestureRecognizer *_gridPinchGestureRecognizer;
@property (setter=_setHasAppearedOnce:, nonatomic) BOOL _hasAppearedOnce;
@property (setter=_setLastUpdateWidth:, nonatomic) float _lastUpdateWidth;
@property (setter=_setLastZoomInTransitionAnchorIndexPath:, nonatomic, retain) NSIndexPath *_lastZoomInTransitionAnchorIndexPath;
@property (setter=_setMagnifierState:, nonatomic) unsigned int _magnifierState;
@property (nonatomic, readonly) NSArray *_syncProgressAlbums;
@property (setter=_setTapGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_tapGestureRecognizer;
@property (setter=_setTransitionExplicitAnchorIndexPath:, nonatomic, retain) NSIndexPath *_transitionExplicitAnchorIndexPath;
@property (nonatomic, readonly) PUGridZoomLevelInfo *_zoomLevelInfo;
@property (nonatomic, readonly) PUZoomableGridTransition *currentGridZoomTransitionInfo;
@property (setter=_setCurrentGridZoomTransitionInfo:, nonatomic, retain) PUZoomableGridTransition *currentGridZoomTransitionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (setter=_setMagnifiedImageViewController:, nonatomic, retain) PUGridMagnifiedImageViewController *magnifiedImageViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int zoomLevel;
@property (nonatomic, readonly) PUMomentsZoomLevelManager *zoomLevelManager;
@property (nonatomic, retain) PUZoomableGridViewControllerSpec *zoomableGridSpec;

- (void).cxx_destruct;
- (id)_beginInteractiveTransitionWithReferenceItemPath:(id)arg1 zoomingOut:(BOOL)arg2;
- (BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { float x1; float x2; })arg2 contentSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_configureMagnifiedImageViewController:(id)arg1 forIndexPath:(id)arg2 gestureLocationInWindow:(struct CGPoint { float x1; float x2; })arg3;
- (id)_cplStatus;
- (id)_cplStatusUpdateTimer;
- (void)_cplStatusUpdateTimerFired:(id)arg1;
- (BOOL)_disallowNavigationToHigherZoomLevel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForItemAtIndexPath:(id)arg1;
- (struct CGPoint { float x1; float x2; })_frozeMagnifierAtPosition;
- (id)_gridPinchGestureRecognizer;
- (void)_handleGridPinchGestureRecognizer:(id)arg1;
- (void)_handlePreviewGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (BOOL)_hasAppearedOnce;
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;
- (void)_invalidateSyncProgressAlbums;
- (id)_itemPathForLocationInGesture:(id)arg1;
- (float)_lastUpdateWidth;
- (id)_lastZoomInTransitionAnchorIndexPath;
- (unsigned int)_magnifierState;
- (void)_reclaimCollectionView;
- (void)_setCplStatus:(id)arg1;
- (void)_setCurrentGridZoomTransitionInfo:(id)arg1;
- (void)_setFrozeMagnifierAtPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setGridPinchGestureRecognizer:(id)arg1;
- (void)_setHasAppearedOnce:(BOOL)arg1;
- (void)_setLastUpdateWidth:(float)arg1;
- (void)_setLastZoomInTransitionAnchorIndexPath:(id)arg1;
- (void)_setMagnifiedImageViewController:(id)arg1;
- (void)_setMagnifierState:(unsigned int)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (void)_setTransitionExplicitAnchorIndexPath:(id)arg1;
- (void)_startCPLStatusUpdateTimer;
- (void)_stopCPLStatusUpdateTimer;
- (id)_syncProgressAlbums;
- (id)_tapGestureRecognizer;
- (id)_transitionExplicitAnchorIndexPath;
- (void)_updateMagnifierWithGesture:(id)arg1;
- (void)_updateTransitionsIfNecessary;
- (id)_zoomLevelInfo;
- (BOOL)allowSlideshowButton;
- (void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(struct CGPoint { float x1; float x2; })arg2 inSourceView:(id)arg3 containerView:(id)arg4;
- (id)bestTransitionReferenceItemIndexPathOutIsFromLastTransition:(BOOL*)arg1 outIsExplicit:(BOOL*)arg2;
- (BOOL)canBeginStackCollapseTransition;
- (BOOL)canDisplayEditButton;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)arg1;
- (double)cellAspectRatioHint;
- (int)cellFillMode;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (BOOL)collectionViewPointInSectionHeader:(struct CGPoint { float x1; float x2; })arg1;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (struct CGPoint { float x1; float x2; })contentOffsetForPreheating;
- (struct CGSize { float x1; float x2; })contentSizeForPreheating;
- (void)cplStatusDidChange:(id)arg1;
- (id)currentGridZoomTransitionInfo;
- (void)dealloc;
- (id)description;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)didReceiveMemoryWarning;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (void)gridZoomTransitionDidFinish:(BOOL)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (int)imageDeliveryMode;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 forIndexPath:(id)arg2;
- (id)initWithSpec:(id)arg1 zoomLevelManager:(id)arg2 zoomLevel:(unsigned int)arg3;
- (void)installGestureRecognizers;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (BOOL)isCurrentCollectionViewDataSource;
- (BOOL)isTransitionAutoAdjustContentOffsetEnabled;
- (id)magnifiedImageViewController;
- (id)magnifiedImageViewControllerCreatingIfNecessary:(BOOL)arg1;
- (void)navigateToLowerZoomLevelWithReferenceItemPath:(id)arg1;
- (id)newGridLayout;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpPreviewViewController:(id)arg2;
- (void)preheatAssets;
- (void)prepareForTransitionToZoomableViewController:(id)arg1 anchorItemIndexPath:(id)arg2 anchorShiftsColumns:(BOOL)arg3 animated:(BOOL)arg4 interactive:(BOOL)arg5;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)processDataSourceChange:(id)arg1;
- (BOOL)pu_shouldActAsTabRootViewController;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(int)arg3 animated:(BOOL)arg4;
- (void)setZoomableGridSpec:(id)arg1;
- (void)set_cplStatusUpdateTimer:(id)arg1;
- (BOOL)shouldPerformAutomaticContentOffsetAdjustment;
- (BOOL)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (void)tearDownMagnifiedImageViewController;
- (void)uninstallGestureRecognizers;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)updateLayoutMetrics;
- (BOOL)updateSpec;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsGlobalFooter;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { float x1; float x2; })arg2 inSourceView:(id)arg3;
- (unsigned int)zoomLevel;
- (id)zoomLevelManager;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 contentMode:(int*)arg3 cropInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg4 forPhotoToken:(id)arg5 operation:(int)arg6;
- (id)zoomableGridSpec;

@end
