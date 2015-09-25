/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEmptyContentPlaceholderView : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageInsets;
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_signInButton;
}

@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } placeholderImageInsets;
@property (nonatomic, copy) NSString *placeholderMessage;
@property (nonatomic, readonly) UILabel *placeholderMessageLabel;
@property (nonatomic) BOOL showsSignInButton;
@property (nonatomic, readonly) UIButton *signInButton;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)maskPlaceholdersInBackdropView:(id)arg1;
- (id)placeholderImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })placeholderImageInsets;
- (id)placeholderMessage;
- (id)placeholderMessageLabel;
- (void)setBackgroundColor:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaceholderImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPlaceholderMessage:(id)arg1;
- (void)setShowsSignInButton:(BOOL)arg1;
- (BOOL)showsSignInButton;
- (id)signInButton;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
