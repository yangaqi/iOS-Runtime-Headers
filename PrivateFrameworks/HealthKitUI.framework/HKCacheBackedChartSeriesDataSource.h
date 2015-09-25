/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver> {
    HKChartCache *_chartCache;
    struct { 
        int index; 
        int zoom; 
    } _lastEndPath;
    struct { 
        int index; 
        int zoom; 
    } _lastStartPath;
}

@property (nonatomic, retain) HKChartCache *chartCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetCachedPaths;
- (void)blocksRequestedFromPath:(struct { int x1; int x2; })arg1 toPath:(struct { int x1; int x2; })arg2;
- (id)cachedBlockForPath:(struct { int x1; int x2; })arg1;
- (id)chartCache;
- (void)chartCacheDidUpdate:(id)arg1;
- (id)init;
- (void)setChartCache:(id)arg1;

@end
