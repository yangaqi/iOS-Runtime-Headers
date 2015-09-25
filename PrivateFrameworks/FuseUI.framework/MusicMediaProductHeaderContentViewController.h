/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProductHeaderContentViewController : UIViewController <MusicClientContextConsuming, MusicEntityPlaybackStatusControllerObserving, MusicEntityProductHeaderLockupViewDelegate, MusicMediaDetailHeaderContentViewController> {
    MusicContextualLibraryUpdateAlertAction *_addRemoveLibraryAlertAction;
    NSArray *_addRemoveNotificationObservers;
    BOOL _allowsEditing;
    MusicClientContext *_clientContext;
    <MusicEntityProviding> *_containerEntityProvider;
    MusicEntityValueContext *_containerEntityValueContext;
    <MusicEntityProviding> *_contextualActionsOverrideTracklistEntityProvider;
    <MusicMediaProductHeaderContentViewControllerDelegate> *_delegate;
    UIImage *_editedContentArtworkImage;
    MusicHairlineView *_hairlineView;
    BOOL _hairlineVisible;
    NSString *_lockupArtworkProperty;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    BOOL _needToMakeTitleFirstResponder;
    MusicEntityPlaybackStatusController *_playbackStatusController;
    MPAVController *_player;
    int _presentationSource;
    MusicEntityViewProductHeaderLockupContentDescriptor *_productHeaderLockupContentDecriptor;
    MusicEntityProductHeaderLockupView *_productHeaderLockupView;
    BOOL _shouldDelayTransitionProgress;
    float _transitionProgress;
    BOOL _wantsRefreshActivityIndicator;
}

@property (nonatomic, readonly) MusicEntityValueContext *_containerEntityValueContext;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) <MusicEntityProviding> *containerEntityProvider;
@property (nonatomic, retain) <MusicEntityProviding> *contextualActionsOverrideTracklistEntityProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicMediaProductHeaderContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *editableText;
@property (nonatomic, retain) UIImage *editedContentArtworkImage;
@property (getter=isHairlineVisible, nonatomic) BOOL hairlineVisible;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *lockupArtworkProperty;
@property (nonatomic, copy) MusicMediaDetailTintInformation *mediaDetailTintInformation;
@property (nonatomic, readonly) int presentationSource;
@property (nonatomic, readonly) UIButton *shareButton;
@property (nonatomic) BOOL shouldDelayTransitionProgress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyLockupArtworkProperty;
- (void)_applyProductHeaderLayoutMargins;
- (void)_applyTransitionProgress;
- (BOOL)_calculateWantsRefreshButton;
- (void)_configureProductHeaderLockupContentDescriptor:(id)arg1 withTintInformation:(id)arg2;
- (void)_configureWithTintInformation;
- (void)_containerEntityProviderDidInvalidateNotification:(id)arg1;
- (id)_containerEntityValueContext;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_hairlineViewFrame;
- (id)_loadProductHeaderLockupContentDescriptor;
- (void)_presentContextualActionsFromButton:(id)arg1;
- (id)_productHeaderLockupContentDescriptor;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_reloadWantsAddToLibraryButton;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_updateContentTaste;
- (void)_updateHairline;
- (void)_updateNavigationTitle;
- (void)_updatePlaybackStatusForLockupView;
- (void)_updatePreferredContentSize;
- (void)_updateProductHeaderLockupProperties;
- (BOOL)allowsEditing;
- (id)clientContext;
- (id)containerEntityProvider;
- (id)contextualActionsOverrideTracklistEntityProvider;
- (void)dealloc;
- (id)delegate;
- (id)editableText;
- (id)editedContentArtworkImage;
- (id)initWithContainerEntityProvider:(id)arg1 presentationSource:(int)arg2;
- (BOOL)isHairlineVisible;
- (id)lockupArtworkProperty;
- (void)makeEditableTitleBecomeFirstResponder;
- (id)mediaDetailTintInformation;
- (void)playbackStatusControllerPlaybackStatusDidChange:(id)arg1;
- (int)presentationSource;
- (void)productHeaderLockupView:(id)arg1 didSelectCameraButton:(id)arg2;
- (void)productHeaderLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned int)arg2;
- (void)productHeaderLockupViewDidSelectAddToLibraryButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectContextualActionsButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectEditButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectLikeDislikeButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectRefreshButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectShareButton:(id)arg1;
- (void)productHeaderLockupViewDidUpdateEditableText:(id)arg1;
- (void)productHeaderLockupViewTintColorDidChange:(id)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setClientContext:(id)arg1;
- (void)setContextualActionsOverrideTracklistEntityProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditedContentArtworkImage:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHairlineVisible:(BOOL)arg1;
- (void)setLockupArtworkProperty:(id)arg1;
- (void)setMediaDetailHeaderHeight:(float)arg1 withMaximumHeaderHeight:(float)arg2 transitionProgress:(float)arg3;
- (void)setMediaDetailTintInformation:(id)arg1;
- (void)setShouldDelayTransitionProgress:(BOOL)arg1;
- (id)shareButton;
- (BOOL)shouldDelayTransitionProgress;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
