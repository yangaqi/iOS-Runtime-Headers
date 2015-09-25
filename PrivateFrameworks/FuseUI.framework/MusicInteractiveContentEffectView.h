/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicInteractiveContentEffectView : UIImageView {
    _UIBackdropViewSettings *_backdropSettings;
    CAFilter *_colorMatrixFilter;
    CAFilter *_colorSaturateFilter;
    CAFilter *_gaussianBlurFilter;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _inputBounds;
    NSValue *_inputBoundsValue;
    float _transitionProgress;
}

@property (nonatomic, retain) _UIBackdropViewSettings *backdropSettings;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inputBounds;
@property (nonatomic) float transitionProgress;

- (void).cxx_destruct;
- (void)_applyTransitionProgress;
- (id)backdropSettings;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backdropSettings:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputBounds;
- (void)setBackdropSettings:(id)arg1;
- (void)setInputBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTransitionProgress:(float)arg1;
- (float)transitionProgress;

@end
