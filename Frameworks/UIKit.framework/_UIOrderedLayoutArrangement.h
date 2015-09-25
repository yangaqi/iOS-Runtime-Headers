/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIOrderedLayoutArrangement : _UILayoutArrangement <_UIOLAPropertySource> {
    BOOL _baselineRelativeArrangement;
    int _distribution;
    NSMapTable *_edgeToEdgeConstraints;
    NSMapTable *_hidingDimensionConstraints;
    BOOL _itemFittingSizeChanged;
    BOOL _itemOrderingChanged;
    float _proportionalFillDenominator;
    NSMapTable *_relatedDimensionConstraints;
    float _spacing;
    NSMapTable *_spacingOrCenteringGuides;
}

@property (setter=_setItemFittingSizeChanged:, nonatomic) BOOL _itemFittingSizeChanged;
@property (setter=_setItemOrderingChanged:, nonatomic) BOOL _itemOrderingChanged;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic) int axis;
@property (getter=isBaselineRelativeArrangement, nonatomic) BOOL baselineRelativeArrangement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int distribution;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic) float spacing;
@property (readonly) Class superclass;

+ (Class)_configurationHistoryClass;

- (void).cxx_destruct;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 andFollowingItem:(id)arg2 isFirstGap:(BOOL)arg3 isLastGap:(BOOL)arg4;
- (void)_adjustConstraintConstantsIfPossible;
- (id)_baselineViewVendTallest:(BOOL)arg1 forFirstBaseline:(BOOL)arg2;
- (float)_calculatedIntrinsicHeight;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (void)_cleanUpGuideAtGapFollowingItem:(id)arg1;
- (void)_cleanUpGuides;
- (void)_cleanUpWithoutResettingKeepAliveWorkaround;
- (void)_clearAllConstraintsArrays;
- (BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;
- (id)_dimensionRefItemFromConstraint:(id)arg1;
- (id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 andFollowingItem:(id)arg2 isFirstGap:(BOOL)arg3 isLastGap:(BOOL)arg4;
- (float)_expectedEdgeToEdgeSpacingForFirstItem:(id)arg1 secondItem:(id)arg2 isFirstGap:(BOOL)arg3 isLastGap:(BOOL)arg4;
- (id)_firstVisibleItem;
- (BOOL)_hasStaleConfiguration;
- (id)_identifierForSpanningLayoutGuide;
- (unsigned int)_indexOfItemForLocationAttribute:(int)arg1;
- (void)_insertIndividualGuidesAndConstraintsAsNecessary;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (BOOL)_itemCountChanged;
- (BOOL)_itemFittingSizeChanged;
- (BOOL)_itemOrderingChanged;
- (id)_lastVisibleItem;
- (int)_minAttributeForGapConstraint;
- (BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (void)_notifyCanvasesBaselineParametersDidChange;
- (id)_orderedConfigurationHistory;
- (id)_orderedPropertySource;
- (int)_precedingLocationAttributeForGuideConstraint;
- (void)_removeGuideAndConstraintGroupsAsNecessary;
- (void)_removeIndividualGuidesAndConstraintsAsNecessary;
- (void)_setItemFittingSizeChanged:(BOOL)arg1;
- (void)_setItemOrderingChanged:(BOOL)arg1;
- (void)_setUpDimensionConstraintForItem:(id)arg1 referenceItem:(id)arg2 atIndex:(unsigned int)arg3;
- (void)_setUpHidingDimensionConstraintForItem:(id)arg1;
- (id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned int)arg1;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (id)_tallestItem;
- (void)_trackChangesAffectingExternalBaselineConstraints:(id /* block */)arg1;
- (void)_trackChangesWithValue:(id)arg1 forKey:(id)arg2;
- (void)_updateArrangementConstraints;
- (void)_updateConfigurationHistory;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (id)_visibleItemAtEndWithEnumerationOptions:(unsigned int)arg1;
- (BOOL)_wantsProportionalDistribution;
- (int)distribution;
- (void)insertItem:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)isBaselineRelativeArrangement;
- (void)removeItem:(id)arg1;
- (void)setBaselineRelativeArrangement:(BOOL)arg1;
- (void)setDistribution:(int)arg1;
- (void)setSpacing:(float)arg1;
- (float)spacing;

@end
