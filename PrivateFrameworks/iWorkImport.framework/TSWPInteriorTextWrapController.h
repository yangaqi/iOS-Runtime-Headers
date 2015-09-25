/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPInteriorTextWrapController : NSObject <TSWPTextWrap>

+ (id)sharedInteriorTextWrapController;

- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(BOOL*)arg3;
- (float)nextUnobstructedSpanStartingAt:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (unsigned int)splitLine:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(BOOL)arg4 canvasCausedWrap:(BOOL*)arg5 skipHint:(float*)arg6 userInfo:(id)arg7;

@end
