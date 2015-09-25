/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSNowPlayingController : IKJSObject <MusicJSNowPlayingController> {
    MPAVController *_player;
    MusicTabBarController *_tabBarController;
}

@property (nonatomic, retain) MPAVController *player;
@property (nonatomic, retain) MusicTabBarController *tabBarController;

- (void).cxx_destruct;
- (id)player;
- (void)presentNowPlayingView;
- (void)setPlayer:(id)arg1;
- (void)setTabBarController:(id)arg1;
- (id)tabBarController;

@end
