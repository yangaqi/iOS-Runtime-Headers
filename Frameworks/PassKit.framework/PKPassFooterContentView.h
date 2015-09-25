/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassFooterContentView : UIView {
    UIView *_bottomRule;
    UIButton *_infoButton;
    BOOL _isPassAuthorized;
    BOOL _isVisibleAsFooter;
    PKPass *_pass;
    int _style;
}

@property (nonatomic, readonly) UIView *bottomRule;
@property (nonatomic, readonly) UIButton *infoButton;
@property (nonatomic, readonly) BOOL isPassAuthorized;
@property (nonatomic, readonly) BOOL isVisibleAsFooter;
@property (nonatomic, readonly) PKPass *pass;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (nonatomic, readonly) int style;

- (void)_infoButtonPressed:(id)arg1;
- (id)bottomRule;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(BOOL)arg1;
- (void)didBecomeVisibleAnimated:(BOOL)arg1;
- (id)infoButton;
- (id)initWithStyle:(int)arg1 pass:(id)arg2;
- (BOOL)isPassAuthorized;
- (BOOL)isVisibleAsFooter;
- (void)layoutSubviews;
- (id)pass;
- (id)paymentPass;
- (int)style;
- (void)willBecomeHiddenAnimated:(BOOL)arg1;
- (void)willBecomeVisibleAnimated:(BOOL)arg1;

@end
