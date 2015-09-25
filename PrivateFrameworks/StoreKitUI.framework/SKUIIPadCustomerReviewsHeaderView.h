/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPadCustomerReviewsHeaderView : UIControl <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    UIButton *_appSupportButton;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    int _selectedSortIndex;
    UIView *_separatorView;
    UIButton *_sortButton;
    UILabel *_sortLabel;
    UIPopoverController *_sortPopoverController;
    NSArray *_sortTitles;
    UILabel *_titleLabel;
    UIButton *_writeAReviewButton;
}

@property (nonatomic, readonly) UIControl *appSupportButton;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int selectedSortIndex;
@property (nonatomic, copy) NSArray *sortTitles;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIControl *writeAReviewButton;

- (void).cxx_destruct;
- (void)_destroySortPopoverController;
- (void)_reloadSortButton;
- (void)_sortButtonAction:(id)arg1;
- (id)appSupportButton;
- (id)colorScheme;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (void)layoutSubviews;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (int)selectedSortIndex;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setSelectedSortIndex:(int)arg1;
- (void)setSortTitles:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)sortTitles;
- (id)writeAReviewButton;

@end
