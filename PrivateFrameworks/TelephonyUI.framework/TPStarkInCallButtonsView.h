/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkInCallButtonsView : UIView {
    float _buttonDistributionScalingFactor;
    NSMutableArray *_buttonDividerViews;
    NSArray *_buttonsArray;
    NSMutableDictionary *_buttonsDictionary;
    int _buttonsMode;
    <TPStarkInCallButtonsViewDelegate> *_delegate;
    int _highlightedControlIndex;
}

@property float buttonDistributionScalingFactor;
@property (retain) NSMutableArray *buttonDividerViews;
@property (retain) NSArray *buttonsArray;
@property (retain) NSMutableDictionary *buttonsDictionary;
@property int buttonsMode;
@property <TPStarkInCallButtonsViewDelegate> *delegate;
@property (nonatomic) int highlightedControlIndex;
@property (readonly) int numberOfControls;

- (void).cxx_destruct;
- (void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forButton:(id)arg2;
- (void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forDividerView:(id)arg2;
- (float)buttonDistributionScalingFactor;
- (id)buttonDividerViews;
- (id)buttonForButtonType:(int)arg1 createIfNecessary:(BOOL)arg2 createWithHorizontalPositionFraction:(float)arg3;
- (void)buttonWasTapped:(id)arg1;
- (id)buttonsArray;
- (id)buttonsDictionary;
- (int)buttonsMode;
- (void)callCenterModelStateChangedNotification:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (id)delegate;
- (float)distributedFractionForUndistributedFraction:(float)arg1;
- (id)existingButtonsNotInArray:(id)arg1;
- (int)highlightedControlIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)keyForButtonType:(int)arg1;
- (int)nextHighlightableControlFromIndex:(int)arg1 ascending:(BOOL)arg2;
- (int)numberOfControls;
- (void)performActionForHighlightedControl;
- (void)phoneCallStatusChangedNotification:(id)arg1;
- (void)removeButtons:(id)arg1;
- (void)setButtonDistributionScalingFactor:(float)arg1;
- (void)setButtonDividerViews:(id)arg1;
- (void)setButtonsArray:(id)arg1;
- (void)setButtonsDictionary:(id)arg1;
- (void)setButtonsMode:(int)arg1;
- (void)setButtonsMode:(int)arg1 animated:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHighlightedControlIndex:(int)arg1;
- (void)setMuted:(BOOL)arg1;
- (BOOL)shouldShowActionTypeSendToVoicemail;
- (void)updateButtonsForCallModelState;

@end
