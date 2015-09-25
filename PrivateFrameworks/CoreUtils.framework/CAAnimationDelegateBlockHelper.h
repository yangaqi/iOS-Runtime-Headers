/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CAAnimationDelegateBlockHelper : NSObject {
    id /* block */ _animationDidStartBlock;
    id /* block */ _animationDidStopBlock;
}

@property (nonatomic, copy) id /* block */ animationDidStartBlock;
@property (nonatomic, copy) id /* block */ animationDidStopBlock;

- (void)animationDidStart:(id)arg1;
- (id /* block */)animationDidStartBlock;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id /* block */)animationDidStopBlock;
- (void)dealloc;
- (void)setAnimationDidStartBlock:(id /* block */)arg1;
- (void)setAnimationDidStopBlock:(id /* block */)arg1;

@end
