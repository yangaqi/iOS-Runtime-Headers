/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Speech.framework/Speech
 */

@interface SFTranscription : NSObject <NSCopying, NSSecureCoding> {
    NSString *_formattedString;
    NSArray *_segments;
}

@property (nonatomic, readonly, copy) NSString *formattedString;
@property (nonatomic, readonly, copy) NSArray *segments;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSegments:(id)arg1 formattedString:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedString;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)segments;

@end
