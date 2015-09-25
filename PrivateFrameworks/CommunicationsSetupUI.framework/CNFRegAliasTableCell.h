/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegAliasTableCell : PSTableCell {
    BOOL _hasSpinner;
    BOOL _hidesDisclosureButton;
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic) BOOL hasSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (void)_updateIcon;
- (void)dealloc;
- (BOOL)hasSpinner;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)setHasSpinner:(BOOL)arg1;
- (void)setHidesDisclosureButton:(BOOL)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (BOOL)usesStandardBackgroundImage;

@end
