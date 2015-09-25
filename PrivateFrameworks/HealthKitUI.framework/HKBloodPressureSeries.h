/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKBloodPressureSeries : HKGraphSeries {
    HKBloodPressureSeriesPresentationStyle *_selectedPresentationStyle;
    _HKStretchableImage *_stretchableDiastolicSelectedImage;
    _HKStretchableImage *_stretchableDiastolicUnselectedImage;
    _HKStretchableImage *_stretchableSystolicSelectedImage;
    _HKStretchableImage *_stretchableSystolicUnselectedImage;
    HKBloodPressureSeriesPresentationStyle *_unselectedPresentationStyle;
}

@property (nonatomic, retain) HKBloodPressureSeriesPresentationStyle *selectedPresentationStyle;
@property (nonatomic, retain) HKBloodPressureSeriesPresentationStyle *unselectedPresentationStyle;

- (void).cxx_destruct;
- (void)_drawMinMaxCoordinate:(id)arg1 withStretchableImage:(id)arg2 context:(struct CGContext { }*)arg3 contextBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (id)_generateStretchableImageWithPresentationStyle:(id)arg1 arrowsUp:(BOOL)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { int x1; int x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (float)distanceFromPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (id)selectedPresentationStyle;
- (void)setSelectedPresentationStyle:(id)arg1;
- (void)setUnselectedPresentationStyle:(id)arg1;
- (id)unselectedPresentationStyle;
- (float)xAxisDistanceFromPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (float)yAxisDifferenceToPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;

@end
