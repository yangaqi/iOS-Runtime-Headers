/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController> {
    <AVPictureInPictureViewControllerDelegate> *_delegate;
    struct { 
        unsigned int pictureInPictureViewControllerViewDidAppear : 1; 
        unsigned int pictureInPictureViewControllerViewWillDisappear : 1; 
    } _delegateRespondsTo;
    AVPlayerController *_playerController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPictureInPictureViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic, readonly) BOOL shouldShowAlternateActionButtonImage;
@property (nonatomic, readonly) BOOL shouldShowLoadingIndicator;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingShouldShowAlternateActionButtonImage;
+ (id)keyPathsForValuesAffectingShouldShowLoadingIndicator;

- (void).cxx_destruct;
- (void)actionButtonTapped;
- (void)dealloc;
- (id)delegate;
- (void)didAnimatePictureInPictureStop;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPictureInPicturePlayerLayerView:(id)arg1;
- (id)pictureInPicturePlayerLayerView;
- (id)playerController;
- (void)setDelegate:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (BOOL)shouldShowAlternateActionButtonImage;
- (BOOL)shouldShowLoadingIndicator;
- (void)willAnimatePictureInPictureStart;

@end
