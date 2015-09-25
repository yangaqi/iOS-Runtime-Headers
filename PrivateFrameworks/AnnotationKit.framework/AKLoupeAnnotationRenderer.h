/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKLoupeAnnotationRenderer : AKAnnotationRenderer

+ (struct CGSize { float x1; float x2; })_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint { float x1; float x2; })arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(float)arg3;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint { float x1; float x2; })arg1 ofAnnotation:(id)arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext { }*)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;

@end
