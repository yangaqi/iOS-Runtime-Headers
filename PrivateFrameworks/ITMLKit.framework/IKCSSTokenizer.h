/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSTokenizer : NSObject {
    unsigned int currentOffset;
    IKCSSToken *reconsumeToken;
    unsigned short *textBytes;
    unsigned int textBytesCharCount;
}

+ (BOOL)isDigit:(unsigned short)arg1;
+ (BOOL)isHexDigit:(unsigned short)arg1;
+ (BOOL)isLetter:(unsigned short)arg1;
+ (BOOL)isLowercaseLetter:(unsigned short)arg1;
+ (BOOL)isNameCodePoint:(unsigned short)arg1;
+ (BOOL)isNameStartCodePoint:(unsigned short)arg1;
+ (BOOL)isNewline:(unsigned short)arg1;
+ (BOOL)isNonASCIICodePoint:(unsigned short)arg1;
+ (BOOL)isNonPrintable:(unsigned short)arg1;
+ (BOOL)isUppercaseLetter:(unsigned short)arg1;
+ (BOOL)isWhitespace:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)_consumeAsterisk:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeAt:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeBackslash:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (void)_consumeBadUrlRemnants:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeCaret:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeDollar:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeDot:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (unsigned short)_consumeEscapedCodePoint:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeHash:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeIdentLike:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeLessThan:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeMinus:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeName:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeNameStart:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeNumber:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeNumeric:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumePipe:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumePlus:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeSlash:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeString:(unsigned int)arg1 consumed:(unsigned int*)arg2 toEndChar:(unsigned short)arg3;
- (id)_consumeTilde:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeToken:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeUnicodeRange:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeUrl:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (id)_consumeWhitespace:(unsigned int)arg1 consumed:(unsigned int*)arg2;
- (unsigned short)_getChar:(unsigned int)arg1;
- (void)dealloc;
- (id)getNextToken;
- (id)initWithText:(id)arg1;
- (BOOL)isEOF:(unsigned int)arg1;
- (BOOL)isValidEscape:(unsigned int)arg1;
- (void)reconsumeToken:(id)arg1;
- (BOOL)wouldStartIdentifier:(unsigned int)arg1;
- (BOOL)wouldStartNumber:(unsigned int)arg1;

@end
