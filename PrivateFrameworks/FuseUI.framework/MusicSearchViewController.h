/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSearchViewController : SKUIScrollingSegmentedController <MusicClientContextConsuming, MusicJSNativeViewControllerFactory, MusicJSSearchNativeViewControllerDelegate, MusicLibrarySearchResultsViewControllerDelegate, MusicSearchBarDelegate, MusicSearchHintsViewControllerDelegate, MusicSearchRecentsViewControllerDelegate, SKUIScrollingSegmentedControllerDelegate, UIViewControllerTransitioningDelegate> {
    BOOL _allowsAllContentInStoreSearch;
    BOOL _allowsRadioContentInStoreSearch;
    MusicClientContext *_clientContext;
    BOOL _didInsertStoreSearchResultsDocument;
    BOOL _didMakeSearchBarFirstResponder;
    MusicLibrarySearchResultsViewController *_librarySearchResultsViewController;
    BOOL _mediaPickerAllowsLocalSearchOnly;
    BOOL _mediaPickerAllowsMultipleSelection;
    <MusicSearchViewControllerMediaPickerDelegate> *_mediaPickerDelegate;
    BOOL _mediaPickerIncludePlaylists;
    _UINavigationControllerPalette *_palette;
    NSString *_partialSearchString;
    MusicSearchBar *_searchBar;
    MusicSearchHintsViewController *_searchHintsViewController;
    unsigned int _searchOptions;
    BOOL _shouldUseMediaPickerViewConfiguration;
    UIViewController *_storeSearchResultsViewController;
    BOOL _storeSearchViewIsVisible;
    BOOL _storeSearchViewNeedsChangeUponAppearance;
    BOOL _storeSearchViewNeedsSubmitUponAppearance;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <MusicSearchViewControllerMediaPickerDelegate> *mediaPickerDelegate;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, readonly) float searchNavigationBarPaletteHeight;
@property (nonatomic) unsigned int searchOptions;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic) BOOL storeSearchViewIsVisible;
@property (readonly) Class superclass;

+ (id)_defaultSearchNavigationControllerWithSearchViewController:(id)arg1;
+ (id)_defaultSearchViewControllerForPresentingViewController:(id)arg1;
+ (id)defaultSearchBarWithTraitCollection:(id)arg1;
+ (id)mediaPickerSearchViewControllerWithSearchBar:(id)arg1 allowLocalSearchOnly:(BOOL)arg2 allowMultipleSelection:(BOOL)arg3 includePlaylists:(BOOL)arg4 presentingViewController:(id)arg5;
+ (id)searchViewControllerForPresentingViewController:(id)arg1 withSearchBar:(id)arg2;

- (void).cxx_destruct;
- (BOOL)_allowsLocalSearchOnly;
- (void)_attachPaletteIfNecessary;
- (void)_detachPalette;
- (void)_dispatchSearchTextChangeWithTerm:(id)arg1 usingSubmitEventType:(BOOL)arg2;
- (id)_extraInfoForStoreSearchEvent;
- (void)_handleCanShowRadioDidChangeNotification:(id)arg1;
- (void)_handleCanShowSubscriptionContentDidChangeNotification:(id)arg1;
- (void)_recordSearchRecent:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_searchSegmentedControlContentEdgeInsets;
- (id)_storeSearchSegmentTitle;
- (void)_updateForStoreContentAvailabilityChange;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)clientContext;
- (void)dealloc;
- (id)initForMediaPickerUseAllowLocalSearchOnly:(BOOL)arg1 allowMultipleSelection:(BOOL)arg2 includePlaylists:(BOOL)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)jsSearchNativeViewController:(id)arg1 selectMediaPickerItem:(id)arg2;
- (void)jsSearchNativeViewController:(id)arg1 setSearchTerm:(id)arg2;
- (void)jsSearchNativeViewController:(id)arg1 setStoreSearchResultsDocument:(id)arg2 options:(id)arg3;
- (void)librarySearchResultsViewController:(id)arg1 didSelectResultWithTitle:(id)arg2;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (id)mediaPickerDelegate;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)scrollingSegmentedController:(id)arg1 didEndDisplayingViewControllerAtIndex:(unsigned int)arg2;
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned int)arg2;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarDidLayoutSubviews:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchHintsViewController:(id)arg1 didSelectSearchHintWithText:(id)arg2 URL:(id)arg3 index:(int)arg4;
- (float)searchNavigationBarPaletteHeight;
- (unsigned int)searchOptions;
- (void)searchRecentsViewController:(id)arg1 didSelectSearchTerm:(id)arg2;
- (id)searchTerm;
- (void)setClientContext:(id)arg1;
- (void)setMediaPickerDelegate:(id)arg1;
- (void)setSearchOptions:(unsigned int)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setStoreSearchViewIsVisible:(BOOL)arg1;
- (BOOL)storeSearchViewIsVisible;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
