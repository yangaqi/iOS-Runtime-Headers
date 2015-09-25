/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFont : NSObject {
    NSString *_compatibilityName;
    NSString *_displayName;
    NSString *_familyName;
    NSString *_fontName;
    unsigned int _hash;
}

@property (nonatomic, copy) NSString *compatibilityName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, copy) NSString *fontName;

+ (id)fontForStyles:(id*)arg1 count:(unsigned int)arg2;
+ (id)fontWithName:(id)arg1;
+ (id)fontWithName:(id)arg1 compatibilityName:(id)arg2;
+ (BOOL)isKeyValueProxyLeafType;

- (id)compatibilityName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayName;
- (id)familyName;
- (id)fontName;
- (unsigned int)hash;
- (id)init;
- (id)initWithFontName:(id)arg1;
- (id)initWithFontName:(id)arg1 compatibilityName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setCompatibilityName:(id)arg1;
- (void)setFontName:(id)arg1;

@end
