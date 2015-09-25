/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKPicaFormatter : NSFormatter {
    NSNumber *mMaximum;
    NSNumber *mMinimum;
    NSString *mPicaSeparator;
}

@property (nonatomic, copy) NSNumber *maximum;
@property (nonatomic, copy) NSNumber *minimum;
@property (nonatomic, copy) NSString *picaSeparator;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)initWithPicaSeparator:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)maximum;
- (id)minimum;
- (id)picaSeparator;
- (void)setMaximum:(id)arg1;
- (void)setMinimum:(id)arg1;
- (void)setPicaSeparator:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
