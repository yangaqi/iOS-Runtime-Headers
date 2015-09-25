/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuBarViewElementConfiguration : NSObject <IKAppMenuBarDocumentDelegate> {
    <SKUIMenuBarViewElementConfigurationDelegate> *_delegate;
    IKAppMenuBarDocument *_menuBarDocument;
    int _menuBarStyle;
    NSArray *_menuItemViewElements;
    BOOL _needsReload;
    <_SKUIMenuBarViewElementConfigurationReloadDelegate> *_reloadDelegate;
    SKUIMenuItemViewElement *_selectedMenuItemViewElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIMenuBarViewElementConfigurationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int menuBarStyle;
@property (getter=_needsReload, setter=_setNeedsReload:, nonatomic) BOOL needsReload;
@property (nonatomic, readonly) unsigned int numberOfMenuItems;
@property (getter=_reloadDelegate, setter=_setReloadDelegate:, nonatomic) <_SKUIMenuBarViewElementConfigurationReloadDelegate> *reloadDelegate;
@property (nonatomic, readonly) SKUIMenuItemViewElement *selectedMenuItemViewElement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureDataLoaded;
- (id)_initWithMenuBarDocument:(id)arg1;
- (BOOL)_needsReload;
- (id)_reloadDelegate;
- (void)_reloadWithMenuBarStyle:(int)arg1 menuItemViewElements:(id)arg2;
- (void)_setNeedsReload:(BOOL)arg1;
- (void)_setReloadDelegate:(id)arg1;
- (void)contentWillAppearForMenuItemAtIndex:(unsigned int)arg1 withEntityValueProvider:(id)arg2 clientContext:(id)arg3;
- (id)delegate;
- (id)documentForEntityUniqueIdentifier:(id)arg1;
- (id)documentForMenuItemAtIndex:(unsigned int)arg1;
- (id)documentOptionsForEntityUniqueIdentifier:(id)arg1;
- (id)documentOptionsForMenuItemAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfMenuItemViewElement:(id)arg1;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForEntityWithUniqueIdentifier:(id)arg2;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2;
- (void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(BOOL)arg3;
- (int)menuBarStyle;
- (unsigned int)numberOfMenuItems;
- (id)selectedMenuItemViewElement;
- (void)setDelegate:(id)arg1;

@end
