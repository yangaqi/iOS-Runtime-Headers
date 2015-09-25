/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInlineAudioReplyButtonController : NSObject {
    <CKInlineAudioReplyButtonDelegate> *_delegate;
    double _holdThreshold;
    UIButton *_startButton;
    BOOL _started;
    UIButton *_stopButton;
    double _touchDownTime;
}

@property (nonatomic) <CKInlineAudioReplyButtonDelegate> *delegate;
@property (nonatomic) double holdThreshold;
@property (nonatomic, retain) UIButton *startButton;
@property (getter=isStarted, nonatomic) BOOL started;
@property (nonatomic, retain) UIButton *stopButton;
@property (nonatomic) double touchDownTime;

- (void)dealloc;
- (id)delegate;
- (double)holdThreshold;
- (id)initWithStartButton:(id)arg1 stopButton:(id)arg2;
- (BOOL)isStarted;
- (void)setDelegate:(id)arg1;
- (void)setHoldThreshold:(double)arg1;
- (void)setStartButton:(id)arg1;
- (void)setStarted:(BOOL)arg1;
- (void)setStopButton:(id)arg1;
- (void)setTouchDownTime:(double)arg1;
- (id)startButton;
- (id)stopButton;
- (void)touchDownInStartButton:(id)arg1 event:(id)arg2;
- (double)touchDownTime;
- (void)touchDragEnter:(id)arg1;
- (void)touchDragExit:(id)arg1;
- (void)touchUpInStartButton:(id)arg1 event:(id)arg2;
- (void)touchUpInStopButton:(id)arg1;
- (void)touchUpOutsideStartButton:(id)arg1 event:(id)arg2;

@end
