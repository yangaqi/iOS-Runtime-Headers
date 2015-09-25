/* Generated by RuntimeBrowser.
 */

@protocol UIKeyCommandDiscoverabilityHUDVisualStyle <NSObject>

@required

- (float)HUDPageControlBottomMargin;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })HUDViewInsets;
- (float)columnDividerHeightForHUDHeight:(float)arg1;
- (float)columnDividerWidth;
- (UIColor *)dividerColor;
- (UIColor *)inputColor;
- (float)maxHUDHeightForHeight:(float)arg1;
- (float)maxHUDWidthForWidth:(float)arg1;
- (float)minimumFontScaleBeforeTruncation;
- (float)summaryDescriptionToModifiersSpacing;
- (UIFont *)summaryFont;
- (float)summaryLineHeight;
- (float)summaryLineSpacing;
- (float)summaryModifiersSpacing;
- (float)summaryXPadding;
- (float)summaryYPadding;
- (UIColor *)titleColor;

@end
