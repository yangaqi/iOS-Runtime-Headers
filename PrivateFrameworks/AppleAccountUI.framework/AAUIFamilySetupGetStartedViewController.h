/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilySetupGetStartedViewController : UIViewController <AAUIFamilySetupPage> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    UIView *_contentView;
    <AAUIFamilySetupPageDelegate> *_delegate;
    UILabel *_descriptionLabel;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    AAUIFamilySharingFeaturesView *_familyFeaturesView;
    UIImageView *_familySharingLogo;
    UIButton *_getStartedButton;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIFamilySetupPageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createDescriptionLabelForText:(id)arg1;
- (void)_getStartedButtonWasTapped:(id)arg1;
- (float)_heightForText:(id)arg1 constrainedToWidth:(float)arg2;
- (id)delegate;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (id)initWithAccount:(id)arg1 store:(id)arg2 familyEligibilityResponse:(id)arg3;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
