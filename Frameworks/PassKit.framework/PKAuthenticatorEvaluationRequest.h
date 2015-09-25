/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKAuthenticatorEvaluationRequest : NSObject {
    NSNumber *_PINLength;
    NSString *_PINTitle;
    int _policy;
}

@property (nonatomic, copy) NSNumber *PINLength;
@property (nonatomic, copy) NSString *PINTitle;
@property (nonatomic, readonly) int policy;

- (id)PINLength;
- (id)PINTitle;
- (void)dealloc;
- (id)init;
- (id)initWithPolicy:(int)arg1;
- (int)policy;
- (void)setPINLength:(id)arg1;
- (void)setPINTitle:(id)arg1;

@end
