/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTypingIndicatorLayer : CALayer {
    CALayer *_largeBubble;
    CALayer *_mediumBubble;
    CALayer *_smallBubble;
    CALayer *_thinkingDot;
    CAReplicatorLayer *_thinkingDots;
}

@property (nonatomic, retain) CALayer *largeBubble;
@property (nonatomic, retain) CALayer *mediumBubble;
@property (nonatomic, retain) CALayer *smallBubble;
@property (nonatomic, retain) CALayer *thinkingDot;
@property (nonatomic, retain) CAReplicatorLayer *thinkingDots;

- (void)_buildThinkingDots;
- (id)_largeBubbleGrowAnimationsWithSpeed:(float)arg1 offset:(struct CGPoint { float x1; float x2; })arg2;
- (id)_largeBubblePulseAnimationWithSpeed:(float)arg1 delay:(float)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(float)arg1 offset:(struct CGPoint { float x1; float x2; })arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(float)arg1 delay:(float)arg2;
- (void)_setup;
- (id)_smallBubbleGrowAnimationsWithSpeed:(float)arg1 offset:(struct CGPoint { float x1; float x2; })arg2;
- (id)_smallBubblePulseAnimationWithSpeed:(float)arg1 delay:(float)arg2;
- (void)dealloc;
- (id)init;
- (id)largeBubble;
- (id)mediumBubble;
- (void)setLargeBubble:(id)arg1;
- (void)setMediumBubble:(id)arg1;
- (void)setSmallBubble:(id)arg1;
- (void)setThinkingDot:(id)arg1;
- (void)setThinkingDots:(id)arg1;
- (id)smallBubble;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimation;
- (void)stopAnimation;
- (void)stopPulseAnimation;
- (id)thinkingDot;
- (id)thinkingDots;

@end
