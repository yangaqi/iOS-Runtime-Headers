/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKRemoteViewController : _UIRemoteViewController <GKServiceViewControllerDelegate> {
    id /* block */ _blockToPerformAfterViewDidAppear;
    BOOL _didSetRemoteGame;
    NSMutableDictionary *_dirtyProperties;
    GKGame *_game;
    GKHostedViewController *_managingViewControllerWeak;
    UIColor *_previousStatusBarColor;
    BOOL _viewDidAppear;
}

@property (nonatomic, copy) id /* block */ blockToPerformAfterViewDidAppear;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetRemoteGame;
@property (nonatomic, retain) NSMutableDictionary *dirtyProperties;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned int hash;
@property (nonatomic) GKHostedViewController *managingViewController;
@property (nonatomic, retain) UIColor *previousStatusBarColor;
@property (nonatomic, readonly) BOOL serviceNeedsCurrentGame;
@property (nonatomic, readonly) BOOL serviceNeedsLocalPlayer;
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewDidAppear;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (int)_desiredStatusBarStyle;
- (BOOL)_dismissSelfAfterGettingShouldCancel;
- (BOOL)_dismissSelfAfterGettingShouldFinish;
- (void)_performBlockAfterViewDidAppearIfNeeded;
- (void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1;
- (id /* block */)blockToPerformAfterViewDidAppear;
- (void)dealloc;
- (BOOL)didSetRemoteGame;
- (id)dirtyProperties;
- (id)game;
- (id)managingViewController;
- (void)nudge;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedKeyPaths;
- (void)populateInitialStateForRemoteView:(id)arg1;
- (id)previousStatusBarColor;
- (void)readyToPresentInController:(id)arg1;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (BOOL)serviceNeedsCurrentGame;
- (BOOL)serviceNeedsLocalPlayer;
- (void)setBlockToPerformAfterViewDidAppear:(id /* block */)arg1;
- (void)setDidSetRemoteGame:(BOOL)arg1;
- (void)setDirtyProperties:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setManagingViewController:(id)arg1;
- (void)setPreviousStatusBarColor:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setViewDidAppear:(BOOL)arg1;
- (void)setupRemoteView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)viewDidAppear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
