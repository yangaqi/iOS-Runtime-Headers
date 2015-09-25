/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignature : NSObject <NSSecureCoding> {
    float _baselineOffset;
    NSDate *_creationDate;
    struct CGPath { } *_path;
    BOOL _shouldPersist;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _strokesBounds;
    NSUUID *_uniqueID;
}

@property float baselineOffset;
@property (retain) NSDate *creationDate;
@property (readonly) struct CGPath { }*path;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } pathBounds;
@property BOOL shouldPersist;
@property (retain) NSUUID *uniqueID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (float)baselineOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(struct CGPath { }*)arg1 baselineOffset:(float)arg2;
- (id)initWithPath:(struct CGPath { }*)arg1 baselineOffset:(float)arg2 creationDate:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (struct CGPath { }*)path;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pathBounds;
- (void)setBaselineOffset:(float)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setShouldPersist:(BOOL)arg1;
- (void)setUniqueID:(id)arg1;
- (BOOL)shouldPersist;
- (id)uniqueID;

@end
