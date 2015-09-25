/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoBrowserOneUpPresentationAdaptor : NSObject <PUOneUpPresentationHelperAssetDisplayDelegate> {
    NSSet *__photoTokensForHiddenAssetReferences;
    BOOL __shouldDisableScroll;
    <PUPhotoBrowserZoomTransitionDelegate> *_zoomTransitionDelegate;
    struct { 
        BOOL respondsToTransitionImageForPhotoToken; 
        BOOL respondsToWillBeginForOperation; 
        BOOL respondsToDidFinishForOperation; 
        BOOL respondsToWillBeginAnimationForOperation; 
        BOOL respondsToDidFinishAnimationForOperation; 
        BOOL respondsToShouldHidePhotosTokens; 
        BOOL respondsToSetVisibilityForPhotoToken; 
    } _zoomTransitionDelegateFlags;
}

@property (setter=_setPhotoTokensForHiddenAssetReferences:, nonatomic, copy) NSSet *_photoTokensForHiddenAssetReferences;
@property (setter=_setShouldDisableScroll:, nonatomic) BOOL _shouldDisableScroll;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) <PUPhotoBrowserZoomTransitionDelegate> *zoomTransitionDelegate;

- (void).cxx_destruct;
- (id)_photoTokenForAssetReference:(id)arg1;
- (id)_photoTokensForHiddenAssetReferences;
- (void)_setPhotoTokensForHiddenAssetReferences:(id)arg1;
- (void)_setShouldDisableScroll:(BOOL)arg1;
- (BOOL)_shouldDisableScroll;
- (id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg3;
- (void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldDisableScroll:(BOOL)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (void)setZoomTransitionDelegate:(id)arg1;
- (id)zoomTransitionDelegate;

@end
