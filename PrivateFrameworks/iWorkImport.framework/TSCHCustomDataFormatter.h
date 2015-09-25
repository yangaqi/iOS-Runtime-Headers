/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHCustomDataFormatter : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject> {
    TSUCustomFormat *mCustomFormat;
    NSUUID *mCustomFormatListKey;
    int mFormatType;
}

@property (nonatomic, readonly) TSUCustomFormat *customFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)dataFormatterWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3;

- (id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)convertToPersistableStyleObject;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (id)customFormat;
- (void)dealloc;
- (int)formatType;
- (id)initWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3;
- (BOOL)isCompatibleWithDataFormatter:(id)arg1;
- (int)numberOfDecimalPlaces;
- (id)p_stringForValue:(id)arg1 locale:(id)arg2;

@end
