/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding> {
    int _retryCount;
    int _taskType;
}

@property (nonatomic) int retryCount;
@property (nonatomic) int taskType;

+ (BOOL)supportsSecureCoding;
+ (id)taskWithType:(int)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (void)setTaskType:(int)arg1;
- (int)taskType;

@end
