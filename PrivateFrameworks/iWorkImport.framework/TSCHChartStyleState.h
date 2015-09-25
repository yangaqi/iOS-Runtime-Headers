/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying>

@property (nonatomic, copy) NSMutableArray *categoryAxisStyles;
@property (nonatomic, retain) TSCHChartStyle *chartStyle;
@property (nonatomic, retain) TSCHLegendStyle *legendStyle;
@property (nonatomic, copy) NSMutableArray *paragraphStyles;
@property (nonatomic, copy) NSMutableDictionary *referenceLineStyles;
@property (nonatomic, retain) TSCHReferenceLineStyle *referenceLineThemeStyle;
@property (nonatomic, copy) NSMutableArray *seriesPrivateStyles;
@property (nonatomic, copy) NSMutableArray *seriesThemeStyles;
@property (nonatomic, copy) NSMutableArray *valueAxisStyles;

- (id)allStyles;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)applyStyleSwapTuple:(id)arg1 ignoringBeforeValues:(BOOL)arg2;
- (id)categoryAxisStyles;
- (id)chartStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)legendStyle;
- (BOOL)otherStateIsEquivalent:(id)arg1;
- (BOOL)otherStateIsEquivalent:(id)arg1 ignoringSeriesThemeStyles:(BOOL)arg2;
- (BOOL)paragraphStyleIndexesAreValid;
- (id)paragraphStyles;
- (id)referenceLineStyles;
- (id)referenceLineThemeStyle;
- (void)replaceAllInstancesOfStyle:(id)arg1 withStyle:(id)arg2;
- (id)semanticTagToStyleMap;
- (id)semanticUsagesToParagraphStyleMap;
- (id)seriesPrivateStyles;
- (id)seriesThemeStyles;
- (void)setCategoryAxisStyles:(id)arg1;
- (void)setChartStyle:(id)arg1;
- (void)setLegendStyle:(id)arg1;
- (void)setParagraphStyles:(id)arg1;
- (void)setReferenceLineStyles:(id)arg1;
- (void)setReferenceLineThemeStyle:(id)arg1;
- (void)setSeriesPrivateStyles:(id)arg1;
- (void)setSeriesThemeStyles:(id)arg1;
- (void)setStyle:(id)arg1 withSemanticTag:(id)arg2;
- (void)setValueAxisStyles:(id)arg1;
- (id)stateByExpandingForSeriesCount:(unsigned int)arg1 andReferenceLineCount:(unsigned int)arg2;
- (id)stateByExpandingReferenceLineStylesForCount:(unsigned int)arg1;
- (id)stateByExpandingSeriesStylesForSeriesCount:(unsigned int)arg1;
- (id)stateByReducingReferenceLineStyles;
- (id)stateByReducingSeriesPrivateStyles;
- (id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
- (id)styleToSemanticTagsMap;
- (id)usesOfParagraphStyleProperties;
- (id)valueAxisStyles;

@end
