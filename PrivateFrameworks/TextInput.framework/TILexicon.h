/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TILexicon : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_entries;
}

@property (nonatomic, readonly) NSArray *entries;

+ (id)lexiconWithEntries:(id)arg1;
+ (void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(id /* block */)arg2;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)entries;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
