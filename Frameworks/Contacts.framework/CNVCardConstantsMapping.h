/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNVCardConstantsMapping : NSObject {
    NSDictionary *_mapping;
}

@property (nonatomic, retain) NSDictionary *mapping;

+ (id)CNToVCardInstantMessageConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)vCardToCNSocialProfileConstantsMapping;

- (void)dealloc;
- (id)initWithMapping:(id)arg1;
- (id)invertedMapping;
- (id)mappedConstant:(id)arg1;
- (id)mapping;
- (void)setMapping:(id)arg1;

@end
