/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding> {
    BKSAnimationFenceHandle *_animationFence;
    BOOL _keyboardOnScreen;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardPosition;
}

@property (readonly, copy) BKSAnimationFenceHandle *animationFence;
@property (readonly) BOOL keyboardOnScreen;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } keyboardPosition;

+ (id)animationFence;
+ (id)informationForKeyboardDown;
+ (id)informationForKeyboardUp:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)animationFence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 onScreen:(BOOL)arg2 fence:(id)arg3;
- (BOOL)keyboardOnScreen;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keyboardPosition;
- (void)resetAnimationFencing;

@end
