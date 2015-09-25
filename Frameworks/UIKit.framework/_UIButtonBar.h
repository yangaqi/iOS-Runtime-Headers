/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIButtonBar : NSObject <NSCoding, _UIBarButtonItemGroupOwner, _UIBarButtonItemViewOwner> {
    NSArray *_barButtonGroups;
    BOOL _compact;
    id /* block */ _defaultActionFilter;
    NSMutableArray *_effectiveLayout;
    UILayoutGuide *_flexibleSpaceEqualSizeLayoutGuide;
    NSMapTable *_groupLayoutMap;
    NSMutableArray *_groupLayouts;
    BOOL _itemsInGroupUseSameSize;
    NSMutableArray *_layoutActiveConstraints;
    NSMutableArray *_layoutGuides;
    _UIButtonBarLayoutMetrics *_layoutMetrics;
    NSMutableArray *_layoutViews;
    float _minimumInterItemSpace;
    NSLayoutConstraint *_minimumInterItemSpaceConstraint;
    UILayoutGuide *_minimumInterItemSpaceLayoutGuide;
    NSMapTable *_senderActionMap;
    _UIButtonBarStackView *_stackView;
    _UIButtonBarButtonVisualProvider *_visualProvider;
}

@property (nonatomic, copy) NSArray *barButtonGroups;
@property (getter=_compact, setter=_setCompact:, nonatomic) BOOL compact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ defaultActionFilter;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=_itemsInGroupUseSameSize, setter=_setItemsInGroupUseSameSize:, nonatomic) BOOL itemsInGroupUseSameSize;
@property (getter=_layoutWidth, nonatomic, readonly) float layoutWidth;
@property (nonatomic) float minimumInterItemSpace;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIBarButtonItem *ultimateFallbackItem;
@property (nonatomic, readonly) UIView *view;
@property (getter=_visualProvider, setter=_setVisualProvider:, nonatomic, copy) _UIButtonBarButtonVisualProvider *visualProvider;

+ (float)optionalConstraintsPriority;

- (void).cxx_destruct;
- (BOOL)_compact;
- (id)_debug;
- (float)_estimatedWidth;
- (void)_groupDidChangeGeometry:(id)arg1;
- (void)_groupDidChangePriority:(id)arg1;
- (void)_groupDidUpdateItems:(id)arg1 removedItems:(id)arg2;
- (void)_groupDidUpdateRepresentative:(id)arg1 fromRepresentative:(id)arg2;
- (void)_groupDidUpdateVisibility:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (BOOL)_itemsInGroupUseSameSize;
- (void)_layoutBar;
- (id)_layoutForGroup:(id)arg1;
- (float)_layoutWidth;
- (id)_newGroupLayout:(id)arg1;
- (void)_reloadBarButtonGroups;
- (void)_setCompact:(BOOL)arg1;
- (void)_setItemsInGroupUseSameSize:(BOOL)arg1;
- (void)_setNeedsVisualUpdate;
- (void)_setVisualProvider:(id)arg1;
- (id)_targetActionForBarButtonItem:(id)arg1;
- (void)_updateForTraitCollectionChange:(id)arg1;
- (void)_updateToFitInWidth:(float)arg1;
- (id)_updatedViewForBarButtonItem:(id)arg1 withView:(id)arg2;
- (void)_validateAllItems;
- (id)_visualProvider;
- (id)barButtonGroups;
- (void)dealloc;
- (id /* block */)defaultActionFilter;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)minimumInterItemSpace;
- (void)setBarButtonGroups:(id)arg1;
- (void)setDefaultActionFilter:(id /* block */)arg1;
- (void)setMinimumInterItemSpace:(float)arg1;
- (id)ultimateFallbackItem;
- (id)view;

@end
