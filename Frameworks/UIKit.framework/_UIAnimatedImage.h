/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAnimatedImage : UIImage {
    double _duration;
    NSArray *_images;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bezeledImageWithShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 fillRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 drawShadow:(BOOL)arg9;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectInPixels;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentStretchInPixels;
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 interiorShadowRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 fillRed:(float)arg9 green:(float)arg10 blue:(float)arg11 alpha:(float)arg12;
- (id)_imageScaledToProportion:(float)arg1 interpolationQuality:(int)arg2;
- (id)_imageWithStylePresets:(id)arg1 withTintColor:(id)arg2;
- (id)_initWithOtherImage:(id)arg1;
- (BOOL)_isResizable;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_selectedTabBarItemImageWithTintColor:(id)arg1 metrics:(int)arg2 style:(int)arg3 forScreenScale:(float)arg4;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (id)_unselectedTabBarItemImageWithTintColor:(id)arg1 metrics:(int)arg2 style:(int)arg3 forScreenScale:(float)arg4;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)images;
- (id)initWithCoder:(id)arg1;
- (id)initWithImages:(id)arg1 duration:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 resizingMode:(int)arg2;
- (int)resizingMode;

@end
