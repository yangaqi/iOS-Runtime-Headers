/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInteractionProgress : NSObject {
    int _atLeastTwoUpdates;
    double _mostRecentUpdateTime;
    NSPointerArray *_observers;
    float _percentComplete;
    float _previousPercentComplete;
    double _previousUpdateTime;
}

@property (nonatomic, readonly) float percentComplete;
@property (nonatomic, readonly) float velocity;

- (void).cxx_destruct;
- (unsigned int)_indexOfObserver:(id)arg1;
- (void)addProgressObserver:(id)arg1;
- (id)description;
- (void)endInteraction:(BOOL)arg1;
- (void)endInteraction:(BOOL)arg1 finalVelocity:(float)arg2;
- (id)init;
- (float)percentComplete;
- (void)removeProgressObserver:(id)arg1;
- (void)setPercentComplete:(float)arg1;
- (float)velocity;

@end
