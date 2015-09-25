/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject

@property (nonatomic) int endOffset;
@property (nonatomic) BOOL hasExecuted;
@property (nonatomic) int startOffset;

- (int)endOffset;
- (BOOL)hasExecuted;
- (id)initWithStartOffset:(int)arg1 endOffset:(int)arg2 hasExecuted:(BOOL)arg3;
- (void)setEndOffset:(int)arg1;
- (void)setHasExecuted:(BOOL)arg1;
- (void)setStartOffset:(int)arg1;
- (int)startOffset;

@end
