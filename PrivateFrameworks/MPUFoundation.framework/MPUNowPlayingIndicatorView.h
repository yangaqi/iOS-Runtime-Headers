/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUNowPlayingIndicatorView : UIControl {
    float _interLevelSpacing;
    float _levelCornerRadius;
    UIColor *_levelGuttersColor;
    NSMutableArray *_levelViews;
    float _levelWidth;
    float _maximumLevelHeight;
    float _minimumLevelHeight;
    int _numberOfLevels;
    int _playbackState;
    BOOL _showsLevelGutters;
}

@property (nonatomic) float interLevelSpacing;
@property (nonatomic) float levelCornerRadius;
@property (nonatomic, retain) UIColor *levelGuttersColor;
@property (nonatomic) float levelWidth;
@property (nonatomic) float maximumLevelHeight;
@property (nonatomic) float minimumLevelHeight;
@property (nonatomic) int numberOfLevels;
@property (nonatomic) int playbackState;
@property (nonatomic) BOOL showsLevelGutters;

- (void).cxx_destruct;
- (void)_reloadLevelViews;
- (void)_removeAllAnimations:(BOOL)arg1;
- (void)_updateLevelAnimations;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)interLevelSpacing;
- (void)layoutSubviews;
- (float)levelCornerRadius;
- (id)levelGuttersColor;
- (float)levelWidth;
- (float)maximumLevelHeight;
- (float)minimumLevelHeight;
- (int)numberOfLevels;
- (int)playbackState;
- (void)setInterLevelSpacing:(float)arg1;
- (void)setLevelCornerRadius:(float)arg1;
- (void)setLevelGuttersColor:(id)arg1;
- (void)setLevelWidth:(float)arg1;
- (void)setMaximumLevelHeight:(float)arg1;
- (void)setMinimumLevelHeight:(float)arg1;
- (void)setNumberOfLevels:(int)arg1;
- (void)setPlaybackState:(int)arg1;
- (void)setShowsLevelGutters:(BOOL)arg1;
- (BOOL)showsLevelGutters;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;

@end
