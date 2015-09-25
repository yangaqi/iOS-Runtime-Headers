/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFReaderAppearanceMainViewController : _SFPopoverSizingTableViewController <SFReaderAppearanceFontSizeSelectorDelegate, SFReaderAppearanceThemeSelectorTableViewCellDelegate> {
    UIImage *_checkmarkImage;
    WBSReaderFontManager *_fontManager;
    NSDictionary *_initialReaderConfiguration;
    _SFReaderAppearanceViewController *_ownerAppearanceViewController;
    int _selectedFontIndex;
    NSString *_themeName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) _SFReaderAppearanceViewController *ownerAppearanceViewController;
@property (nonatomic, readonly) WBSReaderFont *selectedFont;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *themeName;

- (void).cxx_destruct;
- (void)_determineSelectedFontIndex;
- (void)_determineSelectedTheme;
- (void)_determineSelectedValues;
- (int)_themeFromThemeName:(id)arg1;
- (id)_themeNameFromTheme:(int)arg1;
- (id)checkmarkImage;
- (id)initWithInitialReaderConfiguration:(id)arg1 fontManager:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)ownerAppearanceViewController;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)readerAppearanceFontSizeDidDecrease:(id)arg1;
- (void)readerAppearanceFontSizeDidIncrease:(id)arg1;
- (void)readerAppearanceThemeSelectorDidChangeTheme:(id)arg1;
- (id)selectedFont;
- (void)setOwnerAppearanceViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)themeName;
- (void)viewDidLoad;

@end
