/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSLayoutConstraint *_collectionHeightConstraint;
    UICollectionView *_collectionView;
    SearchUIRowFormatter *_formatter;
    int _numberOfColumns;
    float _oneRowHeight;
    NSArray *_results;
    NSLayoutConstraint *_rowHeightConstraint;
    unsigned int _style;
    float _twoRowHeight;
}

@property (retain) NSLayoutConstraint *collectionHeightConstraint;
@property (retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) SearchUIRowFormatter *formatter;
@property (readonly) unsigned int hash;
@property int numberOfColumns;
@property float oneRowHeight;
@property (retain) NSArray *results;
@property (retain) NSLayoutConstraint *rowHeightConstraint;
@property unsigned int style;
@property (readonly) Class superclass;
@property float twoRowHeight;

+ (float)baselineSpacing;
+ (Class)classForResults:(id)arg1;
+ (float)horizontalImagePadding;
+ (id)labelFont;
+ (id)reuseIdentifierForResults:(id)arg1;
+ (id)rowViewForResults:(id)arg1 style:(unsigned int)arg2;

- (void).cxx_destruct;
- (void)_applyNewRowHeights;
- (float)bottomInset;
- (float)bottomPadding;
- (id)collectionHeightConstraint;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionViewDataSource;
- (id)collectionViewLayout;
- (id)collectionViewWrapper;
- (id)formatter;
- (struct CGSize { float x1; float x2; })imageSize;
- (BOOL)includeTopPaddingInSingleRowHeight;
- (id)initWithResults:(id)arg1 style:(unsigned int)arg2;
- (BOOL)isExpandable;
- (BOOL)isExpanded;
- (float)itemWidth;
- (void)layoutSubviews;
- (id)makeCollectionView;
- (int)maxDisplayedResults;
- (int)minDisplayedResults;
- (int)numberOfColumns;
- (float)numberOfColumnsForCurrentLayout;
- (int)numberOfVisibleResults;
- (float)oneRowHeight;
- (id)results;
- (id)rowHeightConstraint;
- (void)setCollectionHeightConstraint:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setFormatter:(id)arg1;
- (void)setNumberOfColumns:(int)arg1;
- (void)setOneRowHeight:(float)arg1;
- (void)setResults:(id)arg1;
- (void)setRowHeightConstraint:(id)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setTwoRowHeight:(float)arg1;
- (void)setupCollectionView:(id)arg1;
- (unsigned int)style;
- (float)topInset;
- (float)topPadding;
- (id)trimResults:(id)arg1;
- (float)twoRowHeight;
- (void)updateNumberOfColumns:(int)arg1;
- (void)updateWithResults:(id)arg1;

@end
