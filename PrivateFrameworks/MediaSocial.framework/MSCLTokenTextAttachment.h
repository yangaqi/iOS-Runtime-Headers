/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLTokenTextAttachment : NSTextAttachment {
    id _representedObject;
    MSCLTokenTextAttachmentView *_tokenView;
}

@property (nonatomic, retain) id representedObject;
@property (nonatomic, readonly, copy) NSString *representedText;
@property (nonatomic, retain) MSCLTokenTextAttachmentView *tokenView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { float x1; float x2; })arg3 characterIndex:(unsigned int)arg4;
- (id)attributedStringWithBaseAttributes:(id)arg1;
- (id)imageForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned int)arg3;
- (id)representedObject;
- (id)representedText;
- (void)setRepresentedObject:(id)arg1;
- (void)setTokenView:(id)arg1;
- (id)tokenView;

@end
