/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenEdgePanRecognizerSettings : _UISettings {
    BOOL _analysisFailureOverlayVisible;
    BOOL _analysisLoggingEnabled;
    BOOL _analysisLoggingOverlayVisible;
    _UIScreenEdgePanRecognizerCornerSettings *_cornerSettings;
    _UIScreenEdgePanRecognizerDwellSettings *_dwellSettings;
    _UIScreenEdgePanRecognizerEdgeSettings *_edgeSettings;
    NSString *_multitaskingGestureMode;
    NSString *_navigationGestureMode;
}

@property (nonatomic) BOOL analysisFailureOverlayVisible;
@property (nonatomic) BOOL analysisLoggingEnabled;
@property (nonatomic) BOOL analysisLoggingOverlayVisible;
@property (nonatomic, retain) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings;
@property (nonatomic, retain) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings;
@property (nonatomic, retain) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings;
@property (nonatomic, copy) NSString *multitaskingGestureMode;
@property (nonatomic, copy) NSString *navigationGestureMode;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (BOOL)analysisFailureOverlayVisible;
- (BOOL)analysisLoggingEnabled;
- (BOOL)analysisLoggingOverlayVisible;
- (id)cornerSettings;
- (id)dwellSettings;
- (id)edgeSettings;
- (id)multitaskingGestureMode;
- (id)multitaskingGestureModePost351;
- (id)navigationGestureMode;
- (id)navigationGestureModePost351;
- (void)setAnalysisFailureOverlayVisible:(BOOL)arg1;
- (void)setAnalysisLoggingEnabled:(BOOL)arg1;
- (void)setAnalysisLoggingOverlayVisible:(BOOL)arg1;
- (void)setCornerSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setDwellSettings:(id)arg1;
- (void)setEdgeSettings:(id)arg1;
- (void)setMultitaskingGestureMode:(id)arg1;
- (void)setMultitaskingGestureModePost351:(id)arg1;
- (void)setNavigationGestureMode:(id)arg1;
- (void)setNavigationGestureModePost351:(id)arg1;

@end
