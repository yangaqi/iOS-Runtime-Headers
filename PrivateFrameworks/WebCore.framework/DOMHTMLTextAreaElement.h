/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property (copy) NSString *accessKey;
@property BOOL autofocus;
@property int cols;
@property (copy) NSString *defaultValue;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *name;
@property BOOL readOnly;
@property int rows;
@property int selectionEnd;
@property int selectionStart;
@property (readonly, copy) NSString *type;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

- (int)_autocapitalizeType;
- (BOOL)_isEdited;
- (id)accessKey;
- (id)autocapitalize;
- (BOOL)autocorrect;
- (BOOL)autofocus;
- (BOOL)checkValidity;
- (int)cols;
- (id)defaultValue;
- (id)dirName;
- (BOOL)disabled;
- (id)form;
- (id)labels;
- (int)maxLength;
- (id)name;
- (id)placeholder;
- (BOOL)readOnly;
- (BOOL)required;
- (int)rows;
- (void)select;
- (id)selectionDirection;
- (int)selectionEnd;
- (int)selectionStart;
- (void)setAccessKey:(id)arg1;
- (void)setAutocapitalize:(id)arg1;
- (void)setAutocorrect:(BOOL)arg1;
- (void)setAutofocus:(BOOL)arg1;
- (void)setCols:(int)arg1;
- (void)setCustomValidity:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDirName:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setMaxLength:(int)arg1;
- (void)setName:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRangeText:(id)arg1;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setReadOnly:(BOOL)arg1;
- (void)setRequired:(BOOL)arg1;
- (void)setRows:(int)arg1;
- (void)setSelectionDirection:(id)arg1;
- (void)setSelectionEnd:(int)arg1;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setSelectionStart:(int)arg1;
- (void)setValue:(id)arg1;
- (void)setWrap:(id)arg1;
- (int)structuralComplexityContribution;
- (unsigned int)textLength;
- (id)type;
- (id)validationMessage;
- (id)validity;
- (id)value;
- (BOOL)willValidate;
- (id)wrap;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (BOOL)_requiresAccessoryView;
- (BOOL)_requiresInputView;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (BOOL)_supportsAutoFill;
- (id)_textFormElement;
- (BOOL)isEditing;
- (BOOL)isTextControl;
- (BOOL)nodeCanBecomeFirstResponder;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInputTraits;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)endPosition;
- (id)startPosition;

@end
