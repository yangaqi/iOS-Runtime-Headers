/* Generated by RuntimeBrowser.
 */

@protocol MUContentViewControllerProtocol <NSObject>

@required

- (UIView *)contentSnapshot;
- (void)controllerDidEnterToolMode:(AKController *)arg1;
- (void)controllerDidExitToolMode:(AKController *)arg1;
- (BOOL)controllerShouldDetectFormElements:(AKController *)arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromModelToOverlayWithPageIndex:(unsigned int)arg2 forAnnotationController:(AKController *)arg3;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromOverlayToModelWithPageIndex:(unsigned int)arg2 forAnnotationController:(AKController *)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (NSURL *)fileURL;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maxPageRectWithPageIndex:(unsigned int)arg1 forAnnotationController:(AKController *)arg2;
- (float)modelBaseScaleFactorOfPageAtIndex:(unsigned int)arg1 forAnnotationController:(AKController *)arg2;
- (NSData *)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(float)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 onOverlayAtPageIndex:(unsigned int)arg4 forAnnotationController:(AKController *)arg5;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFileURL:(NSURL *)arg1;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint { float x1; float x2; })arg1 onOverlayAtPageIndex:(unsigned int)arg2 forAnnotationController:(AKController *)arg3;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 onOverlayAtPageIndex:(unsigned int)arg2 forAnnotationController:(AKController *)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleContentRect;

@optional

- (AKController *)annotationController;
- (void)setAnnotationController:(AKController *)arg1;
- (void)setSourceContentReplacedAnnotationIndexes:(NSArray *)arg1;
- (void)setupForController:(AKController *)arg1;
- (NSArray *)sourceContentReplacedAnnotationIndexes;

@end
