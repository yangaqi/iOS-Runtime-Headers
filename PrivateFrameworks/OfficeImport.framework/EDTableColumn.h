/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTableColumn : NSObject {
    unsigned int mDataAreaDxfIndex;
    unsigned int mHeaderRowDxfIndex;
    EDString *mName;
    EDResources *mResources;
    unsigned int mTotalsRowDxfIndex;
    EDString *mTotalsRowLabel;
    EDString *mUniqueName;
}

+ (id)tableColumnWithResources:(id)arg1;

- (id)dataAreaDxf;
- (unsigned int)dataAreaDxfIndex;
- (void)dealloc;
- (id)description;
- (id)headerRowDxf;
- (unsigned int)headerRowDxfIndex;
- (id)initWithResources:(id)arg1;
- (id)name;
- (void)setDataAreaDxf:(id)arg1;
- (void)setDataAreaDxfIndex:(unsigned int)arg1;
- (void)setHeaderRowDxf:(id)arg1;
- (void)setHeaderRowDxfIndex:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setTotalsRowDxf:(id)arg1;
- (void)setTotalsRowDxfIndex:(unsigned int)arg1;
- (void)setTotalsRowLabel:(id)arg1;
- (void)setUniqueName:(id)arg1;
- (id)totalsRowDxf;
- (unsigned int)totalsRowDxfIndex;
- (id)totalsRowLabel;
- (id)uniqueName;

@end
