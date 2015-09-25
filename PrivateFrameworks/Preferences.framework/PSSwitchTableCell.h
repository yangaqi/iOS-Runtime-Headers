/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSwitchTableCell : PSControlTableCell {
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic) BOOL loading;

- (void).cxx_destruct;
- (BOOL)canReload;
- (id)controlValue;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (BOOL)loading;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)setCellEnabled:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setValue:(id)arg1;

@end
