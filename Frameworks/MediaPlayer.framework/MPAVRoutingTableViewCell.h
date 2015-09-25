/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingTableViewCell : UITableViewCell {
    BOOL _debugCell;
    <MPAVRoutingTableViewCellDelegate> *_delegate;
    UILabel *_mirroringLabel;
    UIView *_mirroringSeparatorView;
    UISwitch *_mirroringSwitch;
    BOOL _mirroringSwitchVisible;
    MPAVRoute *_route;
}

@property (getter=isDebugCell, nonatomic) BOOL debugCell;
@property (nonatomic) <MPAVRoutingTableViewCellDelegate> *delegate;
@property (nonatomic) BOOL mirroringSwitchVisible;
@property (nonatomic, retain) MPAVRoute *route;

- (void).cxx_destruct;
- (void)_configureLabel:(id)arg1;
- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (BOOL)_shouldShowMirroringAsEnabledForRoute:(id)arg1;
- (id)delegate;
- (BOOL)isDebugCell;
- (void)layoutSubviews;
- (BOOL)mirroringSwitchVisible;
- (id)route;
- (void)setDebugCell:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMirroringSwitchVisible:(BOOL)arg1;
- (void)setMirroringSwitchVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRoute:(id)arg1;

@end
