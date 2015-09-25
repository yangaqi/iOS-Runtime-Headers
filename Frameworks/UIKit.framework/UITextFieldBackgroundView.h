/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextFieldBackgroundView : UIView {
    BOOL _active;
    BOOL _enabled;
    UIColor *_fillColor;
    float _progress;
}

@property (nonatomic, retain) UIColor *fillColor;

- (void).cxx_destruct;
- (void)_updateImages;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 active:(BOOL)arg2;
- (void)setActive:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFillColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setProgress:(float)arg1;

@end
