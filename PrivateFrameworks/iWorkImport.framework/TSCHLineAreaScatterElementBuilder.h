/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLineAreaScatterElementBuilder : TSCHElementBuilder {
    NSMutableDictionary *mPathCache;
    NSObject<OS_dispatch_queue> *mPathCacheQueue;
}

- (unsigned int)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect {}**)arg4 outNewClipRects:(struct CGRect {}**)arg5 outNewElementPaths:(const struct CGPath {}***)arg6 outSelectionKnobLocations:(id*)arg7;
- (unsigned int)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 outNewErrorBarDescriptors:(struct { /* ? */ }**)arg6;
- (unsigned int)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const struct CGPath {}***)arg4 outSelectionKnobLocations:(id*)arg5;
- (unsigned int)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform {}**)arg4 outNewElementSizes:(struct CGSize {}**)arg5 outNewClipRect:(struct CGRect {}**)arg6 outNewStrings:(id**)arg7;
- (unsigned int)countOfPointsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize { float x1; float x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 outUnitSymbolPath:(const struct CGPath {}**)arg6 outNewTransformArray:(struct CGAffineTransform {}**)arg7 outNewGroupIndexArray:(unsigned int**)arg8;
- (float)dataPointDimension:(id)arg1 symbolType:(int)arg2 stroke:(id)arg3;
- (void)dealloc;
- (long)hitCheckPoint:(struct CGPoint { float x1; float x2; })arg1 inSeries:(id)arg2 withBodyLayout:(id)arg3;
- (id)init;
- (struct CGPoint { float x1; float x2; })labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 stringSize:(struct CGSize { float x1; float x2; })arg3 symbolType:(int)arg4;
- (BOOL)needsSeparateHitTestingPaths;
- (BOOL)p_addBottomStroke:(struct { id x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; id x3; }*)arg1 toPath:(struct CGPath { }*)arg2 seriesIndex:(unsigned int)arg3 valuesStart:(unsigned int)arg4 valuesEnd:(unsigned int)arg5 withPointsArray:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; BOOL x3; unsigned int x4; }*)arg6 withCount:(unsigned int)arg7;
- (void)p_addCurvedTopStroke:(struct { id x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; id x3; }*)arg1 toPath:(struct CGPath { }*)arg2 withPointsArray:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; BOOL x3; unsigned int x4; }*)arg3 withCount:(unsigned int)arg4;
- (void)p_addKnobsForPoint:(struct CGPoint { float x1; float x2; })arg1 strokedUnitSymbolRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toKnobSet:(id)arg3 symbolsShowing:(BOOL)arg4 includePoint:(BOOL)arg5;
- (void)p_addTopStroke:(struct { id x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; id x3; }*)arg1 toPath:(struct CGPath { }*)arg2 withPointsArray:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; BOOL x3; unsigned int x4; }*)arg3 withCount:(unsigned int)arg4 lineType:(int)arg5;
- (float)p_bubbleMaxForSeries:(id)arg1 inChartBodyLayoutSize:(struct CGSize { float x1; float x2; })arg2;
- (id)p_calculateSelectionKnobSet:(id)arg1;
- (BOOL)p_centerPointForSeries:(id)arg1 forGroupIndex:(unsigned int)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 nullsUseIntercept:(BOOL)arg6 outPoint:(struct CGPoint { float x1; float x2; }*)arg7;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; BOOL x2; }*)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4 nullsUseIntercept:(BOOL)arg5 plotAreaFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg6;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; BOOL x2; }*)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (void)p_createElementsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3 outTopStrokePath:(const struct CGPath {}**)arg4 outTopStrokeClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 outSeriesElementPath:(const struct CGPath {}**)arg6 outSeriesElementClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg7 outSymbolElementPath:(const struct CGPath {}**)arg8 outSymbolElementClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg9 outSymbolElementHitCheckPath:(const struct CGPath {}**)arg10 outSelectionKnobLocations:(id*)arg11;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; BOOL x3; unsigned int x4; }*)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 valueStart:(unsigned int)arg3 valueEnd:(unsigned int)arg4 cullBadPoints:(BOOL)arg5 outCount:(unsigned int*)arg6;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; BOOL x3; unsigned int x4; }*)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 valueStart:(int)arg3 valueEnd:(int)arg4 outCount:(unsigned int*)arg5;
- (BOOL)p_hitCheckPoint:(struct CGPoint { float x1; float x2; })arg1 inSymbolsOfSeries:(id)arg2 withBodyLayout:(id)arg3;
- (struct CGPath { }*)p_newCirclePath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
- (struct CGPath { }*)p_newCrossPath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
- (struct CGPath { }*)p_newDiamondPath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
- (struct CGPath { }*)p_newPathForSymbol:(int)arg1 context:(struct CGContext { }*)arg2 at:(struct CGPoint { float x1; float x2; })arg3 width:(float)arg4 pathLocation:(int)arg5 stroke:(id)arg6;
- (struct CGPath { }*)p_newPlusPath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4 context:(struct CGContext { }*)arg5;
- (struct CGPath { }*)p_newSquarePath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4 context:(struct CGContext { }*)arg5;
- (struct CGPath { }*)p_newTrianglePath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
- (struct CGPath { }*)p_newUncachedUnitPathForSymbol:(int)arg1 symbolSize:(float)arg2 stroke:(id)arg3 forHitCheck:(BOOL)arg4;
- (struct CGPath { }*)p_newUnitPathForSymbol:(int)arg1 symbolSize:(float)arg2 stroke:(id)arg3 forHitCheck:(BOOL)arg4;
- (struct CGPath { }*)p_newYieldPath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
- (id)p_symbolKnobLocationsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3;
- (void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(BOOL*)arg3 outOffsetInBody:(double*)arg4;
- (BOOL)symbolTypeIsClosed:(int)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingLabelInBody:(id)arg1 forSeries:(unsigned int)arg2 forGroup:(unsigned int)arg3 outElementSize:(struct CGSize { float x1; float x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingSeriesElementForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize { float x1; float x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 outNewElementPath:(const struct CGPath {}**)arg6;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingSeriesElementSymbolsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize { float x1; float x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 outNewElementPath:(const struct CGPath {}**)arg6;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingSeriesElementTopStrokeForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize { float x1; float x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 outNewElementPath:(const struct CGPath {}**)arg6;

@end
