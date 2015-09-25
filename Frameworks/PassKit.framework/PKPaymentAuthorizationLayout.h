/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationLayout : NSObject <UITraitEnvironment> {
    float _contentHeightPadding;
    float _contentMargin;
    UIViewController *_controller;
    float _headerMargin;
    float _valueLeftMargin;
}

@property (nonatomic, readonly) float contentHeightPadding;
@property (nonatomic, readonly) float contentMargin;
@property (nonatomic) UIViewController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float headerMargin;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) float valueLeftMargin;

- (float)contentHeightPadding;
- (float)contentMargin;
- (id)controller;
- (float)headerMargin;
- (id)initWithController:(id)arg1;
- (void)setController:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (float)valueLeftMargin;

@end
