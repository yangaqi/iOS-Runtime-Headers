/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeSubjectView : MFComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate> {
    unsigned int _delegateRespondsToDidRemoveContent;
    unsigned int _delegateRespondsToTextChange;
    UIButton *_notifyButton;
    unsigned int _notifyButtonSelected;
    unsigned int _showNotifyButton;
    UITextView *_textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIButton *notifyButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextView *textView;

- (BOOL)_canBecomeFirstResponder;
- (void)_updateTextContainerInsets;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)delegate;
- (BOOL)endEditing:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isNotifyButtonSelected;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)layoutSubviews;
- (id)notifyButton;
- (void)notifyButtonClicked:(id)arg1;
- (void)refreshPreferredContentSize;
- (void)setDelegate:(id)arg1;
- (void)setNotifyButtonSelected:(BOOL)arg1;
- (void)setShowNotifyButton:(BOOL)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)updateNotifyButton;

@end
