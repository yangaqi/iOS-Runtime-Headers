/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface IRInterface : CoreRCInterface {
    <IRInterfaceDelegate> *_delegate;
    BOOL _isRxInterface;
    BOOL _isTxInterface;
}

@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic) <IRInterfaceDelegate> *delegate;
@property (nonatomic) BOOL isRxInterface;
@property (nonatomic) BOOL isTxInterface;
@property (nonatomic, readonly) unsigned int maxStoredCommands;

- (id)buttons;
- (BOOL)clearAllStoredCommands:(id*)arg1;
- (id)delegate;
- (BOOL)disableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3;
- (BOOL)enableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3;
- (BOOL)isRxInterface;
- (BOOL)isTxInterface;
- (unsigned int)maxStoredCommands;
- (BOOL)processSubframe:(unsigned int*)arg1 start:(int)arg2 count:(int)arg3 timestamp:(unsigned long long)arg4;
- (void)receivedCommand:(id)arg1;
- (void)receivedFrame:(id)arg1;
- (void)receivedHIDEvent:(id)arg1;
- (BOOL)resetAllButtons:(id*)arg1;
- (BOOL)setCommand:(id)arg1 forButtonCombination:(id)arg2 delay:(double)arg3 error:(id*)arg4;
- (void)setDelegate:(id)arg1;
- (void)setIsRxInterface:(BOOL)arg1;
- (void)setIsTxInterface:(BOOL)arg1;
- (BOOL)transmitCommand:(id)arg1 pressDuration:(double)arg2 error:(id*)arg3;
- (BOOL)transmitFrame:(id)arg1 error:(id*)arg2;

@end
